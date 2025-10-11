
int X509_add1_trust_object(X509 *x,ASN1_OBJECT *obj)

{
  int iVar1;
  X509_CERT_AUX *pXVar2;
  stack_st_ASN1_OBJECT *psVar3;
  
  if ((obj != (ASN1_OBJECT *)0x0) && (obj = OBJ_dup(obj), obj == (ASN1_OBJECT *)0x0)) {
    return 0;
  }
  if (x != (X509 *)0x0) {
    pXVar2 = (X509_CERT_AUX *)x[1].altname;
    if (pXVar2 == (X509_CERT_AUX *)0x0) {
      pXVar2 = X509_CERT_AUX_new();
      x[1].altname = (stack_st_GENERAL_NAME *)pXVar2;
      if (pXVar2 == (X509_CERT_AUX *)0x0) goto LAB_0059dcd0;
      psVar3 = pXVar2->trust;
    }
    else {
      psVar3 = pXVar2->trust;
    }
    if (psVar3 == (stack_st_ASN1_OBJECT *)0x0) {
      psVar3 = (stack_st_ASN1_OBJECT *)OPENSSL_sk_new_null();
      pXVar2->trust = psVar3;
      if (psVar3 == (stack_st_ASN1_OBJECT *)0x0) goto LAB_0059dcd0;
    }
    if ((obj == (ASN1_OBJECT *)0x0) || (iVar1 = OPENSSL_sk_push(pXVar2->trust,obj), iVar1 != 0)) {
      return 1;
    }
  }
LAB_0059dcd0:
  ASN1_OBJECT_free(obj);
  return 0;
}

