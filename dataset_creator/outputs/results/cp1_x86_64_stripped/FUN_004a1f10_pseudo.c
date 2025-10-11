
undefined8 FUN_004a1f10(undefined8 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)*param_1;
  *puVar1 = 0;
  *param_1 = puVar1 + 1;
  return 2;
}

