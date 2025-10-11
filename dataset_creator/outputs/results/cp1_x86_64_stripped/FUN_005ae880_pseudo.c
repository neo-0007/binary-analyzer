
long FUN_005ae880(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_005ae7f0();
  if (lVar2 != 0) {
    iVar1 = FUN_0040ed80(lVar2);
    if (iVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x_pubkey.c",0x1d6,"X509_PUBKEY_get");
      FUN_0051f8f0(0xb,0xc0103,0);
      return 0;
    }
  }
  return lVar2;
}

