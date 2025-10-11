
int FUN_006d29c0(long param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  
  if (param_1 != -1) {
    iVar1 = FUN_006d3060();
    return -(uint)(iVar1 != 0);
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
  return -1;
}

