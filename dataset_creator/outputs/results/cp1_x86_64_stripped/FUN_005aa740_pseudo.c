
void FUN_005aa740(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x50) = 1;
  uVar1 = FUN_005abad0();
  FUN_005b5b10(uVar1,param_1 + 8,param_1 + 0x58,param_1 + 0x68,param_1,param_2);
  return;
}

