
undefined8 FUN_00435050(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = *(ulong *)(param_1 + 200);
  if (param_3 == 0) {
    return 1;
  }
  lVar3 = *(long *)(param_1 + 0xd8);
  if (lVar3 == 0) {
    if (param_3 < uVar2) goto LAB_004350fd;
LAB_00435120:
    uVar4 = FUN_00570960(param_1,param_2,param_3,uVar2);
    uVar6 = param_3;
    lVar5 = param_2;
  }
  else {
    uVar6 = uVar2 - lVar3;
    lVar1 = param_1 + 0xe0 + lVar3;
    if (param_3 < uVar6) {
      thunk_FUN_00713a50(lVar1);
      *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + param_3;
      return 1;
    }
    lVar5 = param_2 + uVar6;
    thunk_FUN_00713a50(lVar1,param_2,uVar6);
    param_3 = (lVar3 + param_3) - uVar2;
    FUN_00570960(param_1,param_1 + 0xe0,uVar2,uVar2);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    param_2 = lVar5;
    uVar4 = param_3;
    uVar6 = param_3;
    if (uVar2 <= param_3) goto LAB_00435120;
  }
  param_3 = uVar4;
  if (param_3 == 0) {
    return 1;
  }
  param_2 = lVar5 + (uVar6 - param_3);
LAB_004350fd:
  thunk_FUN_00713a50(param_1 + 0xe0,param_2,param_3);
  *(ulong *)(param_1 + 0xd8) = param_3;
  return 1;
}

