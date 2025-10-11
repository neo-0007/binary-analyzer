
X509 * X509_new_ex(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  X509 *a;
  
  uVar2 = X509_it();
  a = (X509 *)ASN1_item_new_ex(uVar2,param_1,param_2);
  iVar1 = ossl_x509_set0_libctx(a,param_1,param_2);
  if (iVar1 != 0) {
    return a;
  }
  X509_free(a);
  return (X509 *)0x0;
}

