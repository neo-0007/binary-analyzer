
uint FUN_004b7d40(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 1)) {
    uVar1 = (uint)*(undefined8 *)*param_1 & 1;
  }
  return uVar1;
}

