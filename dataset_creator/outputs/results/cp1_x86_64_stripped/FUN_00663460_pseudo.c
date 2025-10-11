
void FUN_00663460(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = FUN_006fdc50(param_2,1,param_3,*(undefined8 *)(param_1 + 0x40));
  uVar2 = 0xffffffff;
  if (0 < lVar1) {
    uVar2 = (uint)*(byte *)(param_2 + -1 + lVar1);
  }
  *(uint *)(param_1 + 0x48) = uVar2;
  return;
}

