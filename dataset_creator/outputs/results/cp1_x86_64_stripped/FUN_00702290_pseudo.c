
uint FUN_00702290(uint *param_1)

{
  long in_FS_OFFSET;
  
  if (((*param_1 & 0x2000) != 0) && (-1 < (int)param_1[0x1c])) {
    return param_1[0x1c];
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
  return 0xffffffff;
}

