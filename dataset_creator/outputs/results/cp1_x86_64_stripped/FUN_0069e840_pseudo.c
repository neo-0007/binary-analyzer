
void FUN_0069e840(undefined8 *param_1,ulong param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong local_20;
  
  if (param_1 + 2 == (undefined8 *)*param_1) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = param_1[2];
  }
  if (param_2 <= uVar2) {
    return;
  }
  local_20 = param_2;
  puVar1 = (undefined1 *)FUN_0069de90(param_1,&local_20);
  puVar3 = (undefined8 *)*param_1;
  if (param_1[1] == 0) {
    *puVar1 = *(undefined1 *)puVar3;
    puVar3 = (undefined8 *)*param_1;
  }
  else if (param_1[1] != -1) {
    thunk_FUN_00713a50(puVar1,puVar3);
    puVar3 = (undefined8 *)*param_1;
  }
  if (param_1 + 2 != puVar3) {
    thunk_FUN_007104f0();
  }
  *param_1 = puVar1;
  param_1[2] = local_20;
  return;
}

