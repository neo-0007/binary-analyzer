
ulong FUN_00532100(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (param_2 != 6) {
    return 0xffffffff;
  }
  iVar1 = FUN_00429830(param_4,8);
  if (0 < iVar1) {
    FUN_004d1de0(param_4);
  }
  return (ulong)(0 < iVar1);
}

