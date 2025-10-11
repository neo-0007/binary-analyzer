
undefined8 FUN_0059bd20(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_0059b9e0(param_1,0xffffffff,0);
  if ((iVar1 == 1) && ((*(byte *)(param_1 + 0xe9) & 4) != 0)) {
    return *(undefined8 *)(param_1 + 0xe0);
  }
  return 0xffffffffffffffff;
}

