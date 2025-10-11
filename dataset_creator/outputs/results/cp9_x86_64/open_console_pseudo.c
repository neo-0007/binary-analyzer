
int open_console(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  iVar2 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x30));
  if (iVar2 != 0) {
    is_a_tty = 1;
    tty_in = fopen("/dev/tty","r");
    if (tty_in == (FILE *)0x0) {
      tty_in = (FILE *)stdin;
    }
    tty_out = fopen("/dev/tty","w");
    if (tty_out == (FILE *)0x0) {
      tty_out = (FILE *)stderr;
    }
    iVar2 = 1;
    iVar3 = fileno(tty_in);
    iVar3 = tcgetattr(iVar3,(termios *)tty_orig);
    if (iVar3 == -1) {
      puVar4 = (uint *)__errno_location();
      uVar1 = *puVar4;
      if ((uVar1 == 0x19) || ((uVar1 < 0x17 && ((0x480062UL >> ((ulong)uVar1 & 0x3f) & 1) != 0)))) {
        is_a_tty = 0;
        return 1;
      }
      ERR_new();
      iVar2 = 0;
      ERR_set_debug("../crypto/ui/ui_openssl.c",0x1cb,"open_console");
      ERR_set_error(0x28,0x6c,"errno=%d",*puVar4);
    }
  }
  return iVar2;
}

