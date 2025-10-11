
undefined4 rsa_int_export_to_constprop_0_isra_0(long param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined4 local_70;
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  long local_40;
  
  uVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = OSSL_PARAM_BLD_new();
  if (lVar4 == 0) goto LAB_00552cfd;
  lVar5 = RSA_get0_n(param_1);
  if (((lVar5 == 0) || (lVar5 = RSA_get0_e(param_1), lVar5 == 0)) ||
     (iVar1 = ossl_rsa_todata(param_1,lVar4,0,1), iVar1 == 0)) {
LAB_00552ce7:
    uVar2 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = RSA_get0_d(param_1);
    uVar6 = 3 - (lVar5 == 0);
    if (*(long *)(param_1 + 0x80) != 0) {
      local_68 = 0;
      local_60 = 0;
      iVar1 = ossl_rsa_pss_get_param_unverified
                        (*(long *)(param_1 + 0x80),&local_68,&local_60,&local_70,local_6c);
      if (iVar1 != 0) {
        uVar2 = EVP_MD_get_type(local_68);
        uVar3 = EVP_MD_get_type(local_60);
        iVar1 = ossl_rsa_pss_params_30_set_defaults(local_58);
        if (((iVar1 != 0) &&
            (iVar1 = ossl_rsa_pss_params_30_set_hashalg(local_58,uVar2), iVar1 != 0)) &&
           ((iVar1 = ossl_rsa_pss_params_30_set_maskgenhashalg(local_58,uVar3), iVar1 != 0 &&
            (iVar1 = ossl_rsa_pss_params_30_set_saltlen(local_58,local_70), iVar1 != 0)))) {
          uVar6 = uVar6 | 0x80;
          iVar1 = ossl_rsa_pss_params_30_todata(local_58,lVar4,0);
          if (iVar1 != 0) goto LAB_00552e08;
        }
      }
      goto LAB_00552ce7;
    }
LAB_00552e08:
    lVar5 = OSSL_PARAM_BLD_to_param(lVar4);
    if (lVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*param_3)(param_2,uVar6,lVar5);
    }
  }
  OSSL_PARAM_free(lVar5);
  OSSL_PARAM_BLD_free(lVar4);
LAB_00552cfd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

