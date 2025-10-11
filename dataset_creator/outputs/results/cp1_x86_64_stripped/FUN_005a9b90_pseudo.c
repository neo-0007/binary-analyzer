
undefined8 FUN_005a9b90(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  iVar2 = FUN_00436480(uVar1);
  *(undefined4 *)(param_1 + 1) = 1;
  bVar5 = param_4 == 0;
  if ((param_3 < 0) || (iVar2 < param_3)) {
    param_3 = iVar2;
    if (param_4 == -1) goto LAB_005a9ca0;
  }
  else {
    if (param_4 == -1) {
LAB_005a9ca0:
      if (param_3 == 0) {
        bVar5 = true;
        iVar4 = 0;
      }
      else {
        lVar3 = FUN_004364a0(uVar1,param_3 + -1);
        iVar4 = *(int *)(lVar3 + 0x10);
      }
      goto LAB_005a9bfa;
    }
    if (param_3 != iVar2) {
      lVar3 = FUN_004364a0(uVar1,param_3);
      iVar4 = *(int *)(lVar3 + 0x10);
      goto LAB_005a9bfa;
    }
  }
  iVar4 = 0;
  param_3 = iVar2;
  if (iVar2 != 0) {
    lVar3 = FUN_004364a0(uVar1,iVar2 + -1);
    iVar4 = *(int *)(lVar3 + 0x10) + 1;
  }
LAB_005a9bfa:
  lVar3 = FUN_005ad4d0(param_2);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x10) = iVar4;
    iVar2 = FUN_00435d80(uVar1,lVar3,param_3);
    if (iVar2 != 0) {
      if (bVar5) {
        param_3 = param_3 + 1;
        iVar2 = FUN_00436480(uVar1);
        if (param_3 < iVar2) {
          do {
            iVar4 = param_3 + 1;
            lVar3 = FUN_004364a0(uVar1,param_3);
            *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
            param_3 = iVar4;
          } while (iVar2 != iVar4);
        }
      }
      return 1;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509name.c",0xe1,"X509_NAME_add_entry");
    FUN_0051f8f0(0xb,0xc0100,0);
  }
  FUN_005acaf0(lVar3);
  return 0;
}

