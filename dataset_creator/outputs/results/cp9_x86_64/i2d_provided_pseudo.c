
ulong i2d_provided(undefined8 param_1,undefined4 param_2,long *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
LAB_005a7eea:
  lVar2 = *param_3;
  do {
    if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/i2d_evp.c",0x46,"i2d_provided");
      ERR_set_error(0xd,0xc4,0);
LAB_005a7fe0:
      uVar3 = 0xffffffff;
      goto LAB_005a7f71;
    }
    local_48 = 0x7fffffff;
    bVar4 = true;
    if (param_4 != (long *)0x0) {
      bVar4 = *param_4 == 0;
    }
    lVar2 = OSSL_ENCODER_CTX_new_for_pkey(param_1,param_2,lVar2,param_3[1],0);
    if (lVar2 == 0) goto LAB_005a7fe0;
    iVar1 = OSSL_ENCODER_to_data(lVar2,param_4,&local_48);
    uVar3 = local_48;
    if (iVar1 != 0) break;
    param_3 = param_3 + 2;
    OSSL_ENCODER_CTX_free(lVar2);
    lVar2 = *param_3;
  } while( true );
  iVar1 = (int)local_48;
  if (!bVar4) {
    OSSL_ENCODER_CTX_free(lVar2);
    uVar3 = (ulong)(0x7fffffff - iVar1);
    goto LAB_005a7f71;
  }
  param_3 = param_3 + 2;
  OSSL_ENCODER_CTX_free(lVar2);
  uVar3 = uVar3 & 0xffffffff;
  if (iVar1 != -1) {
LAB_005a7f71:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  goto LAB_005a7eea;
}

