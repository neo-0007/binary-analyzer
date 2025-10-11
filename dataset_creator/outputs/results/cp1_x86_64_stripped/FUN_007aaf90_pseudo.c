
/* WARNING: Removing unreachable block (ram,0x007aafb0) */

undefined1  [16] FUN_007aaf90(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  
  if (0x7fffffff < param_3) {
    param_3 = 0x7fffffff;
  }
  syscall();
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = 0xd9;
  return auVar1;
}

