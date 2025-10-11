
void __libc_check_standard_fds(void)

{
  int iVar1;
  long in_FS_OFFSET;
  stat sStack_98;
  
  iVar1 = __fcntl64_nocancel(0,1);
  if (((iVar1 == -1) && (*(int *)(in_FS_OFFSET + -0x58) == 9)) &&
     ((iVar1 = __open64_nocancel("/dev/full",0x20001,0), iVar1 != 0 ||
      (((iVar1 = fstat(0,&sStack_98), iVar1 != 0 || ((sStack_98.st_mode & 0xf000) != 0x2000)) ||
       (sStack_98.st_rdev != 0x107)))))) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = __fcntl64_nocancel(1,1);
  if (((iVar1 == -1) && (*(int *)(in_FS_OFFSET + -0x58) == 9)) &&
     (((iVar1 = __open64_nocancel("/dev/null",0x20000,0), iVar1 != 1 ||
       ((iVar1 = fstat(1,&sStack_98), iVar1 != 0 || ((sStack_98.st_mode & 0xf000) != 0x2000)))) ||
      (sStack_98.st_rdev != 0x103)))) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = __fcntl64_nocancel(2,1);
  if (((iVar1 == -1) && (*(int *)(in_FS_OFFSET + -0x58) == 9)) &&
     ((iVar1 = __open64_nocancel("/dev/null",0x20000,0), iVar1 != 2 ||
      (((iVar1 = fstat(2,&sStack_98), iVar1 != 0 || ((sStack_98.st_mode & 0xf000) != 0x2000)) ||
       (sStack_98.st_rdev != 0x103)))))) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}

