
undefined8 FUN_00452aa0(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 200);
  if (param_3 != 0) {
    lVar2 = *(long *)(param_1 + 0xd8);
    lVar4 = param_2;
    if (lVar2 != 0) {
      uVar5 = lVar3 - lVar2;
      lVar1 = param_1 + 0xe0 + lVar2;
      if (param_3 < uVar5) {
        thunk_FUN_00713a50(lVar1);
        *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + param_3;
        return 1;
      }
      lVar4 = param_2 + uVar5;
      thunk_FUN_00713a50(lVar1,param_2,uVar5);
      (**(code **)(param_1 + 400))(param_1,param_1 + 0xe0,lVar3);
      param_3 = (param_3 + lVar2) - lVar3;
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    lVar3 = (**(code **)(param_1 + 400))(param_1,lVar4,param_3);
    if (lVar3 != 0) {
      thunk_FUN_00713a50(param_1 + 0xe0,lVar4 + (param_3 - lVar3),lVar3);
      *(long *)(param_1 + 0xd8) = lVar3;
    }
  }
  return 1;
}

