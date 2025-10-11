
int X509_add1_reject_object(X509 *x,ASN1_OBJECT *obj)

{
  int iVar1;
  ASN1_OBJECT *a;
  stack_st_ASN1_OBJECT *psVar2;
  X509_CERT_AUX *pXVar3;
  
  a = OBJ_dup(obj);
  if (a == (ASN1_OBJECT *)0x0) {
    return 0;
  }
  if (x != (X509 *)0x0) {
    pXVar3 = (X509_CERT_AUX *)x[1].altname;
    if (pXVar3 == (X509_CERT_AUX *)0x0) {
      pXVar3 = X509_CERT_AUX_new();
      x[1].altname = (stack_st_GENERAL_NAME *)pXVar3;
      if (pXVar3 == (X509_CERT_AUX *)0x0) goto LAB_0059dd92;
    }
    psVar2 = pXVar3->reject;
    if (psVar2 == (stack_st_ASN1_OBJECT *)0x0) {
      psVar2 = (stack_st_ASN1_OBJECT *)OPENSSL_sk_new_null();
      pXVar3->reject = psVar2;
      if (psVar2 == (stack_st_ASN1_OBJECT *)0x0) goto LAB_0059dd92;
    }
    iVar1 = OPENSSL_sk_push(psVar2,a);
    if (0 < iVar1) {
      return 1;
    }
  }
LAB_0059dd92:
  ASN1_OBJECT_free(a);
  return 0;
}

