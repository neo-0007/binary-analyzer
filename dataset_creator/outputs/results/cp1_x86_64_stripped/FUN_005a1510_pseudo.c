
bool FUN_005a1510(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = FUN_005a14c0();
  iVar1 = FUN_00410190(uVar2,param_2);
  if (iVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_req.c",0x5d,"X509_REQ_check_private_key");
    FUN_0051f8f0(0xb,0x74,0);
    bVar3 = false;
  }
  else if (iVar1 < 1) {
    if (iVar1 == -2) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x509_req.c",99,"X509_REQ_check_private_key");
      FUN_0051f8f0(0xb,0x75,0);
    }
    else if (iVar1 == -1) {
      FUN_0051f420();
      bVar3 = false;
      FUN_0051f540("../crypto/x509/x509_req.c",0x60,"X509_REQ_check_private_key");
      FUN_0051f8f0(0xb,0x73,0);
      goto LAB_005a157f;
    }
    bVar3 = false;
  }
  else {
    bVar3 = iVar1 == 1;
  }
LAB_005a157f:
  FUN_0040f4f0(uVar2);
  return bVar3;
}

