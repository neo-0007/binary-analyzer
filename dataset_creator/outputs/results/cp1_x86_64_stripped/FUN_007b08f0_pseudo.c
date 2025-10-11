
void FUN_007b08f0(uint *param_1,long param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  
  if (-1 < param_2) {
    iVar1 = FUN_00702a90(param_1,param_2,0);
    if (-1 < iVar1) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
      return;
    }
  }
  *param_1 = *param_1 | 0x20;
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x1d;
  return;
}

