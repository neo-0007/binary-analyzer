
undefined8
RSA_set0_multi_prime_params(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) &&
     ((param_5 != 0 && (lVar5 = OPENSSL_sk_new_reserve(0,param_5), lVar5 != 0)))) {
    lVar2 = *(long *)(param_1 + 0x88);
    if (0 < param_5) {
      lVar7 = 0;
      do {
        puVar6 = (undefined8 *)ossl_rsa_multip_info_new();
        if (puVar6 == (undefined8 *)0x0) goto LAB_005577d1;
        if (((*(long *)(param_2 + lVar7 * 8) == 0) || (*(long *)(param_3 + lVar7 * 8) == 0)) ||
           (*(long *)(param_4 + lVar7 * 8) == 0)) {
          ossl_rsa_multip_info_free(puVar6);
          OPENSSL_sk_pop_free(lVar5,ossl_rsa_multip_info_free_ex);
          return 0;
        }
        BN_clear_free((BIGNUM *)*puVar6);
        BN_clear_free((BIGNUM *)puVar6[1]);
        BN_clear_free((BIGNUM *)puVar6[2]);
        uVar3 = *(undefined8 *)(param_2 + lVar7 * 8);
        *puVar6 = uVar3;
        puVar6[1] = *(undefined8 *)(param_3 + lVar7 * 8);
        lVar1 = lVar7 * 8;
        lVar7 = lVar7 + 1;
        puVar6[2] = *(undefined8 *)(param_4 + lVar1);
        BN_set_flags(uVar3,4);
        BN_set_flags(puVar6[1],4);
        BN_set_flags(puVar6[2],4);
        OPENSSL_sk_push(lVar5,puVar6);
      } while (lVar7 != param_5);
    }
    *(long *)(param_1 + 0x88) = lVar5;
    iVar4 = ossl_rsa_multip_calc_product(param_1);
    if (iVar4 != 0) {
      if (lVar2 != 0) {
        OPENSSL_sk_pop_free(lVar2,ossl_rsa_multip_info_free);
      }
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    *(long *)(param_1 + 0x88) = lVar2;
LAB_005577d1:
    OPENSSL_sk_pop_free(lVar5,ossl_rsa_multip_info_free_ex);
  }
  return 0;
}

