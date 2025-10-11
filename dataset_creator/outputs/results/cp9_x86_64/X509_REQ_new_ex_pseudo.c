
X509_REQ * X509_REQ_new_ex(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ASN1_ITEM *it;
  X509_REQ *a;
  
  it = (ASN1_ITEM *)X509_REQ_it();
  a = (X509_REQ *)ASN1_item_new(it);
  iVar1 = ossl_x509_req_set0_libctx(a,param_1,param_2);
  if (iVar1 != 0) {
    return a;
  }
  X509_REQ_free(a);
  return (X509_REQ *)0x0;
}

