
bool FUN_0059efc0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0059ef80();
  if (lVar2 != 0) {
    iVar1 = FUN_00410190(lVar2,param_2);
    if (iVar1 == -1) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x509_cmp.c",0x198,"X509_check_private_key");
      FUN_0051f8f0(0xb,0x73,0);
    }
    else if (iVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x509_cmp.c",0x195,"X509_check_private_key");
      FUN_0051f8f0(0xb,0x74,0);
    }
    else if (iVar1 == -2) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x509_cmp.c",0x19b,"X509_check_private_key");
      FUN_0051f8f0(0xb,0x75,0);
    }
    return 0 < iVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/x509_cmp.c",399,"X509_check_private_key");
  FUN_0051f8f0(0xb,0x6c,0);
  return false;
}

