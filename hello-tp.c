
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
#include <map>





static const int * __ref_loglevel___hello_world___my_first_tracepoint __attribute__((weakref ("_loglevel___" "hello_world" "___" "my_first_tracepoint")));
static const char * __ref_model_emf_uri___hello_world___my_first_tracepoint __attribute__((weakref ("_model_emf_uri___" "hello_world" "___" "my_first_tracepoint")));


template <typename A, typename B>
class LinuxTrace {
    public:
    
    struct lttng_event_field __event_fields___hello_world___my_first_tracepoint4_[2];
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
        this->ns = ns;
        this->name = name;
    }
    
    
    void init() {
        __tracepoint_hello_world___my_first_tracepoint4_ = {
            __tp_strtab_hello_world___my_first_tracepoint4_,
            0,
            __null,
            &__tracepoint_provider_hello_world,
            "int, my_integer_arg, char*, my_string_arg",
            {},
        };
        
        __tracepoint_ptr_hello_world___my_first_tracepoint4_ = &__tracepoint_hello_world___my_first_tracepoint4_;
        
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
        
        
        __start___tracepoints_ptrs4_[0] = __tracepoint_ptr_hello_world___my_first_tracepoint4_;
    	if (tracepoint_dlopen.tracepoint_register_lib) {
    		tracepoint_dlopen.tracepoint_register_lib(__start___tracepoints_ptrs4_, 1);
    	}
        
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
                    },
                }, .nowrite = 0,
            };
            __event_fields___hello_world___my_first_tracepoint4_[1] = second;
        }
        
        
        
        __tp_event_signature___hello_world___my_first_tracepoint4_ = "int, my_integer_arg, char*, my_string_arg";
        
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
    }
    
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

        size_t __dynamic_len[(sizeof(__event_fields___hello_world___my_first_tracepoint4_) / sizeof((__event_fields___hello_world___my_first_tracepoint4_)[0]))];
        char __filter_stack_data[2 * sizeof(unsigned long) * (sizeof(__event_fields___hello_world___my_first_tracepoint4_) / sizeof((__event_fields___hello_world___my_first_tracepoint4_)[0]))];

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
        
        __event_probe(my_integer_arg, __tp_data, __chan, __ctx, __dynamic_len_idx, __dynamic_len, __filter_stack_data);
        __event_probe(my_string_arg, __tp_data, __chan, __ctx, __dynamic_len_idx, __dynamic_len, __filter_stack_data);
        
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
        __tp_probe = (reinterpret_cast<__typeof__(__tracepoint_hello_world___my_first_tracepoint4_.probes)>
            (tracepoint_dlopen.rcu_dereference_sym_bp(
                (reinterpret_cast<void *>(__tracepoint_hello_world___my_first_tracepoint4_.probes)))));
        if (__builtin_expect(!!(!__tp_probe), 0)) goto end;
        do
        {
            void (*__tp_cb)(void) = __tp_probe->func;
            void *__tp_data = __tp_probe->data;
            (reinterpret_cast<void (*)(void *__tp_data,A my_integer_arg,B my_string_arg)>(__tp_cb)) (__tp_data,my_integer_arg,my_string_arg);
        }
        while ((++__tp_probe)->func);
        end: tracepoint_dlopen.rcu_read_unlock_sym_bp();
    }
};

class TraceProvider {
    public:
    std::map<std::string, LinuxTrace<int, char*>> traces;
    struct lttng_event_desc *__event_desc___hello_world4_[1];
    unsigned int eventsCount;
    struct lttng_probe_desc __probe_desc___hello_world4_;
    
    TraceProvider () {
        eventsCount = 0;
    }
    
    void add (std::string & ns, std::string & name) {
        LinuxTrace<int, char*> linuxTrace (ns, name);
        std::string fullname = ns + ":" + name;
        traces.insert(std::pair<std::string, LinuxTrace<int, char*>>(fullname, linuxTrace));
        traces.find(fullname)->second.init();
        //TODO
        
        __event_desc___hello_world4_[eventsCount] = &traces.find(fullname)->second.__event_desc___hello_world_my_first_tracepoint4_;
        eventsCount++;
    }
    
    void registerEvents () {
        __probe_desc___hello_world4_ = {
         .provider = "hello_world",
         .event_desc = (const lttng_event_desc**)__event_desc___hello_world4_,
         .nr_events = eventsCount,
         .head = { __null, __null },
         .lazy_init_head = { __null, __null },
         .lazy = 0,
         .major = 1,
         .minor = 0,
        };
        
        int ret;
        __tracepoint_provider_check_hello_world();
        ret = lttng_probe_register(&__probe_desc___hello_world4_);
    	if (ret) {
    	  printf("bad %d\n", ret);
    	}
    }
    
    void trace (std::string & ns, std::string & name) {
        std::string fullname = ns + ":" + name;
        traces.find(fullname)->second.__tracepoint_cb_hello_world___my_first_tracepoint4_(123, "test000");
    }
    
    void unregisterEvents () {
        lttng_probe_unregister(&__probe_desc___hello_world4_);
    }
};


class TraceHolder {
    public:
    
    std::map<std::string, TraceProvider> providers;
    
    void add () {
        std::string ns = "hello_world";
        std::string name = "my_first_tracepoint";
        
        std::map<std::string, TraceProvider>::iterator it;
        it = providers.find(ns);
        
        if (it == providers.end()) {
            TraceProvider tp;
            providers.insert(std::pair<std::string, TraceProvider>(ns, tp));
        }
        
        providers[ns].add(ns, name);
        
        providers[ns].registerEvents();
    }
    
    void trace(std::string & ns, std::string & name) {
        providers.find(ns)->second.trace(ns, name);
    }
    
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
        
        for(std::map<std::string, TraceProvider>::iterator iterator = providers.begin(); iterator != providers.end(); iterator++) {
            iterator->second.unregisterEvents();
        }
    }
};



int main(int argc, char* argv[]) {
    
    std::string ns = "hello_world";
    std::string name = "my_first_tracepoint";
    
    TraceHolder th;
    th.add();
    
//do { do { __asm__ __volatile__ ("990: nop" "\n" ".pushsection .note.stapsdt" "," "\"?\"" "," "\"note\"" "\n" ".balign 4" "\n" ".4byte 992f-991f" "," "994f-993f" "," "3" "\n" "991: .asciz \"stapsdt\"" "\n" "992: .balign 4" "\n" "993: .8byte 990b" "\n" ".8byte _.stapsdt.base" "\n" ".8byte 0" "\n" ".asciz \"hello_world\"" "\n" ".asciz \"my_first_tracepoint\"" "\n" ".asciz \"%n[_SDT_S1]@%[_SDT_A1] %n[_SDT_S2]@%[_SDT_A2]\"" "\n" "994: .balign 4" "\n" ".popsection" "\n" :: [_SDT_S1] "n" (((!__extension__ (__builtin_constant_p ((((unsigned long long) (__typeof (__builtin_choose_expr (((__builtin_classify_type (1) + 3) & -4) == 4, (1), 0U))) __sdt_unsp) & ((unsigned long long)1 << (sizeof (unsigned long long) * 8 - 1))) == 0) || (__typeof (__builtin_choose_expr (((__builtin_classify_type (1) + 3) & -4) == 4, (1), 0U))) -1 > (__typeof (__builtin_choose_expr (((__builtin_classify_type (1) + 3) & -4) == 4, (1), 0U))) 0)) ? 1 : -1) * (int) ((__builtin_classify_type (1) == 14 || __builtin_classify_type (1) == 5) ? sizeof (void *) : sizeof (1))), [_SDT_A1] "nor" ((1)), [_SDT_S2] "n" (((!__extension__ (__builtin_constant_p ((((unsigned long long) (__typeof (__builtin_choose_expr (((__builtin_classify_type ("test") + 3) & -4) == 4, ("test"), 0U))) __sdt_unsp) & ((unsigned long long)1 << (sizeof (unsigned long long) * 8 - 1))) == 0) || (__typeof (__builtin_choose_expr (((__builtin_classify_type ("test") + 3) & -4) == 4, ("test"), 0U))) -1 > (__typeof (__builtin_choose_expr (((__builtin_classify_type ("test") + 3) & -4) == 4, ("test"), 0U))) 0)) ? 1 : -1) * (int) ((__builtin_classify_type ("test") == 14 || __builtin_classify_type ("test") == 5) ? sizeof (void *) : sizeof ("test"))), [_SDT_A2] "nor" (("test"))); __asm__ __volatile__ (".ifndef _.stapsdt.base" "\n" ".pushsection .stapsdt.base" "," "\"aG\"" "," "\"progbits\"" "," ".stapsdt.base" "," "comdat" "\n" ".weak _.stapsdt.base" "\n" ".hidden _.stapsdt.base" "\n" "_.stapsdt.base: .space 1" "\n" ".size _.stapsdt.base" "," "1" "\n" ".popsection" "\n" ".endif" "\n"); } while (0); if (__builtin_expect(!!(__tracepoint_hello_world___my_first_tracepoint2.state), 0)) __tracepoint_cb_hello_world___my_first_tracepoint2(1, "test"); } while (0);
	
    th.trace(ns, name);
    th.dtor();
}







