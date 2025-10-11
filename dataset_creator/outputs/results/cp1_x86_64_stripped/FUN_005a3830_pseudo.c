
bool FUN_005a3830(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  lVar7 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(lVar7 + 0x38) == 0) {
LAB_005a38bd:
    if ((*(long *)(lVar7 + 0x50) != 0) &&
       (iVar3 = FUN_0059dcd0(uVar1,*(long *)(lVar7 + 0x50),*(undefined8 *)(lVar7 + 0x58),0),
       iVar3 < 1)) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      lVar6 = *(long *)(param_1 + 8);
      if (lVar6 == 0) {
        lVar6 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(long *)(param_1 + 0xb8) = lVar6;
      *(undefined4 *)(param_1 + 0xb0) = 0x3f;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) goto LAB_005a3948;
    }
    if ((*(long *)(lVar7 + 0x60) != 0) &&
       (iVar3 = FUN_0059dd90(uVar1,*(long *)(lVar7 + 0x60),*(undefined8 *)(lVar7 + 0x68),0),
       iVar3 < 1)) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      lVar7 = *(long *)(param_1 + 8);
      if (lVar7 == 0) {
        lVar7 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(long *)(param_1 + 0xb8) = lVar7;
      *(undefined4 *)(param_1 + 0xb0) = 0x40;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      return iVar3 != 0;
    }
    bVar2 = true;
  }
  else {
    iVar3 = FUN_00436480();
    if (*(long *)(lVar7 + 0x48) != 0) {
      FUN_0041ad60(*(long *)(lVar7 + 0x48),"../crypto/x509/x509_vfy.c",0x30b);
      *(undefined8 *)(lVar7 + 0x48) = 0;
    }
    iVar8 = 0;
    if (iVar3 < 1) {
      if (iVar3 == 0) goto LAB_005a38bd;
    }
    else {
      do {
        uVar5 = FUN_004364a0(*(undefined8 *)(lVar7 + 0x38),iVar8);
        iVar4 = FUN_0059dc00(uVar1,uVar5,0,*(undefined4 *)(lVar7 + 0x40),lVar7 + 0x48);
        if (0 < iVar4) goto LAB_005a38bd;
        iVar8 = iVar8 + 1;
      } while (iVar3 != iVar8);
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) {
      lVar6 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(long *)(param_1 + 0xb8) = lVar6;
    *(undefined4 *)(param_1 + 0xb0) = 0x3e;
    iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar3 != 0) goto LAB_005a38bd;
LAB_005a3948:
    bVar2 = false;
  }
  return bVar2;
}

