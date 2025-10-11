
ulong FUN_0056d190(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_004b18d0();
  if (iVar1 != 0) {
    FUN_004b7c90(param_1,0);
    iVar1 = FUN_004b7ba0(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_004bcb60(param_1,1);
    if (iVar1 != 0) {
      iVar1 = FUN_004b7bb0(param_1);
      return (ulong)((param_4 >> 1) + -100 < iVar1);
    }
  }
  return 0xffffffff;
}

