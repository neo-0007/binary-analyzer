
undefined4 FUN_0046e190(long param_1,long param_2,long *param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0xfffffffe;
  }
  iVar1 = FUN_0056b040(*(undefined8 *)(param_1 + 8));
  lVar9 = (long)iVar1;
  uVar8 = 0;
  if (param_2 == 0) {
    if (lVar9 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/kem/rsa_kem.c",0x100,"rsasve_generate");
      FUN_0051f8f0(0x39,0x9e,0);
      return 0;
    }
    if (param_3 == (long *)0x0 && param_5 == (long *)0x0) {
      return 0;
    }
    if (param_3 != (long *)0x0) {
      *param_3 = lVar9;
    }
    if (param_5 != (long *)0x0) {
      *param_5 = lVar9;
      return 1;
    }
LAB_0046e361:
    uVar8 = 1;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar3 = FUN_0042bd10(uVar6);
    lVar4 = FUN_004b2b20(uVar3);
    if (lVar4 == 0) {
      return 0;
    }
    FUN_004b2c00(lVar4);
    uVar3 = FUN_004b2df0(lVar4);
    lVar5 = FUN_004b2df0(lVar4);
    if (lVar5 != 0) {
      uVar6 = FUN_0042c500(uVar6);
      lVar7 = FUN_004b8260(uVar3,uVar6);
      if ((((lVar7 != 0) && (iVar2 = FUN_004bcb60(uVar3,3), iVar2 != 0)) &&
          (iVar2 = FUN_004bb5a0(lVar5,uVar3,0,lVar4), iVar2 != 0)) &&
         ((iVar2 = FUN_004bcc70(lVar5,2), iVar2 != 0 &&
          (iVar2 = FUN_004b87b0(lVar5,param_4,iVar1), iVar1 == iVar2)))) {
        FUN_004b2d50(lVar4);
        FUN_004b2b50(lVar4);
        iVar1 = FUN_0056b070(iVar1,param_4,param_2,*(undefined8 *)(param_1 + 8),3);
        if (iVar1 == 0) {
          FUN_004227b0(param_4,lVar9);
          return 0;
        }
        if (param_3 != (long *)0x0) {
          *param_3 = lVar9;
        }
        if (param_5 != (long *)0x0) {
          *param_5 = lVar9;
        }
        goto LAB_0046e361;
      }
    }
    FUN_004b2d50(lVar4);
    FUN_004b2b50(lVar4);
  }
  return uVar8;
}

