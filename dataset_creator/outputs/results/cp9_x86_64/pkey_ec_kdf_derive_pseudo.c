
ulong pkey_ec_kdf_derive(long param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(lVar1 + 0x19) == '\x01') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = pkey_ec_derive();
      return uVar5;
    }
    goto LAB_004e90cd;
  }
  if (param_2 == 0) {
    *param_3 = *(long *)(lVar1 + 0x38);
    uVar5 = 1;
  }
  else {
    if (*param_3 == *(long *)(lVar1 + 0x38)) {
      iVar2 = pkey_ec_derive(param_1,0,&local_48);
      if (iVar2 != 0) {
        pvVar4 = CRYPTO_malloc((int)local_48,"../crypto/ec/ec_pmeth.c",0xe8);
        if (pvVar4 != (void *)0x0) {
          uVar3 = pkey_ec_derive(param_1,pvVar4,&local_48);
          if (uVar3 != 0) {
            iVar2 = ossl_ecdh_kdf_X9_63(param_2,*param_3,pvVar4,local_48,
                                        *(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30),
                                        *(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(param_1 + 8),
                                        *(undefined8 *)(param_1 + 0x10));
            uVar3 = (uint)(iVar2 != 0);
          }
          CRYPTO_clear_free(pvVar4,local_48,"../crypto/ec/ec_pmeth.c",0xf6);
          uVar5 = (ulong)uVar3;
          goto LAB_004e8f70;
        }
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_pmeth.c",0xe9,"pkey_ec_kdf_derive");
        ERR_set_error(0x10,0xc0100,0);
      }
    }
    uVar5 = 0;
  }
LAB_004e8f70:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_004e90cd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

