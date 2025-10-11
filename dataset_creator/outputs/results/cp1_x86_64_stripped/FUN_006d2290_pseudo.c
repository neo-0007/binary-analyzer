
void FUN_006d2290(void)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_98 [24];
  uint local_80;
  long local_70;
  
  iVar1 = FUN_0076e4e0(0,1);
  if (((iVar1 == -1) && (*(int *)(in_FS_OFFSET + -0x58) == 9)) &&
     ((iVar1 = FUN_0076e620("/dev/full",0x20001,0), iVar1 != 0 ||
      (((iVar1 = FUN_0076d7f0(0,auStack_98), iVar1 != 0 || ((local_80 & 0xf000) != 0x2000)) ||
       (local_70 != 0x107)))))) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = FUN_0076e4e0(1,1);
  if (((iVar1 == -1) && (*(int *)(in_FS_OFFSET + -0x58) == 9)) &&
     (((iVar1 = FUN_0076e620("/dev/null",0x20000,0), iVar1 != 1 ||
       ((iVar1 = FUN_0076d7f0(1,auStack_98), iVar1 != 0 || ((local_80 & 0xf000) != 0x2000)))) ||
      (local_70 != 0x103)))) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = FUN_0076e4e0(2,1);
  if (((iVar1 == -1) && (*(int *)(in_FS_OFFSET + -0x58) == 9)) &&
     ((iVar1 = FUN_0076e620("/dev/null",0x20000,0), iVar1 != 2 ||
      (((iVar1 = FUN_0076d7f0(2,auStack_98), iVar1 != 0 || ((local_80 & 0xf000) != 0x2000)) ||
       (local_70 != 0x103)))))) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}

