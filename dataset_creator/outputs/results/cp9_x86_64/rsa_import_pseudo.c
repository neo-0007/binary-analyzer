
bool rsa_import(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  iVar1 = ossl_prov_is_running();
  if (((iVar1 == 0) || (param_1 == 0)) || ((param_2 & 0x83) == 0)) {
LAB_00472aa5:
    bVar5 = false;
  }
  else {
    iVar1 = RSA_test_flags(param_1,0xf000);
    if ((param_2 & 0x80) != 0) {
      uVar3 = ossl_rsa_get0_libctx(param_1);
      uVar4 = ossl_rsa_get0_pss_params_30(param_1);
      iVar2 = ossl_rsa_pss_params_30_fromdata(uVar4,&local_44,param_3,uVar3);
      if ((iVar2 == 0) ||
         ((iVar1 != 0x1000 && (iVar1 = ossl_rsa_pss_params_30_is_unrestricted(uVar4), iVar1 == 0))))
      goto LAB_00472aa5;
    }
    bVar5 = true;
    if ((param_2 & 3) != 0) {
      iVar1 = ossl_rsa_fromdata(param_1,param_3,param_2 & 1);
      bVar5 = iVar1 != 0;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar5;
}

