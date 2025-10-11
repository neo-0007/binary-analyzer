
void FUN_004365a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1[4] != 0) {
    return;
  }
  uVar1 = FUN_00425400(*param_1);
  param_1[4] = uVar1;
  return;
}

