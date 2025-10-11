
int X509_check_akid(X509 *issuer,AUTHORITY_KEYID *akid)

{
  ASN1_STRING *b;
  ASN1_INTEGER *y;
  GENERAL_NAMES *pGVar1;
  X509_NAME *a;
  int iVar2;
  int iVar3;
  ASN1_INTEGER *x;
  int *piVar4;
  X509_NAME *b_00;
  
  if (akid == (AUTHORITY_KEYID *)0x0) {
    return 0;
  }
  if (((akid->keyid != (ASN1_STRING *)0x0) &&
      (b = *(ASN1_STRING **)&issuer[1].ex_data.dummy, b != (ASN1_STRING *)0x0)) &&
     (iVar2 = ASN1_OCTET_STRING_cmp(akid->keyid,b), iVar2 != 0)) {
    return 0x1e;
  }
  y = akid->serial;
  if (y != (ASN1_INTEGER *)0x0) {
    x = (ASN1_INTEGER *)X509_get0_serialNumber(issuer);
    iVar2 = ASN1_INTEGER_cmp(x,y);
    if (iVar2 != 0) {
      return 0x1f;
    }
  }
  pGVar1 = akid->issuer;
  iVar2 = 0;
  if (pGVar1 != (GENERAL_NAMES *)0x0) {
    for (; iVar3 = OPENSSL_sk_num(pGVar1), iVar2 < iVar3; iVar2 = iVar2 + 1) {
      piVar4 = (int *)OPENSSL_sk_value(pGVar1,iVar2);
      if (*piVar4 == 4) {
        a = *(X509_NAME **)(piVar4 + 2);
        if (a == (X509_NAME *)0x0) {
          return 0;
        }
        b_00 = X509_get_issuer_name(issuer);
        iVar2 = X509_NAME_cmp(a,b_00);
        if (iVar2 == 0) {
          return 0;
        }
        return 0x1f;
      }
    }
  }
  return 0;
}

