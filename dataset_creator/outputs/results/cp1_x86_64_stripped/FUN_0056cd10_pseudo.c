
bool FUN_0056cd10(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    if (*(long *)(param_1 + 0x58) != 0) {
      return false;
    }
    return *(long *)(param_1 + 0x60) == 0;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return false;
  }
  FUN_004b2c00(param_2);
  uVar2 = FUN_004b2df0(param_2);
  uVar3 = FUN_004b2df0(param_2);
  lVar4 = FUN_004b2df0(param_2);
  if (lVar4 != 0) {
    FUN_004b7e70(uVar2,4);
    FUN_004b7e70(uVar3,4);
    FUN_004b7e70(lVar4,4);
    lVar5 = FUN_004b8260(uVar3,*(undefined8 *)(param_1 + 0x40));
    if ((((lVar5 != 0) && (iVar1 = FUN_004bcb60(uVar3,1), iVar1 != 0)) &&
        (lVar5 = FUN_004b8260(lVar4,*(undefined8 *)(param_1 + 0x48)), lVar5 != 0)) &&
       (iVar1 = FUN_004bcb60(lVar4,1), iVar1 != 0)) {
      uVar6 = FUN_004b75a0();
      iVar1 = FUN_004b7840(*(undefined8 *)(param_1 + 0x50),uVar6);
      if ((0 < iVar1) && (iVar1 = FUN_004b7840(*(undefined8 *)(param_1 + 0x50),uVar3), iVar1 < 0)) {
        uVar6 = FUN_004b75a0();
        iVar1 = FUN_004b7840(*(undefined8 *)(param_1 + 0x58),uVar6);
        if ((0 < iVar1) && (iVar1 = FUN_004b7840(*(undefined8 *)(param_1 + 0x58),lVar4), iVar1 < 0))
        {
          uVar6 = FUN_004b75a0();
          iVar1 = FUN_004b7840(*(undefined8 *)(param_1 + 0x60),uVar6);
          if (((((0 < iVar1) &&
                (iVar1 = FUN_004b7840(*(undefined8 *)(param_1 + 0x60),
                                      *(undefined8 *)(param_1 + 0x40)), iVar1 < 0)) &&
               (iVar1 = FUN_004b8fe0(uVar2,*(undefined8 *)(param_1 + 0x50),
                                     *(undefined8 *)(param_1 + 0x30),uVar3,param_2), iVar1 != 0)) &&
              (((iVar1 = FUN_004b7cc0(uVar2), iVar1 != 0 &&
                (iVar1 = FUN_004b8fe0(uVar2,*(undefined8 *)(param_1 + 0x58),
                                      *(undefined8 *)(param_1 + 0x30),lVar4,param_2), iVar1 != 0))
               && (iVar1 = FUN_004b7cc0(uVar2), iVar1 != 0)))) &&
             (iVar1 = FUN_004b8fe0(uVar2,*(undefined8 *)(param_1 + 0x60),
                                   *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40),
                                   param_2), iVar1 != 0)) {
            iVar1 = FUN_004b7cc0(uVar2);
            bVar7 = iVar1 != 0;
            goto LAB_0056cdcb;
          }
        }
      }
    }
  }
  bVar7 = false;
LAB_0056cdcb:
  FUN_004b7780(uVar2);
  FUN_004b7780(uVar3);
  FUN_004b7780(lVar4);
  FUN_004b2d50(param_2);
  return bVar7;
}

