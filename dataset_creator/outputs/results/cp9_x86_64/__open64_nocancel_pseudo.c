
/* WARNING: Removing unreachable block (ram,0x00764cb8) */

undefined8
__open64_nocancel(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  
  syscall();
  lVar1 = *(long *)(in_FS_OFFSET + 0x28) - *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    return 0x101;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local(0xffffff9c,param_1,lVar1,param_4,param_2);
}

