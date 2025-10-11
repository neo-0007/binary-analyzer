
int X509V3_EXT_add(X509V3_EXT_METHOD *ext)

{
  int iVar1;
  
  if ((ext_list == 0) && (ext_list = OPENSSL_sk_new(ext_cmp), ext_list == 0)) {
    ERR_new(0);
    ERR_set_debug("../crypto/x509/v3_lib.c",0x1d,"X509V3_EXT_add");
    ERR_set_error(0x22,0xc0100,0);
    return 0;
  }
  iVar1 = OPENSSL_sk_push(ext_list,ext);
  if (iVar1 != 0) {
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/v3_lib.c",0x21,"X509V3_EXT_add");
  ERR_set_error(0x22,0xc0100,0);
  return 0;
}

