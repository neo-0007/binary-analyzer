
bool FUN_00618310(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  lVar1 = FUN_00618290();
  *(long *)(param_1 + 0x40) = lVar1;
  return lVar1 != 0;
}

