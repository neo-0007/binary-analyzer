
bool FUN_0059e7e0(long param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if (param_1 == 0) {
    FUN_0051f420();
    bVar4 = false;
    FUN_0051f540("../crypto/x509/x509_cmp.c",0xc4,"X509_add_cert");
    FUN_0051f8f0(0xb,0xc0102,0);
  }
  else {
    if ((param_3 & 4) != 0) {
      for (iVar2 = 0; iVar1 = FUN_00436480(param_1), iVar2 < iVar1; iVar2 = iVar2 + 1) {
        uVar3 = FUN_004364a0(param_1,iVar2);
        iVar1 = FUN_0059e700(uVar3,param_2);
        if (iVar1 == 0) goto LAB_0059e864;
      }
    }
    if (((param_3 & 8) != 0) && (iVar2 = FUN_005a3a10(param_2,0), iVar2 != 0)) {
      return 0 < iVar2;
    }
    iVar2 = FUN_00435d80(param_1,param_2,-(uint)((param_3 & 2) == 0));
    if (iVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x509_cmp.c",0xdb,"X509_add_cert");
      FUN_0051f8f0(0xb,0xc0100,0);
      return false;
    }
    if ((param_3 & 1) != 0) {
      FUN_005a1b20(param_2);
      return (bool)(param_3 & 1);
    }
LAB_0059e864:
    bVar4 = true;
  }
  return bVar4;
}

