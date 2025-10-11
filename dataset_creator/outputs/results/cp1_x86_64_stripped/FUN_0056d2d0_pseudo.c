
bool FUN_0056d2d0(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  
  iVar1 = FUN_004b7bb0(*(undefined8 *)(param_1 + 0x38));
  if (iVar1 <= param_2 >> 1) {
    return false;
  }
  FUN_004b2c00(param_3);
  uVar2 = FUN_004b2df0(param_3);
  uVar3 = FUN_004b2df0(param_3);
  uVar4 = FUN_004b2df0(param_3);
  uVar5 = FUN_004b2df0(param_3);
  uVar6 = FUN_004b2df0(param_3);
  lVar7 = FUN_004b2df0(param_3);
  if (lVar7 != 0) {
    FUN_004b7e70(uVar2,4);
    FUN_004b7e70(uVar3,4);
    FUN_004b7e70(uVar4,4);
    FUN_004b7e70(uVar5,4);
    FUN_004b7e70(uVar6,4);
    FUN_004b7e70(lVar7,4);
    iVar1 = FUN_0056d210(param_3,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                         uVar5,lVar7,uVar3);
    if (iVar1 == 1) {
      iVar1 = FUN_004b7840(*(undefined8 *)(param_1 + 0x38),uVar5,uVar4,uVar6);
      if (iVar1 < 0) {
        iVar1 = FUN_004b8fe0(uVar2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                             uVar5,param_3);
        if (iVar1 != 0) {
          iVar1 = FUN_004b7cc0(uVar2);
          bVar8 = iVar1 != 0;
          goto LAB_0056d3dd;
        }
      }
    }
  }
  bVar8 = false;
LAB_0056d3dd:
  FUN_004b7780(uVar2);
  FUN_004b7780(uVar3);
  FUN_004b7780(uVar4);
  FUN_004b7780(uVar5);
  FUN_004b7780(lVar7);
  FUN_004b2d50(param_3);
  return bVar8;
}

