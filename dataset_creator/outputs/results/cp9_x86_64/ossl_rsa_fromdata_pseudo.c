
undefined8 ossl_rsa_fromdata(long param_1,undefined8 param_2,int param_3)

{
  BIGNUM *pBVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = 0;
  local_58 = (BIGNUM *)0x0;
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  if (param_1 == 0) goto LAB_00554240;
  lVar5 = 0;
  lVar3 = OSSL_PARAM_locate_const(param_2,"n");
  lVar4 = OSSL_PARAM_locate_const(param_2,&DAT_007cb14e);
  if (param_3 == 0) {
    if (lVar3 == 0) goto LAB_005540d4;
LAB_005540c1:
    iVar2 = OSSL_PARAM_get_BN(lVar3,&local_58);
    if (iVar2 != 0) goto LAB_005540d4;
LAB_005541f0:
    lVar5 = 0;
    lVar4 = 0;
    lVar3 = 0;
  }
  else {
    lVar5 = OSSL_PARAM_locate_const(param_2,"d");
    if (lVar3 != 0) goto LAB_005540c1;
LAB_005540d4:
    if ((((lVar4 != 0) && (iVar2 = OSSL_PARAM_get_BN(lVar4,&local_50), iVar2 == 0)) ||
        ((lVar5 != 0 && (iVar2 = OSSL_PARAM_get_BN(lVar5,&local_48), iVar2 == 0)))) ||
       (pBVar1 = local_48, iVar2 = RSA_set0_key(param_1,local_58,local_50,local_48), iVar2 == 0))
    goto LAB_005541f0;
    local_48 = (BIGNUM *)0x0;
    local_50 = (BIGNUM *)0x0;
    local_58 = (BIGNUM *)0x0;
    if (pBVar1 == (BIGNUM *)0x0) {
      lVar5 = 0;
      lVar4 = 0;
      lVar3 = 0;
LAB_00554286:
      OPENSSL_sk_free(lVar3);
      OPENSSL_sk_free(lVar4);
      OPENSSL_sk_free(lVar5);
      uVar6 = 1;
      goto LAB_00554240;
    }
    lVar3 = OPENSSL_sk_new_null();
    if (lVar3 == 0) goto LAB_005541f0;
    iVar2 = collect_numbers_part_0(lVar3,param_2,ossl_rsa_mp_factor_names);
    if (iVar2 == 0) {
      lVar5 = 0;
      lVar4 = 0;
    }
    else {
      lVar4 = OPENSSL_sk_new_null();
      if (lVar4 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        iVar2 = collect_numbers_part_0(lVar4,param_2,ossl_rsa_mp_exp_names);
        if ((((iVar2 != 0) && (lVar5 = OPENSSL_sk_new_null(), lVar5 != 0)) &&
            (iVar2 = collect_numbers_part_0(lVar5,param_2,ossl_rsa_mp_coeff_names), iVar2 != 0)) &&
           ((iVar2 = OPENSSL_sk_num(lVar3), iVar2 == 0 ||
            (iVar2 = ossl_rsa_set0_all_params(param_1,lVar3,lVar4,lVar5), iVar2 != 0))))
        goto LAB_00554286;
      }
    }
  }
  BN_free(local_58);
  BN_free(local_50);
  BN_free(local_48);
  OPENSSL_sk_pop_free(lVar3,BN_free);
  OPENSSL_sk_pop_free(lVar4,BN_free);
  OPENSSL_sk_pop_free(lVar5,BN_free);
  uVar6 = 0;
LAB_00554240:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar6;
}

