
ulong FUN_0059eb90(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return (ulong)(param_1 != 0);
  }
  if (param_1 != 0) {
    iVar1 = FUN_0049f320(param_1 + 8,param_2 + 8);
    if (iVar1 == 0) {
      uVar2 = FUN_0059eab0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
      return uVar2;
    }
    if (-1 < iVar1) {
      return 1;
    }
  }
  return 0xffffffff;
}

