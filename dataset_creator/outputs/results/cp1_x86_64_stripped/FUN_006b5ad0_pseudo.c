
void FUN_006b5ad0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_2 + 2;
  *param_1 = param_1 + 2;
  if (puVar2 != (undefined8 *)*param_2) {
    *param_1 = (undefined8 *)*param_2;
    *param_2 = puVar2;
    param_1[1] = param_2[1];
    param_2[1] = 0;
    param_1[2] = param_2[2];
    *(undefined4 *)(param_2 + 2) = 0;
    return;
  }
  FUN_00756660(param_1 + 2,puVar2,4);
  uVar1 = param_2[1];
  param_2[1] = 0;
  param_1[1] = uVar1;
  *(undefined4 *)*param_2 = 0;
  return;
}

