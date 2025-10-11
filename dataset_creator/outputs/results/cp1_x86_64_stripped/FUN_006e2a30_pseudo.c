
ulong FUN_006e2a30(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2[4] == 0) {
    puVar2 = (undefined8 *)param_2[7];
  }
  else {
    puVar2 = param_2 + 7;
  }
  puVar3 = param_1 + 7;
  if (param_1[4] == 0) {
    puVar3 = (undefined8 *)param_1[7];
  }
  uVar1 = thunk_FUN_00712780(puVar3,puVar2);
  if ((int)uVar1 == 0) {
    uVar1 = thunk_FUN_00712780(*param_1,*param_2);
    if ((int)uVar1 == 0) {
      uVar1 = thunk_FUN_00712780(param_1[2],param_2[2]);
      if ((int)uVar1 == 0) {
        uVar1 = (ulong)(uint)(*(int *)(param_1 + 1) - *(int *)(param_2 + 1));
      }
    }
  }
  return uVar1;
}

