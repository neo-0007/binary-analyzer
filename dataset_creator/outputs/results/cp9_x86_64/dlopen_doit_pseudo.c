
undefined1  [16] dlopen_doit(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_10;
  
  uVar3 = environ;
  if ((*(uint *)(param_1 + 1) & 0xbfffeef0) == 0) {
    puVar4 = (undefined1 *)*param_1;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_008343a2;
    }
    uVar2 = _dl_open(puVar4,*(uint *)(param_1 + 1) | 0x80000000,param_1[3],0,__libc_argc,__libc_argv
                    );
    param_1[2] = uVar2;
    auVar1._8_8_ = uStack_10;
    auVar1._0_8_ = uVar3;
    return auVar1;
  }
  uVar3 = dcgettext(&_libc_intl_domainname,"invalid mode parameter",5);
                    /* WARNING: Subroutine does not return */
  _dl_signal_error(0,0,0,uVar3);
}

