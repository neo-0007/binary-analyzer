
void OPENSSL_cleanup(void)

{
  undefined8 *puVar1;
  undefined8 *ptr;
  
  if ((base_inited != 0) && (stopped == 0)) {
    stopped = 1;
    OPENSSL_thread_stop();
    ptr = stop_handlers;
    while (ptr != (undefined8 *)0x0) {
      (*(code *)*ptr)();
      puVar1 = (undefined8 *)ptr[1];
      CRYPTO_free(ptr);
      ptr = puVar1;
    }
    stop_handlers = (undefined8 *)0x0;
    CRYPTO_THREAD_lock_free(init_lock);
    init_lock = 0;
    CRYPTO_THREAD_cleanup_local(&in_init_config_local);
    ossl_comp_zlib_cleanup();
    if (async_inited != 0) {
      async_deinit();
    }
    if (load_crypto_strings_inited != 0) {
      err_free_strings_int();
    }
    ossl_rand_cleanup_int();
    ossl_config_modules_free();
    engine_cleanup_int();
    ossl_store_cleanup_int();
    ossl_lib_ctx_default_deinit();
    ossl_cleanup_thread();
    bio_cleanup();
    evp_cleanup_int();
    ossl_obj_cleanup_int();
    err_cleanup();
    CRYPTO_secure_malloc_done();
    OSSL_CMP_log_close();
    ossl_trace_cleanup();
    base_inited = 0;
    return;
  }
  return;
}

