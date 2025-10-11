
undefined4 dh_pkey_export_to(long param_1,undefined8 param_2,code *param_3)

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
  long lVar10;
  uint uVar11;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = DH_get0_p(uVar1);
  lVar5 = DH_get0_g(uVar1);
  lVar6 = DH_get0_q(uVar1);
  lVar7 = DH_get_length(uVar1);
  lVar8 = DH_get0_pub_key(uVar1);
  lVar9 = DH_get0_priv_key(uVar1);
  if (((lVar4 == 0) || (lVar5 == 0)) || (lVar10 = OSSL_PARAM_BLD_new(), lVar10 == 0)) {
    return 0;
  }
  iVar2 = OSSL_PARAM_BLD_push_BN(lVar10,"p",lVar4);
  if (((iVar2 != 0) && (iVar2 = OSSL_PARAM_BLD_push_BN(lVar10,"g",lVar5), iVar2 != 0)) &&
     ((lVar6 == 0 || (iVar2 = OSSL_PARAM_BLD_push_BN(lVar10,"q",lVar6), iVar2 != 0)))) {
    uVar11 = 4;
    if (0 < lVar7) {
      iVar2 = OSSL_PARAM_BLD_push_long(lVar10,"priv_len",lVar7);
      if (iVar2 == 0) goto LAB_004c5e81;
      uVar11 = 0x84;
    }
    if (lVar8 != 0) {
      iVar2 = OSSL_PARAM_BLD_push_BN(lVar10,&DAT_007da6af,lVar8);
      if (iVar2 == 0) goto LAB_004c5e81;
      uVar11 = uVar11 | 2;
    }
    if (lVar9 != 0) {
      iVar2 = OSSL_PARAM_BLD_push_BN(lVar10,&DAT_007c4ad5,lVar9);
      if (iVar2 == 0) goto LAB_004c5e81;
      uVar11 = uVar11 | 1;
    }
    lVar4 = OSSL_PARAM_BLD_to_param(lVar10);
    if (lVar4 != 0) {
      uVar3 = (*param_3)(param_2,uVar11,lVar4);
      OSSL_PARAM_free(lVar4);
      goto LAB_004c5e84;
    }
  }
LAB_004c5e81:
  uVar3 = 0;
LAB_004c5e84:
  OSSL_PARAM_BLD_free(lVar10);
  return uVar3;
}

