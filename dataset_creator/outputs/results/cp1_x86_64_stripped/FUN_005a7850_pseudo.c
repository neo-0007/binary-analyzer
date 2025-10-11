
undefined4 FUN_005a7850(long param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  
  if (param_3 == 0) {
    param_3 = param_2;
    if (param_2 == 0) {
      if (param_4 == 0) {
        return 1;
      }
      iVar2 = FUN_006145c0(param_4);
      if (iVar2 == -1) goto LAB_005a79a0;
      lVar3 = *(long *)(param_1 + 0x20);
      bVar1 = true;
      goto LAB_005a78f9;
    }
  }
  else if (param_2 == 0) {
    param_2 = param_3;
  }
  iVar2 = FUN_0059a9b0(param_3);
  if (iVar2 == -1) {
    FUN_0051f420(0xffffffff);
    FUN_0051f540("../crypto/x509/x509_vfy.c",0x8cd,"X509_STORE_CTX_purpose_inherit");
    FUN_0051f8f0(0xb,0x79,0);
    return 0;
  }
  lVar3 = FUN_0059a910();
  if (*(int *)(lVar3 + 4) == 0) {
    iVar2 = FUN_0059a9b0(param_2);
    if (iVar2 == -1) {
      FUN_0051f420(0xffffffff);
      FUN_0051f540("../crypto/x509/x509_vfy.c",0x8d4,"X509_STORE_CTX_purpose_inherit");
      FUN_0051f8f0(0xb,0x79,0);
      return 0;
    }
    lVar3 = FUN_0059a910();
  }
  if ((param_4 == 0) && (param_4 = *(int *)(lVar3 + 4), param_4 == 0)) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (*(int *)(lVar3 + 0x20) != 0) {
      return 1;
    }
    bVar1 = false;
    param_4 = 0;
  }
  else {
    iVar2 = FUN_006145c0(param_4);
    if (iVar2 == -1) {
LAB_005a79a0:
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x509_vfy.c",0x8e0,"X509_STORE_CTX_purpose_inherit");
      FUN_0051f8f0(0xb,0x78,0);
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    bVar4 = *(int *)(lVar3 + 0x20) == 0;
    bVar1 = bVar4 && param_3 != 0;
    if (!bVar4 || param_3 == 0) {
      bVar1 = true;
      goto LAB_005a78f9;
    }
  }
  *(int *)(lVar3 + 0x20) = param_3;
LAB_005a78f9:
  if ((*(int *)(lVar3 + 0x24) == 0) && (bVar1)) {
    *(int *)(lVar3 + 0x24) = param_4;
  }
  return 1;
}

