
undefined8 ossl_dsa_key_fromdata(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  BIGNUM *local_30;
  BIGNUM *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = (BIGNUM *)0x0;
  local_28 = (BIGNUM *)0x0;
  if (param_1 == 0) {
    uVar3 = 0;
    goto LAB_004cb4a7;
  }
  lVar4 = 0;
  if (param_3 != 0) {
    lVar4 = OSSL_PARAM_locate_const(param_2,&DAT_007c4ad5);
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,&DAT_007da6af);
  if (lVar4 == 0 && lVar2 == 0) {
LAB_004cb4a2:
    uVar3 = 1;
  }
  else {
    if (lVar2 == 0) {
LAB_004cb476:
      if (lVar4 != 0) {
        iVar1 = OSSL_PARAM_get_BN(lVar4,&local_30);
        if (iVar1 == 0) goto LAB_004cb4c8;
      }
      iVar1 = DSA_set0_key(param_1,local_28,local_30);
      if (iVar1 != 0) goto LAB_004cb4a2;
    }
    else {
      iVar1 = OSSL_PARAM_get_BN(lVar2,&local_28);
      if (iVar1 != 0) goto LAB_004cb476;
    }
LAB_004cb4c8:
    BN_clear_free(local_30);
    BN_free(local_28);
    uVar3 = 0;
  }
LAB_004cb4a7:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

