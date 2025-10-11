
void FUN_0040ab70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_004091a0(*(long *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x58),0,param_2);
    return;
  }
  uVar1 = FUN_0040ab30();
  FUN_004091a0(0,0,uVar1,param_2);
  return;
}

