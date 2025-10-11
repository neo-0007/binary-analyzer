
undefined8 FUN_0076d7f0(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  
  if (-1 < param_1) {
    uVar1 = FUN_0076d850(param_1,&DAT_0083e5c2,param_2,0x1000);
    return uVar1;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
  return 0xffffffff;
}

