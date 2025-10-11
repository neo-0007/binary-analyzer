
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_VERIFY_PARAM * X509_VERIFY_PARAM_new(void)

{
  X509_VERIFY_PARAM *pXVar1;
  
  pXVar1 = (X509_VERIFY_PARAM *)CRYPTO_zalloc(0x70,"../crypto/x509/x509_vpm.c",0x56);
  if (pXVar1 == (X509_VERIFY_PARAM *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/x509_vpm.c",0x58,"X509_VERIFY_PARAM_new");
    ERR_set_error(0xb,0xc0100,0);
  }
  else {
    pXVar1->trust = 0;
    *(undefined8 *)&pXVar1->depth = 0xffffffffffffffff;
  }
  return pXVar1;
}

