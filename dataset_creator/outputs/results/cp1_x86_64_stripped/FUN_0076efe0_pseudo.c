
undefined1  [16]
FUN_0076efe0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  syscall();
  if (param_1 < 0xfffffffffffff001) {
    auVar1._8_8_ = param_4;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  *(int *)(in_FS_OFFSET + -0x58) = -(int)param_1;
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = 0xffffffffffffffff;
  return auVar2;
}

