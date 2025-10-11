
bool OPENSSL_init_crypto(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (stopped != 0) {
    bVar4 = false;
    if ((param_1 & 0x40000) == 0) {
      ERR_new();
      ERR_set_debug("../crypto/init.c",0x1d3,"OPENSSL_init_crypto");
      ERR_set_error(0xf,0xc0105,0);
    }
    goto LAB_00418a30;
  }
  iVar1 = CRYPTO_atomic_load(&optsdone,&local_48,0);
  if ((iVar1 == 0) || (iVar1 = 1, param_1 != (local_48 & param_1))) {
    iVar2 = CRYPTO_THREAD_run_once(&base,ossl_init_base_ossl_);
    bVar4 = false;
    if ((iVar2 == 0) || (ossl_init_base_ossl_ret_ == 0)) goto LAB_00418a30;
    if ((param_1 & 0x40000) == 0) {
      if (iVar1 == 0) {
        iVar1 = CRYPTO_atomic_load(&optsdone,&local_48,init_lock);
        if (iVar1 == 0) goto LAB_00418a30;
        if (param_1 == (local_48 & param_1)) goto LAB_00418c78;
      }
      if ((param_1 & 0x80000) == 0) {
        iVar1 = CRYPTO_THREAD_run_once(&register_atexit,ossl_init_register_atexit_ossl_);
      }
      else {
        iVar1 = CRYPTO_THREAD_run_once(&register_atexit,ossl_init_no_register_atexit_ossl_);
      }
      if (((((((iVar1 == 0) || (ossl_init_register_atexit_ossl_ret_ == 0)) ||
             (iVar1 = CRYPTO_THREAD_run_once
                                (&load_crypto_nodelete,ossl_init_load_crypto_nodelete_ossl_),
             iVar1 == 0)) || (ossl_init_load_crypto_nodelete_ossl_ret_ == 0)) ||
           (((param_1 & 1) != 0 &&
            ((iVar1 = CRYPTO_THREAD_run_once
                                (&load_crypto_strings,ossl_init_no_load_crypto_strings_ossl_),
             iVar1 == 0 || (ossl_init_load_crypto_strings_ossl_ret_ == 0)))))) ||
          ((((((param_1 & 2) != 0 &&
              ((iVar1 = CRYPTO_THREAD_run_once
                                  (&load_crypto_strings,ossl_init_load_crypto_strings_ossl_),
               iVar1 == 0 || (ossl_init_load_crypto_strings_ossl_ret_ == 0)))) ||
             (((param_1 & 0x10) != 0 &&
              ((iVar1 = CRYPTO_THREAD_run_once(&add_all_ciphers,ossl_init_no_add_all_ciphers_ossl_),
               iVar1 == 0 || (ossl_init_add_all_ciphers_ossl_ret_ == 0)))))) ||
            (((param_1 & 4) != 0 &&
             ((iVar1 = CRYPTO_THREAD_run_once(&add_all_ciphers,ossl_init_add_all_ciphers_ossl_),
              iVar1 == 0 || (ossl_init_add_all_ciphers_ossl_ret_ == 0)))))) ||
           (((((param_1 & 0x20) != 0 &&
              ((iVar1 = CRYPTO_THREAD_run_once(&add_all_digests,ossl_init_no_add_all_digests_ossl_),
               iVar1 == 0 || (ossl_init_add_all_digests_ossl_ret_ == 0)))) ||
             (((param_1 & 8) != 0 &&
              ((iVar1 = CRYPTO_THREAD_run_once(&add_all_digests,ossl_init_add_all_digests_ossl_),
               iVar1 == 0 || (ossl_init_add_all_digests_ossl_ret_ == 0)))))) ||
            (((param_1 & 0x20000) != 0 && (iVar1 = openssl_init_fork_handlers(), iVar1 == 0))))))))
         || (((param_1 & 0x80) != 0 &&
             ((iVar1 = CRYPTO_THREAD_run_once(&config,ossl_init_no_config_ossl_), iVar1 == 0 ||
              (ossl_init_config_ossl_ret_ == 0)))))) goto LAB_00418a30;
      if (((param_1 & 0x40) != 0) &&
         (lVar3 = CRYPTO_THREAD_get_local(&in_init_config_local), lVar3 == 0)) {
        iVar1 = CRYPTO_THREAD_set_local(&in_init_config_local,0xffffffffffffffff);
        if (iVar1 == 0) goto LAB_00418a30;
        if (param_2 == 0) {
          iVar2 = CRYPTO_THREAD_run_once(&config,ossl_init_config_ossl_);
          iVar1 = ossl_init_config_ossl_ret_;
          if (iVar2 == 0) goto LAB_00418a30;
        }
        else {
          iVar1 = CRYPTO_THREAD_write_lock(init_lock);
          if (iVar1 == 0) goto LAB_00418a30;
          conf_settings = param_2;
          iVar1 = CRYPTO_THREAD_run_once(&config,ossl_init_config_settings_ossl_);
          if (iVar1 != 0) {
            iVar1 = ossl_init_config_ossl_ret_;
          }
          conf_settings = 0;
          CRYPTO_THREAD_unlock(init_lock);
        }
        if (iVar1 < 1) goto LAB_00418a30;
      }
      if (((((param_1 & 0x100) == 0) ||
           ((iVar1 = CRYPTO_THREAD_run_once(&async,ossl_init_async_ossl_), iVar1 != 0 &&
            (ossl_init_async_ossl_ret_ != 0)))) &&
          (((param_1 & 0x800) == 0 ||
           ((iVar1 = CRYPTO_THREAD_run_once(&engine_openssl,ossl_init_engine_openssl_ossl_),
            iVar1 != 0 && (ossl_init_engine_openssl_ossl_ret_ != 0)))))) &&
         (((((param_1 & 0x200) == 0 ||
            ((iVar1 = CRYPTO_THREAD_run_once(&engine_rdrand,ossl_init_engine_rdrand_ossl_),
             iVar1 != 0 && (ossl_init_engine_rdrand_ossl_ret_ != 0)))) &&
           (((param_1 & 0x400) == 0 ||
            ((iVar1 = CRYPTO_THREAD_run_once(&engine_dynamic,ossl_init_engine_dynamic_ossl_),
             iVar1 != 0 && (ossl_init_engine_dynamic_ossl_ret_ != 0)))))) &&
          ((((param_1 & 0x4000) == 0 ||
            ((iVar1 = CRYPTO_THREAD_run_once(&engine_padlock,ossl_init_engine_padlock_ossl_),
             iVar1 != 0 && (ossl_init_engine_padlock_ossl_ret_ != 0)))) &&
           (((param_1 & 0x8000) == 0 ||
            ((iVar1 = CRYPTO_THREAD_run_once(&engine_afalg,ossl_init_engine_afalg_ossl_), iVar1 != 0
             && (ossl_init_engine_afalg_ossl_ret_ != 0)))))))))) {
        if ((param_1 & 0xfe00) != 0) {
          ENGINE_register_all_complete();
        }
        iVar1 = CRYPTO_atomic_or(&optsdone,param_1,&local_48,init_lock);
        bVar4 = iVar1 != 0;
      }
      goto LAB_00418a30;
    }
  }
LAB_00418c78:
  bVar4 = true;
LAB_00418a30:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

