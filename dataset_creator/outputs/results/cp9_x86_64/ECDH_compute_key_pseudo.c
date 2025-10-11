
int ECDH_compute_key(void *out,size_t outlen,EC_POINT *pub_key,EC_KEY *ecdh,KDF *KDF)

{
  int iVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  ulong local_50 [2];
  void *local_40;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (void *)0x0;
  local_50[0] = outlen;
  if (*(code **)(*(long *)ecdh + 0x48) == (code *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_kmeth.c",0xa2,"ECDH_compute_key");
    ERR_set_error(0x10,0x98,0);
    iVar1 = 0;
  }
  else if (outlen < 0x80000000) {
    iVar1 = (**(code **)(*(long *)ecdh + 0x48))(&local_40,&local_38);
    pvVar2 = local_40;
    if (iVar1 != 0) {
      if (KDF == (KDF *)0x0) {
        if (local_38 < local_50[0]) {
          local_50[0] = local_38;
        }
        memcpy(out,local_40,local_50[0]);
      }
      else {
        (*KDF)(local_40,local_38,out,local_50);
        pvVar2 = local_40;
      }
      CRYPTO_clear_free(pvVar2,local_38,"../crypto/ec/ec_kmeth.c",0xb2);
      iVar1 = (int)local_50[0];
    }
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_kmeth.c",0xa6,"ECDH_compute_key");
    ERR_set_error(0x10,0xa1,0);
    iVar1 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

