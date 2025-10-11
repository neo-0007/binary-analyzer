
/* WARNING: Removing unreachable block (ram,0x007c04a5) */
/* WARNING: Removing unreachable block (ram,0x007c0518) */
/* WARNING: Removing unreachable block (ram,0x007c0529) */
/* WARNING: Removing unreachable block (ram,0x007c0534) */
/* WARNING: Removing unreachable block (ram,0x007c057b) */
/* WARNING: Removing unreachable block (ram,0x007c059a) */
/* WARNING: Removing unreachable block (ram,0x007c0608) */
/* WARNING: Removing unreachable block (ram,0x007c05b8) */
/* WARNING: Removing unreachable block (ram,0x007c05bd) */
/* WARNING: Removing unreachable block (ram,0x007c053a) */
/* WARNING: Removing unreachable block (ram,0x007c05d6) */
/* WARNING: Removing unreachable block (ram,0x007c054a) */

undefined4 FUN_007c0440(int param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 3) {
    uVar2 = 0x16;
  }
  else {
    if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
      syscall();
    }
    else {
      uVar2 = FUN_007a2720();
      syscall();
      FUN_007a2790(uVar2,param_2,param_3);
    }
    uVar2 = 0xffffff1a;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

