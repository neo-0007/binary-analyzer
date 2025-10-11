
undefined8 FUN_0042c920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 != 0) {
    lVar2 = FUN_0042c530();
    if (lVar2 != 0) {
      uVar3 = FUN_0042c530(param_1);
      FUN_00435f80(param_2,uVar3);
      uVar3 = FUN_0042c540(param_1);
      FUN_00435f80(param_2,uVar3);
      uVar3 = FUN_0042c550(param_1);
      FUN_00435f80(param_3,uVar3);
      uVar3 = FUN_0042c560(param_1);
      FUN_00435f80(param_3,uVar3);
      uVar3 = FUN_0042c570(param_1);
      FUN_00435f80(param_4,uVar3);
      iVar1 = FUN_0042c3e0(param_1);
      if (0 < iVar1) {
        iVar5 = 0;
        do {
          iVar6 = iVar5 + 1;
          puVar4 = (undefined8 *)FUN_004364a0(*(undefined8 *)(param_1 + 0x88),iVar5);
          FUN_00435f80(param_2,*puVar4);
          FUN_00435f80(param_3,puVar4[1]);
          FUN_00435f80(param_4,puVar4[2]);
          iVar5 = iVar6;
        } while (iVar1 != iVar6);
      }
    }
    return 1;
  }
  return 0;
}

