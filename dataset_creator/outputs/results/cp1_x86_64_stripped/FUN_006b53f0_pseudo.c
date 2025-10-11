
void FUN_006b53f0(undefined8 *param_1,ulong param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  ulong local_20 [2];
  
  local_20[0] = param_2;
  if (param_2 < 4) {
    puVar1 = (undefined4 *)*param_1;
  }
  else {
    puVar1 = (undefined4 *)FUN_006b5350(param_1,local_20,0);
    *param_1 = puVar1;
    param_1[2] = local_20[0];
  }
  if (local_20[0] != 0) {
    if (local_20[0] == 1) {
      *puVar1 = param_3;
    }
    else {
      FUN_00771ff0(puVar1,param_3,local_20[0],0x3fffffffffffffff);
      puVar1 = (undefined4 *)*param_1;
    }
  }
  param_1[1] = local_20[0];
  puVar1[local_20[0]] = 0;
  return;
}

