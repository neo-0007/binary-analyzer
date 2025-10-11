
/* WARNING: Removing unreachable block (ram,0x0076dc90) */
/* WARNING: Removing unreachable block (ram,0x0076dca8) */

undefined4 FUN_0076dc30(void)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
    return 3;
  }
  uVar1 = FUN_007a2720();
  syscall();
  FUN_007a2790(uVar1);
  return 3;
}

