
/* WARNING: Removing unreachable block (ram,0x00767fe8) */
/* WARNING: Removing unreachable block (ram,0x00767fe0) */

undefined8 FUN_00767f90(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  if (DAT_0093ae28 == (code *)0x0) {
    syscall();
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xffffff1c;
    return 0xffffffff;
  }
  iVar1 = (*DAT_0093ae28)();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    *(int *)(in_FS_OFFSET + -0x58) = -iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

