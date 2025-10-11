
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0078a940(void)

{
  long lVar1;
  long *in_FS_OFFSET;
  int local_c;
  
  lVar1 = in_FS_OFFSET[2];
  *(long *)(lVar1 + 0x2c0) = DAT_0094ae30;
  *(long **)(lVar1 + 0x2c8) = &DAT_0094ae30;
  *(long *)(DAT_0094ae30 + 8) = lVar1 + 0x2c0;
  syscall();
  DAT_0094ae30 = lVar1 + 0x2c0;
  *(undefined4 *)(lVar1 + 0x2d0) = 0xda;
  in_FS_OFFSET[0xa2] = lVar1 + 0x310;
  *(undefined1 *)((long)in_FS_OFFSET + 0x612) = 1;
  *(undefined1 *)((long)in_FS_OFFSET + 0x611) = DAT_0094adb0;
  *(undefined8 *)(lVar1 + 0x2e8) = 0xffffffffffffffe0;
  *(long *)(lVar1 + 0x2d8) = lVar1 + 0x2e0;
  *(long *)(lVar1 + 0x2e0) = lVar1 + 0x2e0;
  syscall();
  FUN_0078d220(5,&local_c,0);
  if (local_c == 0) {
    *(undefined4 *)((long)in_FS_OFFSET + 0x9a4) = 0xfffffffe;
  }
  else {
    syscall();
    _DAT_00939e88 = 0x20;
  }
  _DAT_00939e80 = (lVar1 + 0x9a0) - *in_FS_OFFSET;
  in_FS_OFFSET[0xd3] = DAT_0093ae00;
  *(undefined1 *)((long)in_FS_OFFSET + 0x971) = 0;
  *(undefined1 *)((long)in_FS_OFFSET + 0x972) = 0;
  return;
}

