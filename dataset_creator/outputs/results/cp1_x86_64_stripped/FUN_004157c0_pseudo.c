
undefined8 FUN_004157c0(undefined4 *param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0xe) != 0) {
    uVar1 = FUN_00415600();
    return uVar1;
  }
  uVar1 = FUN_00412bc0(param_1,0xffffffff,*param_1,0xf,*(undefined8 *)(param_1 + 0x12),
                       *(undefined8 *)(param_1 + 0x10));
  return uVar1;
}

