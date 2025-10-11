
void FUN_0040a400(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_004091a0(*(long *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x60),0,param_2);
    return;
  }
  uVar1 = FUN_0040a3d0();
  FUN_004091a0(0,0,uVar1,param_2);
  return;
}

