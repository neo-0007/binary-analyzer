
EVP_PKEY * EVP_PKEY_new_mac_key(int type,ENGINE *e,uchar *key,int keylen)

{
  int iVar1;
  EVP_PKEY *ctx;
  long in_FS_OFFSET;
  EVP_PKEY *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (EVP_PKEY *)0x0;
  ctx = (EVP_PKEY *)EVP_PKEY_CTX_new_id(type,e);
  if (ctx != (EVP_PKEY *)0x0) {
    iVar1 = EVP_PKEY_keygen_init((EVP_PKEY_CTX *)ctx);
    if (0 < iVar1) {
      iVar1 = EVP_PKEY_CTX_set_mac_key(ctx,key,keylen);
      if (0 < iVar1) {
        EVP_PKEY_keygen((EVP_PKEY_CTX *)ctx,&local_28);
      }
    }
    EVP_PKEY_CTX_free((EVP_PKEY_CTX *)ctx);
    ctx = local_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ctx;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

