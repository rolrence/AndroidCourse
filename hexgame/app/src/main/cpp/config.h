///* config.h.in.  Generated from configure.in by autoheader.  */
//
///* Define to 1 if you have the <Carbon/Carbon.h> header file. */
//#undef HAVE_CARBON_CARBON_H
//
///* Define if you have the CoreAudio API */
//#undef HAVE_COREAUDIO
//
///* Define to 1 if you have the <crt_externs.h> header file. */
//#undef HAVE_CRT_EXTERNS_H
//
///* Defines if your system has the crypt function */
//#undef HAVE_CRYPT
//
///* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
//   */
//#undef HAVE_DIRENT_H
//
///* Define to 1 if you have the <dlfcn.h> header file. */
//#undef HAVE_DLFCN_H
//
///* Define to 1 if you have the <fcntl.h> header file. */
//#undef HAVE_FCNTL_H
//
///* Define to 1 if you have the <inttypes.h> header file. */
//#undef HAVE_INTTYPES_H
//
///* Define if you have libjpeg */
//#undef HAVE_LIBJPEG
//
///* Define if you have libpng */
//#undef HAVE_LIBPNG
//
///* Define if you have a working libpthread (will enable threaded code) */
//#undef HAVE_LIBPTHREAD
//
///* Define if you have libz */
//#undef HAVE_LIBZ
//
///* Define to 1 if you have the <memory.h> header file. */
//#undef HAVE_MEMORY_H
//
///* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
//#undef HAVE_NDIR_H
//
///* Define if your system needs _NSGetEnviron to set up the environment */
//#undef HAVE_NSGETENVIRON
//
///* Define to 1 if you have the <paths.h> header file. */
//#undef HAVE_PATHS_H
//
///* Define if you have res_init */
//#undef HAVE_RES_INIT
//
///* Define if you have the res_init prototype */
//#undef HAVE_RES_INIT_PROTO
//
///* Define if you have a STL implementation by SGI */
//#undef HAVE_SGI_STL
//
///* Define to 1 if you have the `snprintf' function. */
//#undef HAVE_SNPRINTF
//
///* Define to 1 if you have the <stdint.h> header file. */
//#undef HAVE_STDINT_H
//
///* Define to 1 if you have the <stdlib.h> header file. */
//#undef HAVE_STDLIB_H
//
///* Define to 1 if you have the <strings.h> header file. */
//#undef HAVE_STRINGS_H
//
///* Define to 1 if you have the <string.h> header file. */
//#undef HAVE_STRING_H
//
///* Define if you have strlcat */
//#undef HAVE_STRLCAT
//
///* Define if you have the strlcat prototype */
//#undef HAVE_STRLCAT_PROTO
//
///* Define if you have strlcpy */
//#undef HAVE_STRLCPY
//
///* Define if you have the strlcpy prototype */
//#undef HAVE_STRLCPY_PROTO
//
///* Define to 1 if you have the <sys/bitypes.h> header file. */
//#undef HAVE_SYS_BITYPES_H
//
///* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
//   */
//#undef HAVE_SYS_DIR_H
//
///* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
//   */
//#undef HAVE_SYS_NDIR_H
//
///* Define to 1 if you have the <sys/stat.h> header file. */
//#undef HAVE_SYS_STAT_H
//
///* Define to 1 if you have the <sys/time.h> header file. */
//#undef HAVE_SYS_TIME_H
//
///* Define to 1 if you have the <sys/types.h> header file. */
//#undef HAVE_SYS_TYPES_H
//
///* Define to 1 if you have the <unistd.h> header file. */
//#undef HAVE_UNISTD_H
//
///* Define to 1 if you have the `usleep' function. */
//#undef HAVE_USLEEP
//
///* Define to 1 if you have the `vsnprintf' function. */
//#undef HAVE_VSNPRINTF
//
///* Suffix for lib directories */
//#undef KDELIBSUFF
//
///* Name of package */
//#undef PACKAGE
//
///* Define to the address where bug reports for this package should be sent. */
//#undef PACKAGE_BUGREPORT
//
///* Define to the full name of this package. */
//#undef PACKAGE_NAME
//
///* Define to the full name and version of this package. */
//#undef PACKAGE_STRING
//
///* Define to the one symbol short name of this package. */
//#undef PACKAGE_TARNAME
//
///* Define to the version of this package. */
//#undef PACKAGE_VERSION
//
///* The size of `char *', as computed by sizeof. */
//#undef SIZEOF_CHAR_P
//
///* The size of `int', as computed by sizeof. */
//#undef SIZEOF_INT
//
///* The size of `long', as computed by sizeof. */
//#undef SIZEOF_LONG
//
///* The size of `short', as computed by sizeof. */
//#undef SIZEOF_SHORT
//
///* The size of `size_t', as computed by sizeof. */
//#undef SIZEOF_SIZE_T
//
///* The size of `unsigned long', as computed by sizeof. */
//#undef SIZEOF_UNSIGNED_LONG
//
///* Define to 1 if you have the ANSI C header files. */
//#undef STDC_HEADERS
//
///* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
//#undef TIME_WITH_SYS_TIME
//
///* Version number of package */
//#undef VERSION
//
///* Defined if compiling without arts */
//#undef WITHOUT_ARTS
//
///*
// * jpeg.h needs HAVE_BOOLEAN, when the system uses boolean in system
// * headers and I'm too lazy to write a configure test as long as only
// * unixware is related
// */
//#ifdef _UNIXWARE
//#define HAVE_BOOLEAN
//#endif
//
//
//
///*
// * AIX defines FD_SET in terms of bzero, but fails to include <strings.h>
// * that defines bzero.
// */
//
//#if defined(_AIX)
//#include <strings.h>
//#endif
//
//
//#if defined(HAVE_NSGETENVIRON) && defined(HAVE_CRT_EXTERNS_H)
//# include <sys/time.h>
//# include <crt_externs.h>
//# define environ (*_NSGetEnviron())
//#endif
//
//
//#if !defined(HAVE_RES_INIT_PROTO)
//#ifdef __cplusplus
//extern "C" {
//#endif
//int res_init(void);
//#ifdef __cplusplus
//}
//#endif
//#endif
//
//
//#if !defined(HAVE_STRLCAT_PROTO)
//#ifdef __cplusplus
//extern "C" {
//#endif
//unsigned long strlcat(char *, const char *, unsigned long);
//#ifdef __cplusplus
//}
//#endif
//#endif
//
//
//#if !defined(HAVE_STRLCPY_PROTO)
//#ifdef __cplusplus
//extern "C" {
//#endif
//unsigned long strlcpy(char *, const char *, unsigned long);
//#ifdef __cplusplus
//}
//#endif
//#endif
//
//
//
///*
// * On HP-UX, the declaration of vsnprintf() is needed every time !
// */
//
//#if !defined(HAVE_VSNPRINTF) || defined(hpux)
//#if __STDC__
//
//#include <stdarg.h>
//#include <stdlib.h>
//
//#else
//#include <varargs.h>
//#endif
//#ifdef __cplusplus
//extern "C"
//#endif
//int vsnprintf(char *str, size_t n, char const *fmt, va_list ap);
//#ifdef __cplusplus
//extern "C"
//#endif
//int snprintf(char *str, size_t n, char const *fmt, ...);
//#endif
//
//
//#if defined(__SVR4) && !defined(__svr4__)
//#define __svr4__ 1
//#endif
//
//
///* type to use in place of socklen_t if not defined */
//#undef kde_socklen_t
//
///* type to use in place of socklen_t if not defined (deprecated, use
//   kde_socklen_t) */
//#undef ksize_t
