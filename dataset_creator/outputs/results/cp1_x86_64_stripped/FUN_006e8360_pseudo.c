
undefined8 FUN_006e8360(int param_1,long param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  
  if (((param_1 - 1U < 0x40) && (param_2 != -1)) && (1 < param_1 - 0x20U)) {
    uVar1 = FUN_006e82d0();
    return uVar1;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  return 0xffffffffffffffff;
}

