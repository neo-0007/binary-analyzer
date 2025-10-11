
undefined1  [16] dlmopen_doit(long *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uStack_10;
  
  uVar2 = environ;
  if (*param_1 == 0) {
    puVar4 = (undefined1 *)param_1[1];
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_008343a2;
    }
    lVar3 = _dl_open(puVar4,*(uint *)(param_1 + 2) | 0x80000000,param_1[4],0,__libc_argc,__libc_argv
                    );
    param_1[3] = lVar3;
    auVar1._8_8_ = uStack_10;
    auVar1._0_8_ = uVar2;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  _dl_signal_error(0x16,0,0,"invalid namespace");
}

