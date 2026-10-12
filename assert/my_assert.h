#ifndef MY_ASSERT_H
#define MY_ASSERT_H

#include <stdio.h>
#include <stdlib.h>

extern char *program_invocation_short_name;   /* 실행 파일 이름 */

#ifdef NDEBUG
#define my_assert(expr) ((void)0)
#else
#define my_assert(expr) \
    ((expr) ? (void)0 : my_assert_fail(#expr, __FILE__, __LINE__, __func__))

static inline void my_assert_fail(const char *expr, const char *file,
                                  int line, const char *func)
{
    fprintf(stderr, "%s: %s:%d: %s: Assertion `%s' failed.\n",
            program_invocation_short_name, file, line, func, expr);
    abort();
}
#endif

#endif
