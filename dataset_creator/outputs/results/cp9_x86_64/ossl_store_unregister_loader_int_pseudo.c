
long ossl_store_unregister_loader_int(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_f8[0] = param_1;
  iVar1 = CRYPTO_THREAD_run_once(&registry_init,do_registry_init_ossl_);
  if ((iVar1 == 0) || (do_registry_init_ossl_ret_ == 0)) {
    ERR_new();
    lVar2 = 0;
    ERR_set_debug("../crypto/store/store_register.c",0x101,"ossl_store_unregister_loader_int");
    ERR_set_error(0x2c,0xc0100,0);
  }
  else {
    lVar2 = 0;
    iVar1 = CRYPTO_THREAD_write_lock(registry_lock);
    if (iVar1 != 0) {
      if (loader_register == 0) {
        loader_register = OPENSSL_LH_new(store_loader_hash,store_loader_cmp);
        if (loader_register == 0) {
          ERR_new();
          ERR_set_debug("../crypto/store/store_register.c",0x108,"ossl_store_unregister_loader_int")
          ;
          ERR_set_error(0x2c,0xc0103,0);
          CRYPTO_THREAD_unlock(registry_lock);
          lVar2 = 0;
          goto LAB_00436214;
        }
      }
      lVar2 = OPENSSL_LH_delete(loader_register,local_f8);
      if (lVar2 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/store/store_register.c",0x10b,"ossl_store_unregister_loader_int");
        ERR_set_error(0x2c,0x69,"scheme=%s",param_1);
      }
      CRYPTO_THREAD_unlock(registry_lock);
    }
  }
LAB_00436214:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

