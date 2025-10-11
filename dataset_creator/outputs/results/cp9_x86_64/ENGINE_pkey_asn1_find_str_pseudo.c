
EVP_PKEY_ASN1_METHOD * ENGINE_pkey_asn1_find_str(ENGINE **pe,char *str,int len)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *pEVar2;
  long in_FS_OFFSET;
  ENGINE *local_48;
  EVP_PKEY_ASN1_METHOD *local_40;
  char *local_38;
  int local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (ENGINE *)0x0;
  local_40 = (EVP_PKEY_ASN1_METHOD *)0x0;
  local_38 = str;
  local_30 = len;
  iVar1 = CRYPTO_THREAD_run_once(&engine_lock_init,do_engine_lock_init_ossl_);
  if ((iVar1 == 0) || (do_engine_lock_init_ossl_ret_ == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/engine/tb_asnmth.c",199,"ENGINE_pkey_asn1_find_str");
    ERR_set_error(0x26,0xc0100,0);
    pEVar2 = (EVP_PKEY_ASN1_METHOD *)0x0;
  }
  else {
    iVar1 = CRYPTO_THREAD_write_lock(global_engine_lock);
    pEVar2 = (EVP_PKEY_ASN1_METHOD *)0x0;
    if (iVar1 != 0) {
      engine_table_doall(pkey_asn1_meth_table,look_str_cb,&local_48);
      if (local_48 != (ENGINE *)0x0) {
        LOCK();
        *(int *)(local_48 + 0x9c) = *(int *)(local_48 + 0x9c) + 1;
        UNLOCK();
      }
      *pe = local_48;
      CRYPTO_THREAD_unlock(global_engine_lock);
      pEVar2 = local_40;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

