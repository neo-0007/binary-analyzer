
/* WARNING: Removing unreachable block (ram,0x0076da48) */

ulong FUN_0076d9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  
  uVar1 = *(uint *)(in_FS_OFFSET + 0x18);
  if (uVar1 != 0) {
    uVar2 = FUN_007a2720();
    syscall();
    FUN_007a2790(uVar2,param_2,param_3);
    return 0;
  }
  syscall();
  if (0xfffffffffffff000 < (ulong)uVar1) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
    return 0xffffffffffffffff;
  }
  return (ulong)uVar1;
}

