
#define TRACEPOINT_CREATE_PROBES
/*
 * The header containing our TRACEPOINT_EVENTs.
 */
#define TRACEPOINT_DEFINE
#include "hello-tp.h"


#include <string>
#include <typeinfo>
#include <vector>
#include <iostream>
//#include <lttng/tracef.h>


// extern struct tracepoint __tracepoint_hello_world___my_first_tracepoint3;

// template <typename A, typename B>
// static inline __attribute__((always_inline, unused)) __attribute__((no_instrument_function)) void __tracepoint_cb_hello_world___my_first_tracepoint3(
// 		A my_integer_arg, B my_string_arg);
// template <typename A, typename B>
// static void __tracepoint_cb_hello_world___my_first_tracepoint3(
// 		A my_integer_arg, B my_string_arg) {
// 	struct tracepoint_probe *__tp_probe;
// 	if (__builtin_expect(!!(!tracepoint_dlopen.rcu_read_lock_sym_bp), 0))
// 		return;
// 	tracepoint_dlopen.rcu_read_lock_sym_bp();
// 	__tp_probe =
// 			((__typeof__(__tracepoint_hello_world___my_first_tracepoint3.probes)) (tracepoint_dlopen.rcu_dereference_sym_bp(
// 					((void *) (__tracepoint_hello_world___my_first_tracepoint3.probes)))));
// 	if (__builtin_expect(!!(!__tp_probe), 0))
// 		goto end;
// 	do {
// 		void (*__tp_cb)(void) = __tp_probe->func;
// 		void *__tp_data = __tp_probe->data;
// 		((void (*)(void *__tp_data, A my_integer_arg, B my_string_arg)) (__tp_cb))(
// 				__tp_data, my_integer_arg, my_string_arg);
// 	} while ((++__tp_probe)->func);
// 	end: tracepoint_dlopen.rcu_read_unlock_sym_bp();
// }


// template <typename A, typename B>
// static inline __attribute__((no_instrument_function)) void __tracepoint_register_hello_world___my_first_tracepoint3(
// 		char *name, void (*func)(void), void *data);
// template <typename A, typename B>
// static inline void __tracepoint_register_hello_world___my_first_tracepoint3(
// 		char *name, void (*func)(void), void *data) {
// 	__tracepoint_probe_register(name, func, data,
// 			__tracepoint_hello_world___my_first_tracepoint3.signature);
// }
// static inline __attribute__((no_instrument_function)) void __tracepoint_unregister_hello_world___my_first_tracepoint3(
// 		char *name, void (*func)(void), void *data);
// static inline void __tracepoint_unregister_hello_world___my_first_tracepoint3(
// 		char *name, void (*func)(void), void *data) {
// 	__tracepoint_probe_unregister(name, func, data);
// }
// //

// /*extern*/int __tracepoint_provider_hello_world2;
// static const char __tp_strtab_hello_world___my_first_tracepoint3[] //__attribute__((section("__tracepoints_strings")))
// 		= "hello_world" ":" "my_first_tracepoint";
// struct tracepoint __tracepoint_hello_world___my_first_tracepoint3 //__attribute__((section("__tracepoints")))
// 		= { __tp_strtab_hello_world___my_first_tracepoint3, 0, 0,
// 				&__tracepoint_provider_hello_world2,
// 				"int, my_integer_arg, char*, my_string_arg", { }, }; //((void *)0)

// static struct tracepoint * __tracepoint_ptr_hello_world___my_first_tracepoint3 __attribute__((used, section("__tracepoints_ptrs")))
// 		= &__tracepoint_hello_world___my_first_tracepoint3;

// static struct lttng_event_field __event_fields___hello_world___my_first_tracepoint3[2] = 
// { {.name = "my_string_field", .type = {.atype = atype_string, .u = {.basic = {.string = {.encoding = lttng_encode_UTF8}}},}, .nowrite = 0,}, {.name = "my_integer_field", .type = {.atype = atype_integer, .u = {.basic = {.integer = {.size = sizeof(int) * 8, .alignment = 1 * 8, .signedness = ((int) -1 < (int) 0), .reverse_byte_order = 1234 != 1234, .base = 10, .encoding = lttng_encode_none,}}},}, .nowrite = 0,},};

// template <typename A, typename B>
// static inline void __event_prepare_filter_stack__hello_world___my_first_tracepoint3(
// 		char *__stack_data, void *__tp_data, A my_integer_arg, B my_string_arg) {
		
// 	if (typeid(A).hash_code() == typeid(char*).hash_code())
// 	{
// 		const void *__ctf_tmp_ptr = (my_string_arg);
// 		memcpy(__stack_data, &__ctf_tmp_ptr, sizeof(void **));
// 		__stack_data += sizeof(void **);
// 	}
// 	else if (typeid(A).hash_code() == typeid(int).hash_code()) {
// 	if (((int) -1 < (int) 0)) {
// 		int64_t __ctf_tmp_int64;
// 		switch (sizeof(int)) {
// 		case 1: {
// 			union {
// 				int t;
// 				int8_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_int64 = (int64_t) __tmp.v;
// 			break;
// 		}
// 		case 2: {
// 			union {
// 				int t;
// 				int16_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_int64 = (int64_t) __tmp.v;
// 			break;
// 		}
// 		case 4: {
// 			union {
// 				int t;
// 				int32_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_int64 = (int64_t) __tmp.v;
// 			break;
// 		}
// 		case 8: {
// 			union {
// 				int t;
// 				int64_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_int64 = (int64_t) __tmp.v;
// 			break;
// 		}
// 		default:
// 			abort();
// 		};
// 		memcpy(__stack_data, &__ctf_tmp_int64, sizeof(int64_t));
// 	} else {
// 		uint64_t __ctf_tmp_uint64;
// 		switch (sizeof(int)) {
// 		case 1: {
// 			union {
// 				int t;
// 				uint8_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_uint64 = (uint64_t) __tmp.v;
// 			break;
// 		}
// 		case 2: {
// 			union {
// 				int t;
// 				uint16_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_uint64 = (uint64_t) __tmp.v;
// 			break;
// 		}
// 		case 4: {
// 			union {
// 				int t;
// 				uint32_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_uint64 = (uint64_t) __tmp.v;
// 			break;
// 		}
// 		case 8: {
// 			union {
// 				int t;
// 				uint64_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_uint64 = (uint64_t) __tmp.v;
// 			break;
// 		}
// 		default:
// 			abort();
// 		};
// 		memcpy(__stack_data, &__ctf_tmp_uint64, sizeof(uint64_t));
// 	}
// 	__stack_data += sizeof(int64_t);
// 	}
	
// 	if (typeid(B).hash_code() == typeid(char*).hash_code())
// 	{
// 		const void *__ctf_tmp_ptr = (my_string_arg);
// 		memcpy(__stack_data, &__ctf_tmp_ptr, sizeof(void **));
// 		__stack_data += sizeof(void **);
// 	}
// 	else if (typeid(B).hash_code() == typeid(int).hash_code()) {
// 	if (((int) -1 < (int) 0)) {
// 		int64_t __ctf_tmp_int64;
// 		switch (sizeof(int)) {
// 		case 1: {
// 			union {
// 				int t;
// 				int8_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_int64 = (int64_t) __tmp.v;
// 			break;
// 		}
// 		case 2: {
// 			union {
// 				int t;
// 				int16_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_int64 = (int64_t) __tmp.v;
// 			break;
// 		}
// 		case 4: {
// 			union {
// 				int t;
// 				int32_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_int64 = (int64_t) __tmp.v;
// 			break;
// 		}
// 		case 8: {
// 			union {
// 				int t;
// 				int64_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_int64 = (int64_t) __tmp.v;
// 			break;
// 		}
// 		default:
// 			abort();
// 		};
// 		memcpy(__stack_data, &__ctf_tmp_int64, sizeof(int64_t));
// 	} else {
// 		uint64_t __ctf_tmp_uint64;
// 		switch (sizeof(int)) {
// 		case 1: {
// 			union {
// 				int t;
// 				uint8_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_uint64 = (uint64_t) __tmp.v;
// 			break;
// 		}
// 		case 2: {
// 			union {
// 				int t;
// 				uint16_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_uint64 = (uint64_t) __tmp.v;
// 			break;
// 		}
// 		case 4: {
// 			union {
// 				int t;
// 				uint32_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_uint64 = (uint64_t) __tmp.v;
// 			break;
// 		}
// 		case 8: {
// 			union {
// 				int t;
// 				uint64_t v;
// 			} __tmp = { (int) (my_integer_arg) };
// 			__ctf_tmp_uint64 = (uint64_t) __tmp.v;
// 			break;
// 		}
// 		default:
// 			abort();
// 		};
// 		memcpy(__stack_data, &__ctf_tmp_uint64, sizeof(uint64_t));
// 	}
// 	__stack_data += sizeof(int64_t);
// 	}
// }

// template <typename A, typename B>
// static inline __attribute__((no_instrument_function))  size_t __event_get_size__hello_world___my_first_tracepoint3(
// 		size_t *__dynamic_len, void *__tp_data, int my_integer_arg,
// 		char* my_string_arg);
// template <typename A, typename B>
// static inline size_t __event_get_size__hello_world___my_first_tracepoint3(
// 		size_t *__dynamic_len, void *__tp_data, int my_integer_arg,
// 		char* my_string_arg) {
// 	size_t __event_len = 0;
// 	unsigned int __dynamic_len_idx = 0;
// 	if (0)
// 		(void) __dynamic_len_idx;
// 	__event_len += __dynamic_len[__dynamic_len_idx++] = strlen(my_string_arg)
// 			+ 1;
// 	__event_len += lib_ring_buffer_align(__event_len, 1);
// 	__event_len += sizeof(int);
// 	return __event_len;
// }

// template <typename A, typename B>
// static inline __attribute__((no_instrument_function))  size_t __event_get_align__hello_world___my_first_tracepoint3(
// 		int my_integer_arg, char* my_string_arg);
// template <typename A, typename B>
// static inline size_t __event_get_align__hello_world___my_first_tracepoint3(
// 		int my_integer_arg, char* my_string_arg) {
// 	size_t __event_align = 1;
// 	__event_align =
// 			( {	size_t __max1 = (__event_align); size_t __max2 = (1); __max1 > __max2 ? __max1: __max2;});
// 	return __event_align;
// }

// template <typename A, typename B>
// static __attribute__((no_instrument_function)) void __event_probe__hello_world___my_first_tracepoint3(
// 		void *__tp_data, int my_integer_arg, char* my_string_arg);
// template <typename A, typename B>
// static void __event_probe__hello_world___my_first_tracepoint3(void *__tp_data,
// 		int my_integer_arg, char* my_string_arg) {
// 	struct lttng_event *__event = (struct lttng_event *) __tp_data;
// 	struct lttng_channel *__chan = __event->chan;
// 	struct lttng_ust_lib_ring_buffer_ctx __ctx;
// 	size_t __event_len, __event_align;
// 	size_t __dynamic_len_idx = 0;
// 	union {
// 		size_t __dynamic_len[(sizeof(__event_fields___hello_world___my_first_tracepoint3) / sizeof((__event_fields___hello_world___my_first_tracepoint3)[0]))];
// 		char __filter_stack_data[2 * sizeof(unsigned long) * (sizeof(__event_fields___hello_world___my_first_tracepoint3) / sizeof((__event_fields___hello_world___my_first_tracepoint3)[0]))];
// 	}
// 	__stackvar;
// 	int __ret;
// 	if (0)
// 		(void) __dynamic_len_idx;
// 	if (!1)
// 		return;
// 	if (__builtin_expect(
// 			!!(!(*(__volatile__ __typeof__(__chan->session->active) *) &(__chan->session->active))),
// 			0))
// 		return;
// 	if (__builtin_expect(
// 			!!(!(*(__volatile__ __typeof__(__chan->enabled) *) &(__chan->enabled))),
// 			0))
// 		return;
// 	if (__builtin_expect(
// 			!!(!(*(__volatile__ __typeof__(__event->enabled) *) &(__event->enabled))),
// 			0))
// 		return;
// 	if (__builtin_expect(!!(!tracepoint_dlopen.rcu_read_lock_sym_bp), 0))
// 		return;
// 	if (__builtin_expect(!!(!cds_list_empty(&__event->bytecode_runtime_head)),
// 			0)) {
// 		struct lttng_bytecode_runtime *bc_runtime;
// 		int __filter_record = __event->has_enablers_without_bytecode;
// 		__event_prepare_filter_stack__hello_world___my_first_tracepoint3<int, char *>(
// 				__stackvar.__filter_stack_data, __tp_data, my_integer_arg,
// 				my_string_arg);
// 		for (bc_runtime =
// 				((__typeof__(*bc_runtime) *) ((char *) (((__typeof__((&__event->bytecode_runtime_head)->next)) (tracepoint_dlopen.rcu_dereference_sym_bp(
// 						((void *) ((&__event->bytecode_runtime_head)->next))))))
// 						- (unsigned long) (&((__typeof__(*bc_runtime) *) 0)->node)));
// 				&bc_runtime->node != (&__event->bytecode_runtime_head);
// 				bc_runtime =
// 						((__typeof__(*bc_runtime) *) ((char *) (((__typeof__(bc_runtime->node.next)) (tracepoint_dlopen.rcu_dereference_sym_bp(
// 								((void *) (bc_runtime->node.next))))))
// 								- (unsigned long) (&((__typeof__(*bc_runtime) *) 0)->node)))) {
// 			if (__builtin_expect(
// 					!!(bc_runtime->filter(bc_runtime,
// 							__stackvar.__filter_stack_data)
// 							& LTTNG_FILTER_RECORD_FLAG), 0))
// 				__filter_record = 1;
// 		}
// 		if (__builtin_expect(!!(!__filter_record), 1))
// 			return;
// 	}
// 	__event_len = __event_get_size__hello_world___my_first_tracepoint3<int, char *>(
// 			__stackvar.__dynamic_len, __tp_data, my_integer_arg, my_string_arg);
// 	__event_align = __event_get_align__hello_world___my_first_tracepoint3<int, char *>(
// 			my_integer_arg, my_string_arg);
// 	lib_ring_buffer_ctx_init(&__ctx, __chan->chan, __event, __event_len,
// 			__event_align, -1, __chan->handle);
// 	__ctx.ip = __builtin_return_address(0);
// 	__ret = __chan->ops->event_reserve(&__ctx, __event->id);
// 	if (__ret < 0)
// 		return;
// 	lib_ring_buffer_align_ctx(&__ctx, 1);
// 	if (__chan->ops->u.has_strcpy)
// 		__chan->ops->event_strcpy(&__ctx, my_string_arg,
// 				__stackvar.__dynamic_len[__dynamic_len_idx++]);
// 	else
// 		__chan->ops->event_write(&__ctx, my_string_arg,
// 				__stackvar.__dynamic_len[__dynamic_len_idx++]);
// 	{
// 		int __tmp = (my_integer_arg);
// 		lib_ring_buffer_align_ctx(&__ctx, 1);
// 		__chan->ops->event_write(&__ctx, &__tmp, sizeof(__tmp));
// 	}
// 	__chan->ops->event_commit(&__ctx);
// }
// ;

// const char __tp_event_signature___hello_world___my_first_tracepoint3[] =
// 		"int, my_integer_arg, char*, my_string_arg";

// static const int * __ref_loglevel___hello_world___my_first_tracepoint3 __attribute__((weakref ("_loglevel___" "hello_world" "___" "my_first_tracepoint")));
// static const char * __ref_model_emf_uri___hello_world___my_first_tracepoint3 __attribute__((weakref ("_model_emf_uri___" "hello_world" "___" "my_first_tracepoint")));
// const struct lttng_event_desc __event_desc___hello_world_my_first_tracepoint3 = {
// 	.name = "hello_world" ":" "my_first_tracepoint",
// 	.probe_callback = (void (*)(void)) &__event_probe__hello_world___my_first_tracepoint3<int, char *>,
// 	.ctx = 0, //((void *)0)
// 	.fields = __event_fields___hello_world___my_first_tracepoint3,
// 	.nr_fields = (sizeof(__event_fields___hello_world___my_first_tracepoint3) / sizeof((__event_fields___hello_world___my_first_tracepoint3)[0])),
// 	.loglevel = &__ref_loglevel___hello_world___my_first_tracepoint3,
// 	.signature = __tp_event_signature___hello_world___my_first_tracepoint3,
// 	.u = {
// 		.ext = {
// 			.model_emf_uri = &__ref_model_emf_uri___hello_world___my_first_tracepoint3
// 		}
// 	},
// };

// static const struct lttng_event_desc *__event_desc___hello_world3[] = {
// 		&__event_desc___hello_world_my_first_tracepoint3, };

// struct lttng_probe_desc __probe_desc___hello_world3 = {
// 	.provider = "hello_world",
// 	.event_desc = __event_desc___hello_world3,
// 	.nr_events = (sizeof(__event_desc___hello_world3) / sizeof((__event_desc___hello_world3)[0])),
// 	.head = {0, 0}, //{ ((void *)0), ((void *)0) },
// 	.lazy_init_head = {0, 0}, //{ ((void *)0), ((void *)0) },
// 	.lazy = 0,
// 	.major = 1,
// 	.minor = 0,
// };

// //////////////////////
// //////////////////////
// //////////////////////
// //////////////////////
// //////////////////////
// //////////////////////

// template <typename A, typename B>
// class LinuxTrace {
// 	public:
	
// 	void init () {
// 	 	// lttng_event_field temp = {
// 		// 	.name = "my_string_field", .type = {
// 		// 	    .atype = atype_string, .u = {
// 		// 	        .basic = {
// 		// 	            .string = {
// 		// 	                .encoding = lttng_encode_UTF8
// 		// 	            }
// 		// 	        }
// 		// 	    }
// 		// 	}, .nowrite = 0
// 		// };
			
// 		//__event_fields___hello_world___my_first_tracepoint3_[0] = temp;
		
// 		// __event_fields___hello_world___my_first_tracepoint3_[1] = {
// 		// 	.name = "my_integer_field", .type = {
// 		// 	    .atype = atype_integer, .u = {
// 		// 	        .basic = {
// 		// 	            .integer = {
// 		// 	                .size = sizeof(int) * 8, .alignment = 1 * 8, .signedness = ((int) -1 < (int) 0), .reverse_byte_order = 1234 != 1234, .base = 10, .encoding = lttng_encode_none,
// 		// 	            }
// 		// 	        }
// 		// 	    },
// 		// 	}, .nowrite = 0,
// 		// };
		
		
// 		__tp_strtab_hello_world___my_first_tracepoint3_ = "hello_world" ":" "my_first_tracepoint";
// 		std::cout << __tracepoint_hello_world___my_first_tracepoint3_.name;
// 		__tracepoint_hello_world___my_first_tracepoint3_.name = __tp_strtab_hello_world___my_first_tracepoint3_;
// 		__tracepoint_hello_world___my_first_tracepoint3_.state = 0;
// 		__tracepoint_hello_world___my_first_tracepoint3_.probes = 0;
// 		__tracepoint_hello_world___my_first_tracepoint3_.tracepoint_provider_ref = &__tracepoint_provider_hello_world3_;
// 		__tracepoint_hello_world___my_first_tracepoint3_.signature = "int, my_integer_arg, char*, my_string_arg";
// 		//__tracepoint_hello_world___my_first_tracepoint3_.padding = {};
// 	    __tracepoint_ptr_hello_world___my_first_tracepoint3_ = &__tracepoint_hello_world___my_first_tracepoint3_;
	  	
// 		// int ret;
// 		// ret = lttng_probe_register(&__probe_desc___hello_world3);
// 		// if (ret) {
// 		// 	printf("bad %d\n", ret);
// 		// }
// 	}
	
	
	
//     /*static*/ void __tracepoint_cb_hello_world___my_first_tracepoint3(A my_integer_arg, B my_string_arg) {
// 		struct tracepoint_probe *__tp_probe;
// 		std::cout << 'i';
// 		if (__builtin_expect(!!(!tracepoint_dlopen.rcu_read_lock_sym_bp), 0))
// 			return;
// 			std::cout << '0';
// 		tracepoint_dlopen.rcu_read_lock_sym_bp();
// 		std::cout << '1';
// 		std::cout << __tracepoint_hello_world___my_first_tracepoint3.probes;
// 		__tp_probe =
// 				((__typeof__(__tracepoint_hello_world___my_first_tracepoint3.probes)) (tracepoint_dlopen.rcu_dereference_sym_bp(
// 						((void *) (__tracepoint_hello_world___my_first_tracepoint3.probes)))));
// 	    std::cout << std::endl;
// 		std::cout << '2';
// 		std::cout << __tp_probe;
// 		std::cout << std::endl;
// 		if (__builtin_expect(!!(!__tp_probe), 0))
// 			goto end;
// 		do {std::cout << '3';
// 			void (*__tp_cb)(void) = __tp_probe->func;
// 			void *__tp_data = __tp_probe->data;
			
// 			((void (*)(void *__tp_data, A my_integer_arg, B my_string_arg)) (__tp_cb))(
// 					__tp_data, my_integer_arg, my_string_arg);
// 		} while ((++__tp_probe)->func);
// 		end: tracepoint_dlopen.rcu_read_unlock_sym_bp();
// 	}
	
	
// 	///*static*/ inline void __tracepoint_register_hello_world___my_first_tracepoint3(
// 	//	char *name, void (*func)(void), void *data) {
// 	//	__tracepoint_probe_register(name, func, data, this->__tracepoint_hello_world___my_first_tracepoint3_.signature);
// 	//}
	
// 	///*static*/ inline void __tracepoint_unregister_hello_world___my_first_tracepoint3(
// 	//		char *name, void (*func)(void), void *data) {
// 	//	__tracepoint_probe_unregister(name, func, data);
// 	//}
	
// 	/*extern*/ int __tracepoint_provider_hello_world3_;
// /*static*/ const char * __tp_strtab_hello_world___my_first_tracepoint3_; /*__attribute__((section("__tracepoints_strings")))*/
// 		//= "hello_world:my_first_tracepoint";
// /*static*/ struct tracepoint __tracepoint_hello_world___my_first_tracepoint3_; /*__attribute__((section("__tracepoints")))*/
// 		/*= { __tp_strtab_hello_world___my_first_tracepoint3, 0, 0,
// 				&__tracepoint_provider_hello_world2,
// 				"int, my_integer_arg, char*, my_string_arg", { }, }; //((void *)0)*/

// /*static*/ struct tracepoint * __tracepoint_ptr_hello_world___my_first_tracepoint3_; /*__attribute__((used, section("__tracepoints_ptrs")))*/
// 		//= &__tracepoint_hello_world___my_first_tracepoint3_;

// /*static*/ struct lttng_event_field __event_fields___hello_world___my_first_tracepoint3_[2];
	
	
// 	// struct lttng_probe_desc __probe_desc___hello_world3_ = {
// 	// 	.provider = "hello_world",
// 	// 	.event_desc = __event_desc___hello_world3,
// 	// 	.nr_events = (sizeof(__event_desc___hello_world3) / sizeof((__event_desc___hello_world3)[0])),
// 	// 	.head = {0, 0}, //{ ((void *)0), ((void *)0) },
// 	// 	.lazy_init_head = {0, 0}, //{ ((void *)0), ((void *)0) },
// 	// 	.lazy = 0,
// 	// 	.major = 1,
// 	// 	.minor = 0,
// 	// };
	
	
// };






/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
////////////////////////////////////////////////
/////////////////////////////////////////////////////
////////////////////////////////////////////////////
////////////////////////////////////////////////////



/*
extern struct lttng_ust_tracepoint __tracepoint_hello_world___my_first_tracepoint;
static inline __attribute__((always_inline, unused)) __attribute__((no_instrument_function)) void __tracepoint_cb_hello_world___my_first_tracepoint(int my_integer_arg,char* my_string_arg);
static void __tracepoint_cb_hello_world___my_first_tracepoint(int my_integer_arg,char* my_string_arg)
{
    struct lttng_ust_tracepoint_probe *__tp_probe;
    if (__builtin_expect(!!(!tracepoint_dlopen.rcu_read_lock_sym_bp), 0)) return;
    tracepoint_dlopen.rcu_read_lock_sym_bp();
    __tp_probe = (reinterpret_cast<__typeof__(__tracepoint_hello_world___my_first_tracepoint.probes)>(tracepoint_dlopen.rcu_dereference_sym_bp((reinterpret_cast<void *>(__tracepoint_hello_world___my_first_tracepoint.probes)))));
    if (__builtin_expect(!!(!__tp_probe), 0)) goto end;
    do
    {
        void (*__tp_cb)(void) = __tp_probe->func;
        void *__tp_data = __tp_probe->data;
        (reinterpret_cast<void (*)(void *__tp_data,int my_integer_arg,char* my_string_arg)>(__tp_cb)) (__tp_data,my_integer_arg,my_string_arg);
    }
    while ((++__tp_probe)->func);
    end: tracepoint_dlopen.rcu_read_unlock_sym_bp();
}
static inline __attribute__((no_instrument_function)) void __tracepoint_register_hello_world___my_first_tracepoint(char *name, void (*func)(void), void *data);
static inline void __tracepoint_register_hello_world___my_first_tracepoint(char *name, void (*func)(void), void *data)
{
    __tracepoint_probe_register(name, func, data, __tracepoint_hello_world___my_first_tracepoint.signature);
}
static inline __attribute__((no_instrument_function)) void __tracepoint_unregister_hello_world___my_first_tracepoint(char *name, void (*func)(void), void *data);
static inline void __tracepoint_unregister_hello_world___my_first_tracepoint(char *name, void (*func)(void), void *data)
{
    __tracepoint_probe_unregister(name, func, data);
}
extern int __tracepoint_provider_hello_world;
static const char __tp_strtab_hello_world___my_first_tracepoint[] __attribute__((section("__tracepoints_strings"))) = "hello_world" ":" "my_first_tracepoint";
struct lttng_ust_tracepoint __tracepoint_hello_world___my_first_tracepoint __attribute__((section("__tracepoints"))) =
{
    __tp_strtab_hello_world___my_first_tracepoint, 0, __null, &__tracepoint_provider_hello_world, "int, my_integer_arg, char*, my_string_arg",
    {
    }
    ,
}
;
static struct lttng_ust_tracepoint * __tracepoint_ptr_hello_world___my_first_tracepoint __attribute__((used, section("__tracepoints_ptrs"))) = &__tracepoint_hello_world___my_first_tracepoint;


*/
//////////////////////

//static const char __tp_name_len_checkhello_world___my_first_tracepoint[256] __attribute__((unused)) = "hello_world" ":" "my_first_tracepoint";


///////////////////////////



/*
static const struct lttng_event_field __event_fields___hello_world___my_first_tracepoint[] =
{
    {
        .name = "my_integer_field", .type =
        {
            .atype = atype_integer, .u =
            {
                .basic =
                {
                    .integer =
                    {
                        .size = sizeof(int) * 8, .alignment = 1 * 8, .signedness = ((int) -1 < (int) 0), .reverse_byte_order = 1234 != 1234, .base = 10, .encoding = lttng_encode_none,
                    }
                }
            },
        }, .nowrite = 0,
    },
    {
        .name = "my_string_field", .type =
        {
            .atype = atype_string, .u =
            {
                .basic =
                {
                    .string =
                    {
                        .encoding = lttng_encode_UTF8
                    }
                }
            }
            ,
        }, .nowrite = 0,
    },
};
*/


/////////////////////////

//static void __event_probe__hello_world___my_first_tracepoint(void *__tp_data,int my_integer_arg,char* my_string_arg);
///////////////////////////

/*
static inline __attribute__((no_instrument_function)) size_t __event_get_size__hello_world___my_first_tracepoint(size_t *__dynamic_len, void *__tp_data,int my_integer_arg,char* my_string_arg);
static inline size_t __event_get_size__hello_world___my_first_tracepoint(size_t *__dynamic_len, void *__tp_data,int my_integer_arg,char* my_string_arg)
{
    size_t __event_len = 0;
    unsigned int __dynamic_len_idx = 0;
    if (0) (void) __dynamic_len_idx;
    __event_len += lib_ring_buffer_align(__event_len, 1);
    __event_len += sizeof(int);
    __event_len += __dynamic_len[__dynamic_len_idx++] = strlen(my_string_arg) + 1;
    return __event_len;
}
*/

//////////////////////////////

/*
static inline void __event_prepare_filter_stack__hello_world___my_first_tracepoint(char *__stack_data, void *__tp_data,int my_integer_arg,char* my_string_arg)
{
    if (((int) -1 < (int) 0))
    {
        int64_t __ctf_tmp_int64;
        switch (sizeof(int))
        {
            case 1:
            {
                union
                {
                    int t;
                    int8_t v;
                }
                __tmp =
                {
                    (int) (my_integer_arg)
                }
                ;
                __ctf_tmp_int64 = (int64_t) __tmp.v;
                break;
            }
            case 2:
            {
                union
                {
                    int t;
                    int16_t v;
                }
                __tmp =
                {
                    (int) (my_integer_arg)
                }
                ;
                __ctf_tmp_int64 = (int64_t) __tmp.v;
                break;
            }
            case 4:
            {
                union
                {
                    int t;
                    int32_t v;
                }
                __tmp =
                {
                    (int) (my_integer_arg)
                }
                ;
                __ctf_tmp_int64 = (int64_t) __tmp.v;
                break;
            }
            case 8:
            {
                union
                {
                    int t;
                    int64_t v;
                }
                __tmp =
                {
                    (int) (my_integer_arg)
                }
                ;
                __ctf_tmp_int64 = (int64_t) __tmp.v;
                break;
            }
            default: abort();
        }
        ;
        memcpy(__stack_data, &__ctf_tmp_int64, sizeof(int64_t));
    }
    else
    {
        uint64_t __ctf_tmp_uint64;
        switch (sizeof(int))
        {
            case 1:
            {
                union
                {
                    int t;
                    uint8_t v;
                }
                __tmp =
                {
                    (int) (my_integer_arg)
                }
                ;
                __ctf_tmp_uint64 = (uint64_t) __tmp.v;
                break;
            }
            case 2:
            {
                union
                {
                    int t;
                    uint16_t v;
                }
                __tmp =
                {
                    (int) (my_integer_arg)
                }
                ;
                __ctf_tmp_uint64 = (uint64_t) __tmp.v;
                break;
            }
            case 4:
            {
                union
                {
                    int t;
                    uint32_t v;
                }
                __tmp =
                {
                    (int) (my_integer_arg)
                }
                ;
                __ctf_tmp_uint64 = (uint64_t) __tmp.v;
                break;
            }
            case 8:
            {
                union
                {
                    int t;
                    uint64_t v;
                }
                __tmp =
                {
                    (int) (my_integer_arg)
                }
                ;
                __ctf_tmp_uint64 = (uint64_t) __tmp.v;
                break;
            }
            default: abort();
        }
        ;
        memcpy(__stack_data, &__ctf_tmp_uint64, sizeof(uint64_t));
    }
    __stack_data += sizeof(int64_t);
    {
        const void *__ctf_tmp_ptr = (my_string_arg);
        memcpy(__stack_data, &__ctf_tmp_ptr, sizeof(void *));
        __stack_data += sizeof(void *);
    }
}
*/

/////////////////////////////
/*
static inline __attribute__((no_instrument_function)) size_t __event_get_align__hello_world___my_first_tracepoint(int my_integer_arg,char* my_string_arg);
static inline size_t __event_get_align__hello_world___my_first_tracepoint(int my_integer_arg,char* my_string_arg)
{
    size_t __event_align = 1;
    __event_align = (
    {
        size_t __max1 = (__event_align);
        size_t __max2 = (1);
        __max1 > __max2 ? __max1: __max2;
    }
    );
    return __event_align;
}
*/

///////////////////////////////

/*
static __attribute__((no_instrument_function)) void __event_probe__hello_world___my_first_tracepoint(void *__tp_data,int my_integer_arg,char* my_string_arg);
static void __event_probe__hello_world___my_first_tracepoint(void *__tp_data,int my_integer_arg,char* my_string_arg)
{
    struct lttng_event *__event = (struct lttng_event *) __tp_data;
    struct lttng_channel *__chan = __event->chan;
    struct lttng_ust_lib_ring_buffer_ctx __ctx;
    size_t __event_len, __event_align;
    size_t __dynamic_len_idx = 0;
    union
    {
        size_t __dynamic_len[(sizeof(__event_fields___hello_world___my_first_tracepoint) / sizeof((__event_fields___hello_world___my_first_tracepoint)[0]))];
        char __filter_stack_data[2 * sizeof(unsigned long) * (sizeof(__event_fields___hello_world___my_first_tracepoint) / sizeof((__event_fields___hello_world___my_first_tracepoint)[0]))];
    }
    __stackvar;
    int __ret;
    if (0) (void) __dynamic_len_idx;
    if (!1) return;
    if (__builtin_expect(!!(!(*(__volatile__ __typeof__(__chan->session->active) *)&(__chan->session->active))), 0)) return;
    if (__builtin_expect(!!(!(*(__volatile__ __typeof__(__chan->enabled) *)&(__chan->enabled))), 0)) return;
    if (__builtin_expect(!!(!(*(__volatile__ __typeof__(__event->enabled) *)&(__event->enabled))), 0)) return;
    if (__builtin_expect(!!(!tracepoint_dlopen.rcu_read_lock_sym_bp), 0)) return;
    if (__builtin_expect(!!(!cds_list_empty(&__event->bytecode_runtime_head)), 0))
    {
        struct lttng_bytecode_runtime *bc_runtime;
        int __filter_record = __event->has_enablers_without_bytecode;
        __event_prepare_filter_stack__hello_world___my_first_tracepoint(__stackvar.__filter_stack_data, __tp_data,my_integer_arg,my_string_arg);
        for (bc_runtime = ((__typeof__(*bc_runtime) *) ((char *) ((reinterpret_cast<__typeof__((&__event->bytecode_runtime_head)->next)>(tracepoint_dlopen.rcu_dereference_sym_bp((reinterpret_cast<void *>((&__event->bytecode_runtime_head)->next)))))) - (unsigned long) (&((__typeof__(*bc_runtime) *) 0)->node)));
        &bc_runtime->node != (&__event->bytecode_runtime_head);
        bc_runtime = ((__typeof__(*bc_runtime) *) ((char *) ((reinterpret_cast<__typeof__(bc_runtime->node.next)>(tracepoint_dlopen.rcu_dereference_sym_bp((reinterpret_cast<void *>(bc_runtime->node.next)))))) - (unsigned long) (&((__typeof__(*bc_runtime) *) 0)->node))))
        {
            if (__builtin_expect(!!(bc_runtime->filter(bc_runtime, __stackvar.__filter_stack_data) & LTTNG_FILTER_RECORD_FLAG), 0)) __filter_record = 1;
        }
        if (__builtin_expect(!!(!__filter_record), 1)) return;
    }
    __event_len = __event_get_size__hello_world___my_first_tracepoint(__stackvar.__dynamic_len, __tp_data,my_integer_arg,my_string_arg);
    __event_align = __event_get_align__hello_world___my_first_tracepoint(my_integer_arg,my_string_arg);
    lib_ring_buffer_ctx_init(&__ctx, __chan->chan, __event, __event_len, __event_align, -1, __chan->handle);
    __ctx.ip = __builtin_return_address(0);
    __ret = __chan->ops->event_reserve(&__ctx, __event->id);
    if (__ret < 0) return;
    {
        int __tmp = (my_integer_arg);
        lib_ring_buffer_align_ctx(&__ctx, 1);
        __chan->ops->event_write(&__ctx, &__tmp, sizeof(__tmp));
    }
    lib_ring_buffer_align_ctx(&__ctx, 1);
    if (__chan->ops->u.has_strcpy) __chan->ops->event_strcpy(&__ctx, my_string_arg, __stackvar.__dynamic_len[__dynamic_len_idx++]);
    else __chan->ops->event_write(&__ctx, my_string_arg, __stackvar.__dynamic_len[__dynamic_len_idx++]);
    __chan->ops->event_commit(&__ctx);
}
*/


///////////////////////
//const char __tp_event_signature___hello_world___my_first_tracepoint[] = "int, my_integer_arg, char*, my_string_arg";

///////////////////////////////

static const int * __ref_loglevel___hello_world___my_first_tracepoint __attribute__((weakref ("_loglevel___" "hello_world" "___" "my_first_tracepoint")));
static const char * __ref_model_emf_uri___hello_world___my_first_tracepoint __attribute__((weakref ("_model_emf_uri___" "hello_world" "___" "my_first_tracepoint")));
/*
const struct lttng_event_desc __event_desc___hello_world_my_first_tracepoint =
{
    .name = "hello_world" ":" "my_first_tracepoint", .probe_callback = (void (*)(void)) &__event_probe__hello_world___my_first_tracepoint, .ctx = __null, .fields = __event_fields___hello_world___my_first_tracepoint, .nr_fields = (sizeof(__event_fields___hello_world___my_first_tracepoint) / sizeof((__event_fields___hello_world___my_first_tracepoint)[0])), .loglevel = &__ref_loglevel___hello_world___my_first_tracepoint, .signature = __tp_event_signature___hello_world___my_first_tracepoint, .u =
    {
        .ext =
        {
            .model_emf_uri = &__ref_model_emf_uri___hello_world___my_first_tracepoint
        }
    },
};
*/

///////////////////////////////////
/*
static const struct lttng_event_desc *__event_desc___hello_world3[] = {

 &__event_desc___hello_world_my_first_tracepoint,
};

static struct lttng_probe_desc __probe_desc___hello_world3 = {
 .provider = "hello_world",
 .event_desc = __event_desc___hello_world3,
 .nr_events = (sizeof(__event_desc___hello_world3) / sizeof((__event_desc___hello_world3)[0])),
 .head = { __null, __null },
 .lazy_init_head = { __null, __null },
 .lazy = 0,
 .major = 1,
 .minor = 0,
};
*/



///////////////////////////////////////////////////////////////



template <typename A, typename B>
class LinuxTrace {
    public:
    
    struct lttng_event_field __event_fields___hello_world___my_first_tracepoint4_[2];
    //std::vector<lttng_event_field> __event_fields___hello_world___my_first_tracepoint4_v;
    struct lttng_event_desc *__event_desc___hello_world4_[1];
    struct lttng_probe_desc __probe_desc___hello_world4_;
    struct lttng_event_desc __event_desc___hello_world_my_first_tracepoint4_;
    char * __tp_event_signature___hello_world___my_first_tracepoint4_;
    
    char * __tp_strtab_hello_world___my_first_tracepoint4_;
    struct lttng_ust_tracepoint __tracepoint_hello_world___my_first_tracepoint4_;
    
    struct lttng_ust_tracepoint * __tracepoint_ptr_hello_world___my_first_tracepoint4_;
    struct lttng_ust_tracepoint * __start___tracepoints_ptrs4_[1];
    
    std::string ns;
    std::string name;
    std::string fullname;
    
    LinuxTrace (std::string & ns, std::string & name) {
        fullname = (ns + ":" + name);
        __tp_strtab_hello_world___my_first_tracepoint4_ = (char *)fullname.c_str();
        std::cout << __tp_strtab_hello_world___my_first_tracepoint4_ << std::endl;
        this->ns = ns;
        this->name = name;
    }
    
    
    void init() {
        
        //__tp_strtab_hello_world___my_first_tracepoint4_ = "hello_world:my_first_tracepoint";//"hello_world" ":" "my_first_tracepoint";
        std::cout << __tp_strtab_hello_world___my_first_tracepoint4_ << std::endl;
        
        __tracepoint_hello_world___my_first_tracepoint4_ = {
            __tp_strtab_hello_world___my_first_tracepoint4_,
            0,
            __null,
            &__tracepoint_provider_hello_world,
            "char*, my_integer_arg, int, my_string_arg",//"int, my_integer_arg, char*, my_string_arg",
            {},
        };
        
        __tracepoint_ptr_hello_world___my_first_tracepoint4_ = &__tracepoint_hello_world___my_first_tracepoint4_;
        std::cout << "test0" << std::endl;
        
        if (__tracepoint_ptrs_registered++)
    		return;
    	if (!tracepoint_dlopen.liblttngust_handle)
    		tracepoint_dlopen.liblttngust_handle =
    			dlopen("liblttng-ust-tracepoint.so.0", RTLD_NOW | RTLD_GLOBAL);
    	if (!tracepoint_dlopen.liblttngust_handle)
    		return;
    	tracepoint_dlopen.tracepoint_register_lib =
    		URCU_FORCE_CAST(int (*)(struct lttng_ust_tracepoint * const *, int),
    				dlsym(tracepoint_dlopen.liblttngust_handle,
    					"tracepoint_register_lib"));
    	tracepoint_dlopen.tracepoint_unregister_lib =
    		URCU_FORCE_CAST(int (*)(struct lttng_ust_tracepoint * const *),
    				dlsym(tracepoint_dlopen.liblttngust_handle,
    					"tracepoint_unregister_lib"));
    	__tracepoint__init_urcu_sym();
        
        struct lttng_ust_tracepoint * const __start___tracepoints_ptrs5_[] = {__tracepoint_ptr_hello_world___my_first_tracepoint4_};
        std::cout << "test0" << __start___tracepoints_ptrs5_[0] << std::endl;
        __start___tracepoints_ptrs4_[0] = __tracepoint_ptr_hello_world___my_first_tracepoint4_;
        std::cout << "test0" << __start___tracepoints_ptrs4_[0] << std::endl;
    	if (tracepoint_dlopen.tracepoint_register_lib) {
    		tracepoint_dlopen.tracepoint_register_lib(__start___tracepoints_ptrs4_, 1);
    	}
        
        std::cout << "test1" << std::endl;
        
        if(typeid(A) == typeid(int)) {
            lttng_event_field first = {
                .name = "my_integer_field", .type =
                {
                    .atype = atype_integer, .u =
                    {
                        .basic =
                        {
                            .integer =
                            {
                                .size = sizeof(int) * 8, .alignment = 1 * 8, .signedness = ((int) -1 < (int) 0), .reverse_byte_order = 1234 != 1234, .base = 10, .encoding = lttng_encode_none,
                            }
                        }
                    },
                }, .nowrite = 0,
            };
            __event_fields___hello_world___my_first_tracepoint4_[0] = first;
        }
        else if (typeid(A) == typeid(char *)) {
            lttng_event_field first = {
                .name = "my_integer_field"/*"my_string_field"*/, .type =
                {
                    .atype = atype_string, .u =
                    {
                        .basic =
                        {
                            .string =
                            {
                                .encoding = lttng_encode_UTF8
                            }
                        }
                    },
                }, .nowrite = 0,
            };
            __event_fields___hello_world___my_first_tracepoint4_[0] = first;
        }
        
        if(typeid(B) == typeid(int)) {
            lttng_event_field second = {
                .name = "my_string_field"/*"my_integer_field"*/, .type =
                {
                    .atype = atype_integer, .u =
                    {
                        .basic =
                        {
                            .integer =
                            {
                                .size = sizeof(int) * 8, .alignment = 1 * 8, .signedness = ((int) -1 < (int) 0), .reverse_byte_order = 1234 != 1234, .base = 10, .encoding = lttng_encode_none,
                            }
                        }
                    },
                }, .nowrite = 0,
            };
            __event_fields___hello_world___my_first_tracepoint4_[1] = second;
        }
        else if (typeid(B) == typeid(char *)) {
            lttng_event_field second = {
                .name = "my_integer_field"/*"my_string_field"*/, .type =
                {
                    .atype = atype_string, .u =
                    {
                        .basic =
                        {
                            .string =
                            {
                                .encoding = lttng_encode_UTF8
                            }
                        }
                    },
                }, .nowrite = 0,
            };
            __event_fields___hello_world___my_first_tracepoint4_[1] = second;
        }
        
        
        
        __tp_event_signature___hello_world___my_first_tracepoint4_ = "char*, my_integer_arg, int, my_string_arg";//"int, my_integer_arg, char*, my_string_arg";
        
        __event_desc___hello_world_my_first_tracepoint4_ = {
            .name = (char *)fullname.c_str(),
            .probe_callback = (void (*)(void)) &__event_probe__hello_world___my_first_tracepoint4_,
            .ctx = __null,
            .fields = __event_fields___hello_world___my_first_tracepoint4_,
            .nr_fields = (sizeof(__event_fields___hello_world___my_first_tracepoint4_) / sizeof((__event_fields___hello_world___my_first_tracepoint4_)[0])),
            .loglevel = &__ref_loglevel___hello_world___my_first_tracepoint,
            .signature = __tp_event_signature___hello_world___my_first_tracepoint4_,
            .u =
            {
                .ext =
                {
                    .model_emf_uri = &__ref_model_emf_uri___hello_world___my_first_tracepoint
                }
            },
        };
        
        __event_desc___hello_world4_[0] = &__event_desc___hello_world_my_first_tracepoint4_;
        
        __probe_desc___hello_world4_ = {
         .provider = "hello_world",
         .event_desc = (const lttng_event_desc**)__event_desc___hello_world4_,
         .nr_events = (sizeof(__event_desc___hello_world4_) / sizeof((__event_desc___hello_world4_)[0])),
         .head = { __null, __null },
         .lazy_init_head = { __null, __null },
         .lazy = 0,
         .major = 1,
         .minor = 0,
        };
        
        std::cout << "test2" << std::endl;
    }
    
    
    // template <typename T>
    // void init_event_field (int my_integer_arg) {
    //     lttng_event_field first = {
    //         .name = "my_integer_field", .type =
    //         {
    //             .atype = atype_integer, .u =
    //             {
    //                 .basic =
    //                 {
    //                     .integer =
    //                     {
    //                         .size = sizeof(int) * 8, .alignment = 1 * 8, .signedness = ((int) -1 < (int) 0), .reverse_byte_order = 1234 != 1234, .base = 10, .encoding = lttng_encode_none,
    //                     }
    //                 }
    //             },
    //         }, .nowrite = 0,
    //     };
        
    //     __event_fields___hello_world___my_first_tracepoint4_[0] = first;
    // }
    
    // void init_event_field (char * my_string_arg) {
        
    // }
    
    
    void dtor () {
        int ret;

        if (--__tracepoint_ptrs_registered)
            return;
        if (tracepoint_dlopen.tracepoint_unregister_lib)
            tracepoint_dlopen.tracepoint_unregister_lib(__start___tracepoints_ptrs);
        if (tracepoint_dlopen.liblttngust_handle && !__tracepoint_registered) {
            ret = dlclose(tracepoint_dlopen.liblttngust_handle);
            if (ret) {
                    fprintf(stderr, "Error (%d) in dlclose\n", ret);
                    abort();
            }
            memset(&tracepoint_dlopen, 0, sizeof(tracepoint_dlopen));
        }
    }
    
    
    static inline void __event_prepare_filter_stack__hello_world___my_first_tracepoint4_(char *__stack_data, void *__tp_data,A my_integer_arg,B my_string_arg)
    {
        
        prepare_filter(my_integer_arg, __stack_data, __tp_data);
        prepare_filter(my_string_arg, __stack_data, __tp_data);
    }
    
    
    static void prepare_filter(int my_integer_arg, char *__stack_data, void *__tp_data) {
        if (((int) -1 < (int) 0))
        {
            int64_t __ctf_tmp_int64;
            switch (sizeof(int))
            {
                case 1:
                {
                    union
                    {
                        int t;
                        int8_t v;
                    }
                    __tmp =
                    {
                        (int) (my_integer_arg)
                    }
                    ;
                    __ctf_tmp_int64 = (int64_t) __tmp.v;
                    break;
                }
                case 2:
                {
                    union
                    {
                        int t;
                        int16_t v;
                    }
                    __tmp =
                    {
                        (int) (my_integer_arg)
                    }
                    ;
                    __ctf_tmp_int64 = (int64_t) __tmp.v;
                    break;
                }
                case 4:
                {
                    union
                    {
                        int t;
                        int32_t v;
                    }
                    __tmp =
                    {
                        (int) (my_integer_arg)
                    }
                    ;
                    __ctf_tmp_int64 = (int64_t) __tmp.v;
                    break;
                }
                case 8:
                {
                    union
                    {
                        int t;
                        int64_t v;
                    }
                    __tmp =
                    {
                        (int) (my_integer_arg)
                    }
                    ;
                    __ctf_tmp_int64 = (int64_t) __tmp.v;
                    break;
                }
                default: abort();
            }
            ;
            memcpy(__stack_data, &__ctf_tmp_int64, sizeof(int64_t));
        }
        else
        {
            uint64_t __ctf_tmp_uint64;
            switch (sizeof(int))
            {
                case 1:
                {
                    union
                    {
                        int t;
                        uint8_t v;
                    }
                    __tmp =
                    {
                        (int) (my_integer_arg)
                    }
                    ;
                    __ctf_tmp_uint64 = (uint64_t) __tmp.v;
                    break;
                }
                case 2:
                {
                    union
                    {
                        int t;
                        uint16_t v;
                    }
                    __tmp =
                    {
                        (int) (my_integer_arg)
                    }
                    ;
                    __ctf_tmp_uint64 = (uint64_t) __tmp.v;
                    break;
                }
                case 4:
                {
                    union
                    {
                        int t;
                        uint32_t v;
                    }
                    __tmp =
                    {
                        (int) (my_integer_arg)
                    }
                    ;
                    __ctf_tmp_uint64 = (uint64_t) __tmp.v;
                    break;
                }
                case 8:
                {
                    union
                    {
                        int t;
                        uint64_t v;
                    }
                    __tmp =
                    {
                        (int) (my_integer_arg)
                    }
                    ;
                    __ctf_tmp_uint64 = (uint64_t) __tmp.v;
                    break;
                }
                default: abort();
            }
            ;
            memcpy(__stack_data, &__ctf_tmp_uint64, sizeof(uint64_t));
        }
        __stack_data += sizeof(int64_t);
    }
    
    
    static void prepare_filter(char * my_string_arg, char *__stack_data, void *__tp_data) {
        const void *__ctf_tmp_ptr = (my_string_arg);
        memcpy(__stack_data, &__ctf_tmp_ptr, sizeof(void *));
        __stack_data += sizeof(void *);
    }


    static inline size_t __event_get_size__hello_world___my_first_tracepoint4_(size_t *__dynamic_len, void *__tp_data,A my_integer_arg,B my_string_arg)
    {
        size_t __event_len = 0;
        unsigned int __dynamic_len_idx = 0;
        if (0) (void) __dynamic_len_idx;
        
        get_size(my_integer_arg, __dynamic_len, __event_len, __dynamic_len_idx);
        get_size(my_string_arg, __dynamic_len, __event_len, __dynamic_len_idx);
        //__event_len += lib_ring_buffer_align(__event_len, 1);
        //__event_len += sizeof(int);
        //__event_len += __dynamic_len[__dynamic_len_idx++] = strlen(my_string_arg) + 1;
        std::cout << "size: " << __event_len << std::endl;
        return __event_len;
    }
    
    
    static size_t get_size (int arg, size_t *__dynamic_len, size_t & __event_len, unsigned int & __dynamic_len_idx) {
        __event_len += lib_ring_buffer_align(__event_len, 1);
        __event_len += sizeof(int);
    }
    
    static size_t get_size (char* arg, size_t *__dynamic_len, size_t & __event_len, unsigned int & __dynamic_len_idx) {
        __event_len += __dynamic_len[__dynamic_len_idx++] = strlen(arg) + 1;
    }
    
    
    static size_t __event_get_align__hello_world___my_first_tracepoint4_(A my_integer_arg,B my_string_arg)
    {
        size_t __event_align = 1;
        __event_align = (
        {
            size_t __max1 = (__event_align);
            size_t __max2 = (1);
            __max1 > __max2 ? __max1: __max2;
        }
        );
        return __event_align;
    }
    
    
    
    static void __event_probe__hello_world___my_first_tracepoint4_(void *__tp_data,A my_integer_arg,B my_string_arg) {
        struct lttng_event *__event = (struct lttng_event *) __tp_data;
        struct lttng_channel *__chan = __event->chan;
        struct lttng_ust_lib_ring_buffer_ctx __ctx;
        size_t __event_len, __event_align;
        size_t __dynamic_len_idx = 0;
        //union StackVar
        //{
            size_t __dynamic_len[(sizeof(__event_fields___hello_world___my_first_tracepoint4_) / sizeof((__event_fields___hello_world___my_first_tracepoint4_)[0]))];
            char __filter_stack_data[2 * sizeof(unsigned long) * (sizeof(__event_fields___hello_world___my_first_tracepoint4_) / sizeof((__event_fields___hello_world___my_first_tracepoint4_)[0]))];
        //}
        //__stackvar;
        int __ret;
        if (0) (void) __dynamic_len_idx;
        if (!1) return;
        if (__builtin_expect(!!(!(*(__volatile__ __typeof__(__chan->session->active) *)&(__chan->session->active))), 0)) return;
        if (__builtin_expect(!!(!(*(__volatile__ __typeof__(__chan->enabled) *)&(__chan->enabled))), 0)) return;
        if (__builtin_expect(!!(!(*(__volatile__ __typeof__(__event->enabled) *)&(__event->enabled))), 0)) return;
        if (__builtin_expect(!!(!tracepoint_dlopen.rcu_read_lock_sym_bp), 0)) return;
        if (__builtin_expect(!!(!cds_list_empty(&__event->bytecode_runtime_head)), 0))
        {
            struct lttng_bytecode_runtime *bc_runtime;
            int __filter_record = __event->has_enablers_without_bytecode;
            __event_prepare_filter_stack__hello_world___my_first_tracepoint4_(/*__stackvar.*/__filter_stack_data, __tp_data,my_integer_arg,my_string_arg);
            for (bc_runtime = ((__typeof__(*bc_runtime) *) ((char *) ((reinterpret_cast<__typeof__((&__event->bytecode_runtime_head)->next)>(tracepoint_dlopen.rcu_dereference_sym_bp((reinterpret_cast<void *>((&__event->bytecode_runtime_head)->next)))))) - (unsigned long) (&((__typeof__(*bc_runtime) *) 0)->node)));
            &bc_runtime->node != (&__event->bytecode_runtime_head);
            bc_runtime = ((__typeof__(*bc_runtime) *) ((char *) ((reinterpret_cast<__typeof__(bc_runtime->node.next)>(tracepoint_dlopen.rcu_dereference_sym_bp((reinterpret_cast<void *>(bc_runtime->node.next)))))) - (unsigned long) (&((__typeof__(*bc_runtime) *) 0)->node))))
            {
                if (__builtin_expect(!!(bc_runtime->filter(bc_runtime, /*__stackvar.*/__filter_stack_data) & LTTNG_FILTER_RECORD_FLAG), 0)) __filter_record = 1;
            }
            if (__builtin_expect(!!(!__filter_record), 1)) return;
        }
        __event_len = __event_get_size__hello_world___my_first_tracepoint4_(/*__stackvar.*/__dynamic_len, __tp_data,my_integer_arg,my_string_arg);
        __event_align = __event_get_align__hello_world___my_first_tracepoint4_(my_integer_arg,my_string_arg);
        lib_ring_buffer_ctx_init(&__ctx, __chan->chan, __event, __event_len, __event_align, -1, __chan->handle);
        __ctx.ip = __builtin_return_address(0);
        __ret = __chan->ops->event_reserve(&__ctx, __event->id);
        if (__ret < 0) return;
        // {
        //     int __tmp = (my_integer_arg);
        //     lib_ring_buffer_align_ctx(&__ctx, 1);
        //     __chan->ops->event_write(&__ctx, &__tmp, sizeof(__tmp));
        // }
        __event_probe(my_integer_arg, __tp_data, __chan, __ctx, __dynamic_len_idx, __dynamic_len, __filter_stack_data);
        __event_probe(my_string_arg, __tp_data, __chan, __ctx, __dynamic_len_idx, __dynamic_len, __filter_stack_data);
        
        // lib_ring_buffer_align_ctx(&__ctx, 1);
        // if (__chan->ops->u.has_strcpy) __chan->ops->event_strcpy(&__ctx, my_string_arg, __stackvar.__dynamic_len[__dynamic_len_idx++]);
        // else __chan->ops->event_write(&__ctx, my_string_arg, __stackvar.__dynamic_len[__dynamic_len_idx++]);
        __chan->ops->event_commit(&__ctx);
    }
    
    
    static void __event_probe(int & my_integer_arg, void *__tp_data, struct lttng_channel *__chan, struct lttng_ust_lib_ring_buffer_ctx & __ctx, size_t & __dynamic_len_idx, size_t __dynamic_len[], char __filter_stack_data[]) {
        int __tmp = (my_integer_arg);
        lib_ring_buffer_align_ctx(&__ctx, 1);
        __chan->ops->event_write(&__ctx, &__tmp, sizeof(__tmp));
    }
    
    
    static void __event_probe(char * my_string_arg, void *__tp_data, struct lttng_channel *__chan, struct lttng_ust_lib_ring_buffer_ctx & __ctx, size_t & __dynamic_len_idx, size_t __dynamic_len[], char __filter_stack_data[]) {
        lib_ring_buffer_align_ctx(&__ctx, 1);
        if (__chan->ops->u.has_strcpy) __chan->ops->event_strcpy(&__ctx, my_string_arg, __dynamic_len[__dynamic_len_idx++]);
        else __chan->ops->event_write(&__ctx, my_string_arg, __dynamic_len[__dynamic_len_idx++]);
    }
    
    
    void __tracepoint_cb_hello_world___my_first_tracepoint4_(A my_integer_arg,B my_string_arg)
    {
        struct lttng_ust_tracepoint_probe *__tp_probe;
        if (__builtin_expect(!!(!tracepoint_dlopen.rcu_read_lock_sym_bp), 0)) return;
        tracepoint_dlopen.rcu_read_lock_sym_bp();
        std::cout << "test20 " << __tracepoint_hello_world___my_first_tracepoint4_.probes << std::endl;
        __tp_probe = (reinterpret_cast<__typeof__(__tracepoint_hello_world___my_first_tracepoint4_.probes)>
            (tracepoint_dlopen.rcu_dereference_sym_bp(
                (reinterpret_cast<void *>(__tracepoint_hello_world___my_first_tracepoint4_.probes)))));
        std::cout << "test21 " << __tp_probe << std::endl;
        if (__builtin_expect(!!(!__tp_probe), 0)) goto end;
        do
        {
            void (*__tp_cb)(void) = __tp_probe->func;
            void *__tp_data = __tp_probe->data;
            std::cout << "test22 " << __tp_cb << std::endl;
            (reinterpret_cast<void (*)(void *__tp_data,A my_integer_arg,B my_string_arg)>(__tp_cb)) (__tp_data,my_integer_arg,my_string_arg);
        }
        while ((++__tp_probe)->func);
        std::cout << "test23 " << std::endl;
        end: tracepoint_dlopen.rcu_read_unlock_sym_bp();
        std::cout << "test24 " << std::endl;
    }
};





/////////////////2222222222222222


int main(int argc, char* argv[]) {
    int x = 1;
    //std::cout << "test " << (typeid(std::string).hash_code() == typeid(std::string).hash_code()) << std::endl;

	printf("main");
	std::cout << "---";
	//tracef("test 123 %d", 1234);
    std::string ns = "hello_world";
    std::string name = "my_first_tracepoint";
    LinuxTrace<char *, int> lt(ns, name);
    //LinuxTrace<int, char *> lt(ns, name);
	lt.init();
	
	int ret;
    
	__tracepoint_provider_check_hello_world();
    //lt.__probe_desc___hello_world4_.provider = "";
	ret = lttng_probe_register(&lt.__probe_desc___hello_world4_);
	if (ret) {
	  printf("bad %d\n", ret);
	}

    //getchar();

//do { do { __asm__ __volatile__ ("990: nop" "\n" ".pushsection .note.stapsdt" "," "\"?\"" "," "\"note\"" "\n" ".balign 4" "\n" ".4byte 992f-991f" "," "994f-993f" "," "3" "\n" "991: .asciz \"stapsdt\"" "\n" "992: .balign 4" "\n" "993: .8byte 990b" "\n" ".8byte _.stapsdt.base" "\n" ".8byte 0" "\n" ".asciz \"hello_world\"" "\n" ".asciz \"my_first_tracepoint\"" "\n" ".asciz \"%n[_SDT_S1]@%[_SDT_A1] %n[_SDT_S2]@%[_SDT_A2]\"" "\n" "994: .balign 4" "\n" ".popsection" "\n" :: [_SDT_S1] "n" (((!__extension__ (__builtin_constant_p ((((unsigned long long) (__typeof (__builtin_choose_expr (((__builtin_classify_type (1) + 3) & -4) == 4, (1), 0U))) __sdt_unsp) & ((unsigned long long)1 << (sizeof (unsigned long long) * 8 - 1))) == 0) || (__typeof (__builtin_choose_expr (((__builtin_classify_type (1) + 3) & -4) == 4, (1), 0U))) -1 > (__typeof (__builtin_choose_expr (((__builtin_classify_type (1) + 3) & -4) == 4, (1), 0U))) 0)) ? 1 : -1) * (int) ((__builtin_classify_type (1) == 14 || __builtin_classify_type (1) == 5) ? sizeof (void *) : sizeof (1))), [_SDT_A1] "nor" ((1)), [_SDT_S2] "n" (((!__extension__ (__builtin_constant_p ((((unsigned long long) (__typeof (__builtin_choose_expr (((__builtin_classify_type ("test") + 3) & -4) == 4, ("test"), 0U))) __sdt_unsp) & ((unsigned long long)1 << (sizeof (unsigned long long) * 8 - 1))) == 0) || (__typeof (__builtin_choose_expr (((__builtin_classify_type ("test") + 3) & -4) == 4, ("test"), 0U))) -1 > (__typeof (__builtin_choose_expr (((__builtin_classify_type ("test") + 3) & -4) == 4, ("test"), 0U))) 0)) ? 1 : -1) * (int) ((__builtin_classify_type ("test") == 14 || __builtin_classify_type ("test") == 5) ? sizeof (void *) : sizeof ("test"))), [_SDT_A2] "nor" (("test"))); __asm__ __volatile__ (".ifndef _.stapsdt.base" "\n" ".pushsection .stapsdt.base" "," "\"aG\"" "," "\"progbits\"" "," ".stapsdt.base" "," "comdat" "\n" ".weak _.stapsdt.base" "\n" ".hidden _.stapsdt.base" "\n" "_.stapsdt.base: .space 1" "\n" ".size _.stapsdt.base" "," "1" "\n" ".popsection" "\n" ".endif" "\n"); } while (0); if (__builtin_expect(!!(__tracepoint_hello_world___my_first_tracepoint2.state), 0)) __tracepoint_cb_hello_world___my_first_tracepoint2(1, "test"); } while (0);
	//tracepoint(hello_world, my_first_tracepoint3, 1, "test");
	//__tracepoint_cb_hello_world___my_first_tracepoint3<int, char*>(1, str);
    //lt.__tracepoint_cb_hello_world___my_first_tracepoint4_(123, "test123");
	lt.__tracepoint_cb_hello_world___my_first_tracepoint4_("test123", 123);
    std::cout << "test40 " << std::endl;
    
    lt.dtor();
    std::cout << "test41 " << std::endl;
    std::cout << &lt.__probe_desc___hello_world4_ << std::endl;
    // if (--_TP_COMBINE_TOKENS(__probe_register_refcount___, TRACEPOINT_PROVIDER)) {
    //     return -1;
    // }
    std::cout << "test43" << std::endl;
    lttng_probe_unregister(&lt.__probe_desc___hello_world4_);

    std::cout << "exiting" << std::endl;
}







