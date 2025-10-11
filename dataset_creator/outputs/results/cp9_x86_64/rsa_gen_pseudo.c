
RSA * rsa_gen(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  RSA *pRVar2;
  long lVar3;
  undefined8 uVar4;
  RSA *pRVar5;
  RSA *r;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != (undefined8 *)0x0) && (iVar1 != 0)) {
    if (*(int *)(param_1 + 2) == 0) {
      iVar1 = ossl_rsa_pss_params_30_is_unrestricted(param_1 + 6);
      if (iVar1 == 0) {
        lVar3 = 0;
        r = (RSA *)0x0;
        pRVar5 = (RSA *)0x0;
        goto LAB_0047284c;
      }
    }
    else if (*(int *)(param_1 + 2) != 0x1000) {
      return (RSA *)0x0;
    }
    pRVar2 = (RSA *)ossl_rsa_new_with_ctx(*param_1);
    if (pRVar2 != (RSA *)0x0) {
      param_1[10] = param_3;
      param_1[9] = param_2;
      lVar3 = BN_GENCB_new();
      if (lVar3 != 0) {
        BN_GENCB_set(lVar3,rsa_gencb,param_1);
      }
      iVar1 = RSA_generate_multi_prime_key
                        (pRVar2,*(undefined4 *)(param_1 + 3),*(undefined4 *)(param_1 + 5),param_1[4]
                         ,lVar3);
      pRVar5 = (RSA *)0x0;
      r = pRVar2;
      if (iVar1 != 0) {
        uVar4 = ossl_rsa_get0_pss_params_30(pRVar2);
        iVar1 = ossl_rsa_pss_params_30_copy(uVar4,param_1 + 6);
        if (iVar1 != 0) {
          RSA_clear_flags(pRVar2,0xf000);
          r = (RSA *)0x0;
          RSA_set_flags(pRVar2,*(undefined4 *)(param_1 + 2));
          pRVar5 = pRVar2;
        }
      }
LAB_0047284c:
      BN_GENCB_free(lVar3);
      RSA_free(r);
      return pRVar5;
    }
  }
  return (RSA *)0x0;
}

