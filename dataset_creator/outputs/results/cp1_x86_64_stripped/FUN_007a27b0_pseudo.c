
void FUN_007a27b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = *(undefined8 *)(in_FS_OFFSET + 0x2f8);
  *(undefined8 **)(in_FS_OFFSET + 0x2f8) = param_1;
  return;
}

