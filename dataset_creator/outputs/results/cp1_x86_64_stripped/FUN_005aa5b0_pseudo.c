
void FUN_005aa5b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x80) = 1;
  uVar1 = FUN_005b0050();
  FUN_005b5b10(uVar1,param_1 + 0x20,param_1 + 0x88,param_1 + 0x98,param_1,param_2);
  return;
}

