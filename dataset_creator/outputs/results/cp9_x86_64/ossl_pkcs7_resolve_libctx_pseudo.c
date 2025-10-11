
void ossl_pkcs7_resolve_libctx(PKCS7 *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  stack_st_PKCS7_SIGNER_INFO *psVar6;
  undefined8 uVar7;
  long lVar8;
  stack_st_PKCS7_RECIP_INFO *psVar9;
  
  lVar3 = ossl_pkcs7_get0_ctx();
  uVar4 = ossl_pkcs7_ctx_get0_libctx(lVar3);
  uVar5 = ossl_pkcs7_ctx_get0_propq(lVar3);
  if (lVar3 == 0) {
    return;
  }
  if ((param_1->d).ptr != (char *)0x0) {
    iVar1 = OBJ_obj2nid(param_1->type);
    if (iVar1 == 0x18) {
      psVar9 = ((param_1->d).signed_and_enveloped)->recipientinfo;
    }
    else {
      psVar9 = (stack_st_PKCS7_RECIP_INFO *)0x0;
      iVar1 = OBJ_obj2nid(param_1->type);
      if (iVar1 == 0x17) {
        psVar9 = (stack_st_PKCS7_RECIP_INFO *)((param_1->d).data)->data;
      }
    }
    psVar6 = PKCS7_get_signer_info(param_1);
    if (((param_1->d).ptr == (char *)0x0) ||
       ((iVar1 = OBJ_obj2nid(param_1->type), iVar1 != 0x16 &&
        (iVar1 = OBJ_obj2nid(param_1->type), iVar1 != 0x18)))) {
      lVar8 = 0;
    }
    else {
      lVar8 = ((param_1->d).data)->flags;
    }
    for (iVar1 = 0; iVar2 = OPENSSL_sk_num(lVar8), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      uVar7 = OPENSSL_sk_value(lVar8,iVar1);
      ossl_x509_set0_libctx(uVar7,uVar4,uVar5);
    }
    for (iVar1 = 0; iVar2 = OPENSSL_sk_num(psVar9), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      lVar8 = OPENSSL_sk_value(psVar9,iVar1);
      ossl_x509_set0_libctx(*(undefined8 *)(lVar8 + 0x20),uVar4,uVar5);
    }
    for (iVar1 = 0; iVar2 = OPENSSL_sk_num(psVar6), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      lVar8 = OPENSSL_sk_value(psVar6,iVar1);
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x40) = lVar3;
      }
    }
    return;
  }
  return;
}

