
bool ossl_rsa_todata(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  lVar4 = OPENSSL_sk_new_null();
  lVar5 = OPENSSL_sk_new_null();
  lVar6 = OPENSSL_sk_new_null();
  if ((((param_1 != 0) && (lVar4 != 0)) && (lVar5 != 0)) && (lVar6 != 0)) {
    RSA_get0_key(param_1,&local_50,&local_48,&local_58);
    ossl_rsa_get0_all_params(param_1,lVar4,lVar5,lVar6);
    iVar1 = ossl_param_build_set_bn(param_2,param_3,"n",local_50);
    if (iVar1 != 0) {
      iVar1 = ossl_param_build_set_bn(param_2,param_3,&DAT_007cb14e,local_48);
      if (iVar1 != 0) {
        bVar7 = true;
        if ((param_4 == 0) || (local_58 == 0)) goto LAB_00554392;
        iVar1 = OPENSSL_sk_num(lVar4);
        iVar2 = OPENSSL_sk_num(lVar5);
        iVar3 = OPENSSL_sk_num(lVar6);
        if ((iVar1 == 0) || ((1 < iVar1 && 1 < iVar2 && (0 < iVar3)))) {
          iVar1 = ossl_param_build_set_bn(param_2,param_3,"d",local_58);
          if (iVar1 != 0) {
            iVar1 = ossl_param_build_set_multi_key_bn
                              (param_2,param_3,ossl_rsa_mp_factor_names,lVar4);
            if (iVar1 != 0) {
              iVar1 = ossl_param_build_set_multi_key_bn(param_2,param_3,ossl_rsa_mp_exp_names,lVar5)
              ;
              if (iVar1 != 0) {
                iVar1 = ossl_param_build_set_multi_key_bn
                                  (param_2,param_3,ossl_rsa_mp_coeff_names,lVar6);
                bVar7 = iVar1 != 0;
                goto LAB_00554392;
              }
            }
          }
        }
      }
    }
  }
  bVar7 = false;
LAB_00554392:
  OPENSSL_sk_free(lVar4);
  OPENSSL_sk_free(lVar5);
  OPENSSL_sk_free(lVar6);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

