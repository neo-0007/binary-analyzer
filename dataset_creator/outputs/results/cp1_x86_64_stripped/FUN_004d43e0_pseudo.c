
bool FUN_004d43e0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  *param_3 = 0;
  lVar2 = FUN_004b7690();
  if (lVar2 == 0) {
    return false;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
LAB_004d4468:
    bVar5 = false;
  }
  else {
    iVar1 = FUN_004d4b10(param_1);
    if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x68), iVar1 != 0)) {
      uVar3 = FUN_004b75a0();
      iVar1 = FUN_004bc220(lVar2,uVar3,iVar1);
      if (iVar1 == 0) goto LAB_004d4468;
      iVar1 = FUN_004b7840(lVar2,*(undefined8 *)(param_1 + 0x10));
      if (iVar1 < 0) {
        lVar4 = lVar2;
      }
    }
    iVar1 = FUN_00541e10(lVar4,param_2,param_3);
    bVar5 = iVar1 != 0;
  }
  FUN_004b7fa0(lVar2);
  return bVar5;
}

