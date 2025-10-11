
ulong pd_compare(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(*(int *)*param_2 < *(int *)*param_1);
  if (*(int *)*param_1 < *(int *)*param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

