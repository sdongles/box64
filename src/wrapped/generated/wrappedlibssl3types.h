/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.4.0.20) *
 *******************************************************************/
#ifndef __wrappedlibssl3TYPES_H_
#define __wrappedlibssl3TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void* (*pFp_t)(void*);
typedef void (*vFpp_t)(void*, void*);
typedef void (*vFpip_t)(void*, int32_t, void*);
typedef void (*vFppp_t)(void*, void*, void*);
typedef intptr_t (*lFpip_t)(void*, int32_t, void*);
typedef int32_t (*iFlpppp_t)(intptr_t, void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(SSL_get_verify_callback, pFp_t) \
	GO(SSL_CTX_set_client_cert_cb, vFpp_t) \
	GO(SSL_CTX_set_default_passwd_cb, vFpp_t) \
	GO(SSL_set_psk_client_callback, vFpp_t) \
	GO(SSL_CTX_set_verify, vFpip_t) \
	GO(SSL_set_verify, vFpip_t) \
	GO(SSL_CTX_set_alpn_select_cb, vFppp_t) \
	GO(SSL_CTX_set_cert_verify_callback, vFppp_t) \
	GO(SSL_CTX_set_next_proto_select_cb, vFppp_t) \
	GO(SSL_CTX_callback_ctrl, lFpip_t) \
	GO(SSL_callback_ctrl, lFpip_t) \
	GO(SSL_get_ex_new_index, iFlpppp_t)

#endif // __wrappedlibssl3TYPES_H_
