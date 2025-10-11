
X509_PUBKEY * X509_PUBKEY_new_ex(X509_ALGOR *param_1,char *param_2)

{
  undefined8 uVar1;
  X509_PUBKEY *a;
  ASN1_BIT_STRING *pAVar2;
  
  uVar1 = X509_PUBKEY_it();
  a = (X509_PUBKEY *)ASN1_item_new_ex(uVar1,param_1,param_2);
  if (a != (X509_PUBKEY *)0x0) {
    a[1].algor = param_1;
    CRYPTO_free(a[1].public_key);
    a[1].public_key = (ASN1_BIT_STRING *)0x0;
    if (param_2 != (char *)0x0) {
      pAVar2 = (ASN1_BIT_STRING *)CRYPTO_strdup(param_2,"../crypto/x509/x_pubkey.c",0x37);
      a[1].public_key = pAVar2;
      if (pAVar2 == (ASN1_BIT_STRING *)0x0) {
        X509_PUBKEY_free(a);
        return (X509_PUBKEY *)0x0;
      }
    }
  }
  return a;
}

