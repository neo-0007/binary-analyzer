
undefined4 dsa_pkey_export_to(long param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = DSA_get0_p(uVar1);
  lVar5 = DSA_get0_g(uVar1);
  lVar6 = DSA_get0_q(uVar1);
  lVar7 = DSA_get0_pub_key(uVar1);
  lVar8 = DSA_get0_priv_key(uVar1);
  if (((lVar4 == 0 || lVar6 == 0) || (lVar5 == 0)) || (lVar9 = OSSL_PARAM_BLD_new(), lVar9 == 0)) {
    return 0;
  }
  iVar2 = OSSL_PARAM_BLD_push_BN(lVar9,"p",lVar4);
  if (((iVar2 != 0) && (iVar2 = OSSL_PARAM_BLD_push_BN(lVar9,"q",lVar6), iVar2 != 0)) &&
     (iVar2 = OSSL_PARAM_BLD_push_BN(lVar9,"g",lVar5), iVar2 != 0)) {
    if (lVar7 == 0) {
      uVar10 = 4;
    }
    else {
      uVar10 = 6;
      iVar2 = OSSL_PARAM_BLD_push_BN(lVar9,&DAT_007da6af,lVar7);
      if (iVar2 == 0) goto LAB_004ca71e;
    }
    if (lVar8 != 0) {
      iVar2 = OSSL_PARAM_BLD_push_BN(lVar9,&DAT_007c4ad5,lVar8);
      if (iVar2 == 0) goto LAB_004ca71e;
      uVar10 = uVar10 | 1;
    }
    lVar4 = OSSL_PARAM_BLD_to_param(lVar9);
    if (lVar4 != 0) {
      uVar3 = (*param_3)(param_2,uVar10,lVar4);
      OSSL_PARAM_free(lVar4);
      goto LAB_004ca721;
    }
  }
LAB_004ca71e:
  uVar3 = 0;
LAB_004ca721:
  OSSL_PARAM_BLD_free(lVar9);
  return uVar3;
}

