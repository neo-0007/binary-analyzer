
undefined8 FUN_00790a10(long param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    return 0;
  }
  iVar1 = FUN_00790ae0(0,0,param_1 + 0x48);
  *(uint *)(param_1 + 0x40) = (uint)(iVar1 == 0);
  return 0;
}

