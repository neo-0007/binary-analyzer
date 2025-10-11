
X509_CRL * X509_CRL_new_ex(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ASN1_ITEM *it;
  X509_CRL *a;
  
  it = (ASN1_ITEM *)X509_CRL_it();
  a = (X509_CRL *)ASN1_item_new(it);
  iVar1 = ossl_x509_crl_set0_libctx(a,param_1,param_2);
  if (iVar1 != 0) {
    return a;
  }
  X509_CRL_free(a);
  return (X509_CRL *)0x0;
}

