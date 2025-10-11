
undefined8 ossl_dh_key_fromdata(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  BIGNUM *local_40;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  local_40 = (BIGNUM *)0x0;
  local_38 = (BIGNUM *)0x0;
  if (param_1 == 0) goto LAB_004c6d0c;
  lVar2 = OSSL_PARAM_locate_const(param_2,&DAT_007c4ad5);
  lVar3 = OSSL_PARAM_locate_const(param_2,&DAT_007da6af);
  if ((param_3 == 0) || (lVar2 == 0)) {
LAB_004c6cdb:
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_get_BN(lVar3,&local_38);
      if (iVar1 == 0) goto LAB_004c6d30;
    }
    iVar1 = DH_set0_key(param_1,local_38,local_40);
    if (iVar1 != 0) {
      uVar4 = 1;
      goto LAB_004c6d0c;
    }
  }
  else {
    iVar1 = OSSL_PARAM_get_BN(lVar2,&local_40);
    if (iVar1 != 0) goto LAB_004c6cdb;
  }
LAB_004c6d30:
  BN_clear_free(local_40);
  BN_free(local_38);
  uVar4 = 0;
LAB_004c6d0c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

