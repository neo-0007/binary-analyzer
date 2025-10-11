
int X509_STORE_CTX_purpose_inherit(X509_STORE_CTX *ctx,int def_purpose,int purpose,int trust)

{
  bool bVar1;
  int iVar2;
  X509_PURPOSE *pXVar3;
  stack_st_X509_CRL *psVar4;
  bool bVar5;
  
  if (purpose == 0) {
    purpose = def_purpose;
    if (def_purpose == 0) {
      if (trust == 0) {
        return 1;
      }
      iVar2 = X509_TRUST_get_by_id(trust);
      if (iVar2 == -1) goto LAB_005948a0;
      psVar4 = ctx->crls;
      bVar1 = true;
      goto LAB_005947f9;
    }
  }
  else if (def_purpose == 0) {
    def_purpose = purpose;
  }
  iVar2 = X509_PURPOSE_get_by_id(purpose);
  if (iVar2 == -1) {
    ERR_new();
    ERR_set_debug("../crypto/x509/x509_vfy.c",0x8cd,"X509_STORE_CTX_purpose_inherit");
    ERR_set_error(0xb,0x79,0);
    return 0;
  }
  pXVar3 = X509_PURPOSE_get0(iVar2);
  if (pXVar3->trust == 0) {
    iVar2 = X509_PURPOSE_get_by_id(def_purpose);
    if (iVar2 == -1) {
      ERR_new();
      ERR_set_debug("../crypto/x509/x509_vfy.c",0x8d4,"X509_STORE_CTX_purpose_inherit");
      ERR_set_error(0xb,0x79,0);
      return 0;
    }
    pXVar3 = X509_PURPOSE_get0(iVar2);
  }
  if ((trust == 0) && (trust = pXVar3->trust, trust == 0)) {
    psVar4 = ctx->crls;
    if (psVar4[1].stack.num != 0) {
      return 1;
    }
    bVar1 = false;
    trust = 0;
  }
  else {
    iVar2 = X509_TRUST_get_by_id(trust);
    if (iVar2 == -1) {
LAB_005948a0:
      ERR_new();
      ERR_set_debug("../crypto/x509/x509_vfy.c",0x8e0,"X509_STORE_CTX_purpose_inherit");
      ERR_set_error(0xb,0x78,0);
      return 0;
    }
    psVar4 = ctx->crls;
    bVar5 = psVar4[1].stack.num == 0;
    bVar1 = bVar5 && purpose != 0;
    if (!bVar5 || purpose == 0) {
      bVar1 = true;
      goto LAB_005947f9;
    }
  }
  psVar4[1].stack.num = purpose;
LAB_005947f9:
  if ((*(int *)&psVar4[1].stack.field_0x4 == 0) && (bVar1)) {
    *(int *)&psVar4[1].stack.field_0x4 = trust;
  }
  return 1;
}

