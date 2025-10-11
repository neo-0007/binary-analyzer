
ulong ossl_dh_key2buf(undefined8 param_1,long *param_2,ulong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *ptr;
  ulong uVar3;
  long in_FS_OFFSET;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DH_get0_pqg(param_1,&local_48,0,0);
  DH_get0_key(param_1,&local_50,0);
  if ((local_48 != (BIGNUM *)0x0) && (local_50 != (BIGNUM *)0x0)) {
    iVar1 = BN_num_bits(local_48);
    iVar2 = iVar1 + 7;
    if (iVar1 + 7 < 0) {
      iVar2 = iVar1 + 0xe;
    }
    iVar2 = iVar2 >> 3;
    if ((iVar2 != 0) && (iVar1 = BN_num_bits(local_50), 0xe < iVar1 + 0xeU)) {
      uVar3 = (ulong)iVar2;
      if (param_2 == (long *)0x0) goto LAB_004c9166;
      if (param_4 == 0) {
        ptr = (void *)*param_2;
        if (ptr == (void *)0x0) goto LAB_004c9166;
        if (uVar3 <= param_3) {
          iVar2 = BN_bn2binpad(local_50,ptr,iVar2);
          if (-1 < iVar2) goto LAB_004c9238;
          goto LAB_004c9264;
        }
      }
      else {
        ptr = CRYPTO_malloc(iVar2,"../crypto/dh/dh_key.c",0x1b2);
        if (ptr != (void *)0x0) {
          iVar2 = BN_bn2binpad(local_50,ptr,iVar2);
          if (-1 < iVar2) {
LAB_004c9238:
            *param_2 = (long)ptr;
            goto LAB_004c9166;
          }
          CRYPTO_free(ptr);
LAB_004c9264:
          ERR_new();
          uVar3 = 0;
          ERR_set_debug("../crypto/dh/dh_key.c",0x1c0,"ossl_dh_key2buf");
          ERR_set_error(5,0x6a,0);
          goto LAB_004c9166;
        }
      }
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("../crypto/dh/dh_key.c",0x1b6,"ossl_dh_key2buf");
      ERR_set_error(5,0xc0100,0);
      goto LAB_004c9166;
    }
  }
  ERR_new();
  uVar3 = 0;
  ERR_set_debug("../crypto/dh/dh_key.c",0x1aa,"ossl_dh_key2buf");
  ERR_set_error(5,0x66,0);
LAB_004c9166:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

