
undefined4 req_cb(undefined4 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  EVP_PKEY *pkey;
  
  lVar1 = *param_2;
  switch(param_1) {
  case 3:
    ASN1_OCTET_STRING_free(*(ASN1_STRING **)(lVar1 + 0x60));
    CRYPTO_free(*(void **)(lVar1 + 0x70));
    return 1;
  case 4:
    ASN1_OCTET_STRING_free(*(ASN1_STRING **)(lVar1 + 0x60));
  case 1:
    *(undefined8 *)(lVar1 + 0x60) = 0;
    return 1;
  case 0xf:
    iVar2 = ossl_x509_req_set0_libctx(lVar1,param_4[0xd],param_4[0xe]);
    if (iVar2 == 0) {
      return 0;
    }
    if ((param_4[5] != 0) && (lVar3 = X509_PUBKEY_get0(), lVar3 != 0)) {
      pkey = (EVP_PKEY *)EVP_PKEY_dup(lVar3);
      if (pkey == (EVP_PKEY *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/x_req.c",0x4d,"req_cb");
        ERR_set_error(0xb,0xc0100,0);
        return 0;
      }
      iVar2 = X509_PUBKEY_set((X509_PUBKEY **)(lVar1 + 0x28),pkey);
      if (iVar2 != 0) {
        EVP_PKEY_free(pkey);
        return 1;
      }
      EVP_PKEY_free(pkey);
      ERR_new();
      ERR_set_debug("../crypto/x509/x_req.c",0x52,"req_cb");
      ERR_set_error(0xb,0xc0103,0);
      return 0;
    }
    break;
  case 0x10:
    *param_4 = *(undefined8 *)(lVar1 + 0x68);
    return 1;
  case 0x11:
    *param_4 = *(undefined8 *)(lVar1 + 0x70);
    return 1;
  }
  return 1;
}

