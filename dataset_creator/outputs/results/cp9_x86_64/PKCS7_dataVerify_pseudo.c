
int PKCS7_dataVerify(X509_STORE *cert_store,X509_STORE_CTX *ctx,BIO *bio,PKCS7 *p7,
                    PKCS7_SIGNER_INFO *si)

{
  stack_st_X509 *sk;
  int iVar1;
  X509 *x509;
  undefined8 uVar2;
  
  if (p7 == (PKCS7 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x3d0,"PKCS7_dataVerify");
    ERR_set_error(0x21,0x8f,0);
  }
  else if ((p7->d).ptr == (char *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x3d5,"PKCS7_dataVerify");
    ERR_set_error(0x21,0x7a,0);
  }
  else {
    iVar1 = OBJ_obj2nid(p7->type);
    if ((iVar1 != 0x16) && (iVar1 = OBJ_obj2nid(p7->type), iVar1 != 0x18)) {
      ERR_new();
      ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x3de,"PKCS7_dataVerify");
      ERR_set_error(0x21,0x72,0);
      return 0;
    }
    sk = ((p7->d).sign)->cert;
    x509 = X509_find_by_issuer_and_serial
                     (sk,si->issuer_and_serial->issuer,si->issuer_and_serial->serial);
    if (x509 == (X509 *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/pkcs7/pk7_doit.c",1000,"PKCS7_dataVerify");
      ERR_set_error(0x21,0x6a,0);
    }
    else {
      iVar1 = X509_STORE_CTX_init(ctx,cert_store,x509,sk);
      if (iVar1 == 0) {
        ERR_new();
        uVar2 = 0x3ee;
      }
      else {
        X509_STORE_CTX_set_purpose(ctx,4);
        iVar1 = X509_verify_cert(ctx);
        if (0 < iVar1) {
          iVar1 = PKCS7_signatureVerify(bio,p7,si,x509);
          return iVar1;
        }
        ERR_new();
        uVar2 = 0x3f4;
      }
      ERR_set_debug("../crypto/pkcs7/pk7_doit.c",uVar2,"PKCS7_dataVerify");
      ERR_set_error(0x21,0x8000b,0);
    }
  }
  return 0;
}

