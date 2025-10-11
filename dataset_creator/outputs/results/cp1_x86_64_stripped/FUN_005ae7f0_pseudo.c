
long FUN_005ae7f0(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    FUN_0051f420();
    lVar1 = 0;
    FUN_0051f540("../crypto/x509/x_pubkey.c",0x1c4,"X509_PUBKEY_get0");
    FUN_0051f8f0(0xb,0xc0102,0);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x_pubkey.c",0x1ca,"X509_PUBKEY_get0");
      FUN_0051f8f0(6,0x72,0);
    }
  }
  return lVar1;
}

