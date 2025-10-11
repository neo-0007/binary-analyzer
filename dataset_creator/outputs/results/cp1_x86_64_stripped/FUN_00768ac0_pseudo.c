
undefined8 FUN_00768ac0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    FUN_007104f0();
    uVar2 = FUN_0076e4b0(uVar1);
    return uVar2;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  return 0xffffffff;
}

