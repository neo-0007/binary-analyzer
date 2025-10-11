
/* WARNING: Removing unreachable block (ram,0x0076e6b8) */

undefined8 FUN_0076e620(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  
  syscall();
  lVar1 = *(long *)(in_FS_OFFSET + 0x28) - *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    return 0x101;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60(0xffffff9c,param_1,lVar1,param_4,param_2);
}

