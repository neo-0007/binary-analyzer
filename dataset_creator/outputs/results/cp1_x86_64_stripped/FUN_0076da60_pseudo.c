
/* WARNING: Removing unreachable block (ram,0x0076dad0) */
/* WARNING: Removing unreachable block (ram,0x0076dae8) */

undefined8 FUN_0076da60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
    return 1;
  }
  uVar1 = FUN_007a2720();
  syscall();
  FUN_007a2790(uVar1,param_2,param_3);
  return 1;
}

