/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2021 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

/**
 *  \file SDL_haptic.h
 *
 *  \brief The SDL haptic subsystem allows you to control haptic (force feedback)
 *         devices.
 *
 *  The basic usage is as follows:
 *   - Initialize the subsystem (::SDL_INIT_HAPTIC).
 *   - Open a haptic device.
 *    - SDL_HapticOpen() to open from index.
 *    - SDL_HapticOpenFromJoystick() to open from an existing joystick.
 *   - Create an effect (::SDL_HapticEffect).
 *   - Upload the effect with SDL_HapticNewEffect().
 *   - Run the effect with SDL_HapticRunEffect().
 *   - (optional) Free the effect with SDL_HapticDestroyEffect().
 *   - Close the haptic device with SDL_HapticClose().
 *
 * \par Simple rumble example:
 * \code
 *    SDL_Haptic *haptic;
 *
 *    // Open the device
 *    haptic = SDL_HapticOpen( 0 );
 *    if (haptic == NULL)
 *       return -1;
 *
 *    // Initialize simple rumble
 *    if (SDL_HapticRumbleInit( haptic ) != 0)
 *       return -1;
 *
 *    // Play effect at 50% strength for 2 seconds
 *    if (SDL_HapticRumblePlay( haptic, 0.5, 2000 ) != 0)
 *       return -1;
 *    SDL_Delay( 2000 );
 *
 *    // Clean up
 *    SDL_HapticClose( haptic );
 * \endcode
 *
 * \par Complete example:
 * \code
 * int test_haptic( SDL_Joystick * joystick ) {
 *    SDL_Haptic *haptic;
 *    SDL_HapticEffect effect;
 *    int effect_id;
 *
 *    // Open the device
 *    haptic = SDL_HapticOpenFromJoystick( joystick );
 *    if (haptic == NULL) return -1; // Most likely joystick isn't haptic
 *
 *    // See if it can do sine waves
 *    if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SINE)==0) {
 *       SDL_HapticClose(haptic); // No sine effect
 *       return -1;
 *    }
 *
 *    // Create the effect
 *    memset( &effect, 0, sizeof(SDL_HapticEffect) ); // 0 is safe default
 *    effect.type = SDL_HAPTIC_SINE;
 *    effect.periodic.direction.type = SDL_HAPTIC_POLAR; // Polar coordinates
 *    effect.periodic.direction.dir[0] = 18000; // Force comes from south
 *    effect.periodic.period = 1000; // 1000 ms
 *    effect.periodic.magnitude = 20000; // 20000/32767 strength
 *    effect.periodic.length = 5000; // 5 seconds long
 *    effect.periodic.attack_length = 1000; // Takes 1 second to get max strength
 *    effect.periodic.fade_length = 1000; // Takes 1 second to fade away
 *
 *    // Upload the effect
 *    effect_id = SDL_HapticNewEffect( haptic, &effect );
 *
 *    // Test the effect
 *    SDL_HapticRunEffect( haptic, effect_id, 1 );
 *    SDL_Delay( 5000); // Wait for the effect t