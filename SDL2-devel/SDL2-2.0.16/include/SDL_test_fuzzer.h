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
 *  \file SDL_test_fuzzer.h
 *
 *  Include file for SDL test framework.
 *
 *  This code is a part of the SDL2_test library, not the main SDL library.
 */

/*

  Data generators for fuzzing test data in a reproducible way.

*/

#ifndef SDL_test_fuzzer_h_
#define SDL_test_fuzzer_h_

#include "begin_code.h"
/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
extern "C" {
#endif


/*
  Based on GSOC code by Markus Kauppila <markus.kauppila@gmail.com>
*/


/**
 * \file
 * Note: The fuzzer implementation uses a static instance of random context
 * internally which makes it thread-UNsafe.
 */

/**
 * Initializes the fuzzer for a test
 *
 * \param execKey Execution "Key" that initializes the random number generator uniquely for the test.
 *
 */
void SDLTest_FuzzerInit(Uint64 execKey);


/**
 * Returns a random Uint8
 *
 * \returns a generated integer
 */
Uint8 SDLTest_RandomUint8(void);

/**
 * Returns a random Sint8
 *
 * \returns a generated signed integer
 */
Sint8 SDLTest_RandomSint8(void);


/**
 * Returns a random Uint16
 *
 * \returns a generated integer
 */
Uint16 SDLTest_RandomUint16(void);

/**
 * Returns a random Sint16
 *
 * \returns a generated signed integer
 */
Sint16 SDLTest_RandomSint16(void);


/**
 * Returns a random integer
 *
 * \returns a generated integer
 */
Sint32 SDLTest_RandomSint32(void);


/**
 * Returns a random positive integer
 *
 * \returns a generated integer
 */
Uint32 SDLTest_RandomUint32(void);

/*