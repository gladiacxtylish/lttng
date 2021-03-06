
#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER hello_world

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./hello-tp.h"

#if !defined(HELLO_TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define HELLO_TP_H

#include <lttng/tracepoint.h>

/*
TRACEPOINT_EVENT(
    hello_world,
    my_first_tracepoint,
    TP_ARGS(
        int, my_integer_arg,
        char*, my_string_arg,
        int, my_second_integer_arg
    ),
    TP_FIELDS(
        ctf_integer(int, my_integer_field, my_integer_arg)
        ctf_string(my_string_field, my_string_arg)
        ctf_integer(int, my_second_integer_field, my_second_integer_arg)
    )
)
*/


#endif /* HELLO_TP_H */

#include <lttng/tracepoint-event.h>


