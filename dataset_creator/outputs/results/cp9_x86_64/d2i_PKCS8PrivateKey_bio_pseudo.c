
EVP_PKEY * d2i_PKCS8PrivateKey_bio(BIO *bp,EVP_PKEY **x,undefined1 *cb,void *u)

{
  int passlen;
  X509_SIG *a;
  PKCS8_PRIV_KEY_INFO *p8;
  EVP_PKEY *pEVar1;
  long in_FS_OFFSET;
  char acStack_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  a = d2i_PKCS8_bio(bp,(X509_SIG **)0x0);
  if (a != (X509_SIG *)0x0) {
    if (cb == (undefined1 *)0x0) {
      passlen = PEM_def_callback(acStack_438,0x400,0,u);
    }
    else {
      passlen = (*(code *)cb)();
    }
    if (passlen < 0) {
      ERR_new();
      ERR_set_debug("../crypto/pem/pem_pk8.c",0xba,"d2i_PKCS8PrivateKey_bio");
      ERR_set_error(9,0x68,0);
      X509_SIG_free(a);
    }
    else {
      p8 = PKCS8_decrypt(a,acStack_438,passlen);
      X509_SIG_free(a);
      OPENSSL_cleanse(acStack_438,(long)passlen);
      if (p8 != (PKCS8_PRIV_KEY_INFO *)0x0) {
        pEVar1 = EVP_PKCS82PKEY(p8);
        PKCS8_PRIV_KEY_INFO_free(p8);
        if (pEVar1 != (EVP_PKEY *)0x0) {
          if (x != (EVP_PKEY **)0x0) {
            EVP_PKEY_free(*x);
            *x = pEVar1;
          }
          goto LAB_00542219;
        }
      }
    }
  }
  pEVar1 = (EVP_PKEY *)0x0;
LAB_00542219:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

