//  :copyright: (c) 2017 Joyent, Inc. and other Node contributors.
//  :copyright: (c) 2017-2018 Alex Huszagh.
//  :license: MIT, see licenses/mit.md for more details.
/**
 *  \addtogroup PyCPP
 *  \brief Windows API definitions.
 *
 *  \synopsis
 *      #if defined(PYCPP_WINDOWS)
 *      #   define ERROR_ELEVATION_REQUIRED implementation-defined
 *      #   define ERROR_SYMLINK_NOT_SUPPORTED implementation-defined
 *      #   define ERROR_MUI_FILE_NOT_FOUND implementation-defined
 *      #   define ERROR_MUI_INVALID_FILE implementation-defined
 *      #   define ERROR_MUI_INVALID_RC_CONFIG implementation-defined
 *      #   define ERROR_MUI_INVALID_LOCALE_NAME implementation-defined
 *      #   define ERROR_MUI_INVALID_ULTIMATEFALLBACK_NAME implementation-defined
 *      #   define ERROR_MUI_FILE_NOT_LOADED implementation-defined
 *      #endif
 *
 *      int translate_win32_error(int code) noexcept;
 *      void set_errno_win32() noexcept;
 */

#pragma once

#include <pycpp/preprocessor/os.h>
#include <pycpp/config.h>

#if defined(PYCPP_WINDOWS)
#   include <winsock2.h>
#   include <windows.h>

// MACROS
// ------

// winerror.h
#ifndef ERROR_ELEVATION_REQUIRED
#   define ERROR_ELEVATION_REQUIRED 740
#endif

#ifndef ERROR_SYMLINK_NOT_SUPPORTED
#   define ERROR_SYMLINK_NOT_SUPPORTED 1464
#endif

#ifndef ERROR_MUI_FILE_NOT_FOUND
#   define ERROR_MUI_FILE_NOT_FOUND 15100
#endif

#ifndef ERROR_MUI_INVALID_FILE
#   define ERROR_MUI_INVALID_FILE 15101
#endif

#ifndef ERROR_MUI_INVALID_RC_CONFIG
#   define ERROR_MUI_INVALID_RC_CONFIG 15102
#endif

#ifndef ERROR_MUI_INVALID_LOCALE_NAME
#   define ERROR_MUI_INVALID_LOCALE_NAME 15103
#endif

#ifndef ERROR_MUI_INVALID_ULTIMATEFALLBACK_NAME
#   define ERROR_MUI_INVALID_ULTIMATEFALLBACK_NAME 15104
#endif

#ifndef ERROR_MUI_FILE_NOT_LOADED
#   define ERROR_MUI_FILE_NOT_LOADED 15105
#endif

#endif                  // defined(PYCPP_WINDOWS)

PYCPP_BEGIN_NAMESPACE

// FUNCTIONS
// ---------

/**
 *  \brief Translate a Win32 error from `GetLastError()` to `errno`.
 */
int
translate_win32_error(
    int code
)
noexcept;


/**
 *  \brief Set `errno` appropriately from `GetLastError()`.
 */
void
set_errno_win32()
noexcept;

PYCPP_END_NAMESPACE
