
undefined8 FUN_0066f7f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  FUN_0066f6e0(param_1,0);
  return uVar1;
}

