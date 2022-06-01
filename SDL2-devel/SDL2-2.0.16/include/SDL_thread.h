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

#ifndef SDL_thread_h_
#define SDL_thread_h_

/**
 *  \file SDL_thread.h
 *
 *  Header for the SDL thread management routines.
 */

#include "SDL_stdinc.h"
#include "SDL_error.h"

/* Thread synchronization primitives */
#include "SDL_atomic.h"
#include "SDL_mutex.h"

#if defined(__WIN32__)
#include <process.h> /* _beginthreadex() and _endthreadex() */
#endif
#if defined(__OS2__) /* for _beginthread() and _endthread() */
#ifndef __EMX__
#include <process.h>
#else
#include <stdlib.h>
#endif
#endif

#include "begin_code.h"
/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
extern "C" {
#endif

/* The SDL thread structure, defined in SDL_thread.c */
struct SDL_Thread;
typedef struct SDL_Thread SDL_Thread;

/* The SDL thread ID */
typedef unsigned long SDL_threadID;

/* Thread local storage ID, 0 is the invalid ID */
typedef unsigned int SDL_TLSID;

/**
 *  The SDL thread priority.
 *
 *  SDL will make system changes as necessary in order to apply the thread priority.
 *  Code which attempts to control thread state related to priority should be aware
 *  that calling SDL_SetThreadPriority may alter such state.
 *  SDL_HINT_THREAD_PRIORITY_POLICY can be used to control aspects of this behavior.
 *
 *  \note On many systems you require special privileges to set high or time critical priority.
 */
typedef enum {
    SDL_THREAD_PRIORITY_LOW,
    SDL_THREAD_PRIORITY_NORMAL,
    SDL_THREAD_PRIORITY_HIGH,
    SDL_THREAD_PRIORITY_TIME_CRITICAL
} SDL_ThreadPriority;

/**
 * The function passed to SDL_CreateThread().
 *
 * \param data what was passed as `data` to SDL_CreateThread()
 * \returns a value that can be reported through SDL_WaitThread().
 */
typedef int (SDLCALL * SDL_ThreadFunction) (void *data);


#if defined(__WIN32__)
/**
 *  \file SDL_thread.h
 *
 *  We compile SDL into a DLL. This means, that it's the DLL which
 *  creates a new thread for the calling process with the SDL_CreateThread()
 *  API. There is a problem with this, that only the RTL of the SDL2.DLL will
 *  be initialized for those threads, and not the RTL of the calling
 *  application!
 *
 *  To solve this, we make a little hack here.
 *
 *  We'll always use the caller's _beginthread() a