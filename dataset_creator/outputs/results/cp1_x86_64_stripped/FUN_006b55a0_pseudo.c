
void FUN_006b55a0(undefined4 *param_1,long param_2,undefined4 param_3)

{
  if (param_2 == 1) {
    *param_1 = param_3;
    return;
  }
  if (param_2 != 0) {
    FUN_00771ff0(param_1,param_3,param_2,0x3fffffffffffffff);
    return;
  }
  return;
}

