
undefined8 ossl_rsa_set0_all_params(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if ((((param_3 != 0 && param_4 != 0) && (param_2 != 0)) &&
      (iVar2 = OPENSSL_sk_num(param_2), 1 < iVar2)) &&
     ((iVar3 = OPENSSL_sk_num(param_3), iVar2 == iVar3 &&
      (iVar3 = OPENSSL_sk_num(param_4), iVar2 == iVar3 + 1)))) {
    uVar4 = OPENSSL_sk_value(param_2,1);
    uVar5 = OPENSSL_sk_value(param_2,0);
    iVar3 = RSA_set0_factors(param_1,uVar5,uVar4);
    if (iVar3 != 0) {
      uVar4 = OPENSSL_sk_value(param_4,0);
      uVar5 = OPENSSL_sk_value(param_3,1);
      uVar6 = OPENSSL_sk_value(param_3,0);
      iVar3 = RSA_set0_crt_params(param_1,uVar6,uVar5,uVar4);
      if (iVar3 != 0) {
        lVar1 = *(long *)(param_1 + 0x88);
        if (iVar2 == 2) {
LAB_00557d75:
          if (lVar1 != 0) {
            OPENSSL_sk_pop_free(lVar1,ossl_rsa_multip_info_free);
          }
          *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
          *(uint *)(param_1 + 0x10) = (uint)(2 < iVar2);
          return 1;
        }
        lVar7 = OPENSSL_sk_new_reserve(0,iVar2);
        if (lVar7 != 0) {
          iVar3 = 2;
          do {
            lVar9 = OPENSSL_sk_value(param_2,iVar3);
            lVar10 = OPENSSL_sk_value(param_3,iVar3);
            lVar11 = OPENSSL_sk_value(param_4,iVar3 + -1);
            if ((lVar9 == 0 || lVar10 == 0) || (lVar11 == 0)) goto LAB_00557d5f;
            plVar8 = (long *)CRYPTO_zalloc(0x28,"../crypto/rsa/rsa_lib.c",0x316);
            if (plVar8 == (long *)0x0) {
              ERR_new();
              ERR_set_debug("../crypto/rsa/rsa_lib.c",0x317,"ossl_rsa_set0_all_params");
              ERR_set_error(4,0xc0100,0);
              goto LAB_00557d5f;
            }
            *plVar8 = lVar9;
            iVar3 = iVar3 + 1;
            plVar8[2] = lVar11;
            plVar8[1] = lVar10;
            BN_set_flags(lVar9,4);
            BN_set_flags(plVar8[1],4);
            BN_set_flags(plVar8[2],4);
            OPENSSL_sk_push(lVar7,plVar8);
          } while (iVar3 < iVar2);
          *(long *)(param_1 + 0x88) = lVar7;
          iVar3 = ossl_rsa_multip_calc_product(param_1);
          if (iVar3 != 0) goto LAB_00557d75;
          *(long *)(param_1 + 0x88) = lVar1;
LAB_00557d5f:
          OPENSSL_sk_pop_free(lVar7,ossl_rsa_multip_info_free_ex);
        }
      }
    }
  }
  return 0;
}

