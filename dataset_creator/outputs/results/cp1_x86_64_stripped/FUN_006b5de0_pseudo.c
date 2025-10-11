
void FUN_006b5de0(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong local_20;
  
  if (param_1 + 2 == (undefined8 *)*param_1) {
    uVar3 = 3;
  }
  else {
    uVar3 = param_1[2];
  }
  if (param_2 <= uVar3) {
    return;
  }
  local_20 = param_2;
  puVar2 = (undefined4 *)FUN_006b5350(param_1,&local_20);
  puVar4 = (undefined8 *)*param_1;
  lVar1 = param_1[1] + 1;
  if (param_1[1] == 0) {
    *puVar2 = *(undefined4 *)puVar4;
  }
  else if (lVar1 != 0) {
    FUN_00771ea0(puVar2,puVar4,lVar1,0x3fffffffffffffff);
    puVar4 = (undefined8 *)*param_1;
  }
  if (param_1 + 2 != puVar4) {
    thunk_FUN_007104f0();
  }
  *param_1 = puVar2;
  param_1[2] = local_20;
  return;
}

