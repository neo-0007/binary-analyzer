
/* WARNING: Removing unreachable block (ram,0x0076d988) */
/* WARNING: Removing unreachable block (ram,0x0076d9a0) */

undefined4 FUN_0076d890(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
  }
  else {
    uVar2 = FUN_007a2720();
    syscall();
    FUN_007a2790(uVar2,param_1,param_2);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0x101;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

