
int PKCS7_add_crl(PKCS7 *p7,X509_CRL *x509)

{
  stack_st_X509_CRL **ppsVar1;
  int iVar2;
  stack_st_X509_CRL *psVar3;
  
  iVar2 = OBJ_obj2nid(p7->type);
  if ((iVar2 != 0x16) && (iVar2 != 0x18)) {
    ERR_new();
    ERR_set_debug("../crypto/pkcs7/pk7_lib.c",0x11e,"PKCS7_add_crl");
    ERR_set_error(0x21,0x71,0);
    return 0;
  }
  ppsVar1 = &((p7->d).sign)->crl;
  if (((p7->d).sign)->crl == (stack_st_X509_CRL *)0x0) {
    psVar3 = (stack_st_X509_CRL *)OPENSSL_sk_new_null();
    *ppsVar1 = psVar3;
  }
  if (*ppsVar1 != (stack_st_X509_CRL *)0x0) {
    X509_CRL_up_ref(x509);
    iVar2 = OPENSSL_sk_push(*ppsVar1,x509);
    if (iVar2 != 0) {
      return 1;
    }
    X509_CRL_free(x509);
    return 0;
  }
  ERR_new();
  ERR_set_debug("../crypto/pkcs7/pk7_lib.c",0x125,"PKCS7_add_crl");
  ERR_set_error(0x21,0xc0100,0);
  return 0;
}

