
undefined8 FUN_00760800(undefined8 param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if (DAT_0093ae20 != (code *)0x0) {
    uVar2 = (*DAT_0093ae20)(param_1,param_2);
    uVar1 = (uint)uVar2;
    if (0xfffff000 < uVar1) {
      if (uVar1 == 0xffffffda) goto LAB_00760858;
      *(uint *)(in_FS_OFFSET + -0x58) = -uVar1;
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
LAB_00760858:
  syscall();
  return 0x60;
}

