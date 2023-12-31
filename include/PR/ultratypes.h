#ifndef _ULTRATYPES_H_
#define _ULTRATYPES_H_

#ifndef _LANGUAGE_ASSEMBLY

typedef float  f32;
typedef double f64;

#ifndef TARGET_SWITCH

#ifndef NULL
#define NULL    (void *)0
#endif

typedef signed char            s8;
typedef unsigned char          u8;
typedef signed short int       s16;
typedef unsigned short int     u16;
typedef signed int             s32;
typedef unsigned int           u32;
typedef signed long long int   s64;
typedef unsigned long long int u64;

typedef volatile u8   vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8   vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;

#ifdef TARGET_N64
typedef u32 size_t;
typedef s32 ssize_t;
typedef u32 uintptr_t;
typedef s32 intptr_t;
typedef s32 ptrdiff_t;
typedef int bool;
#define true 1
#define false 0
#else
#include <stddef.h>
#include <stdint.h>
#include <sys/types.h>

#if defined(__MINGW32__) 
#include <_mingw.h>
#if !defined(__MINGW64_VERSION_MAJOR)
typedef long ssize_t;
#else
typedef ptrdiff_t ssize_t;
#endif
#endif
#endif

#else // TARGET_SWITCH

#include <switch/types.h>
typedef ptrdiff_t ssize_t;
#endif

#endif

#ifndef TRUE
#define TRUE    1
#endif

#ifndef FALSE
#define FALSE   0
#endif
 
#ifndef NULL
#define NULL    (void *)0
#endif

#endif // _ULTRATYPES_H_
