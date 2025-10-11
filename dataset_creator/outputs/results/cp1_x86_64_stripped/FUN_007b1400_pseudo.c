
void FUN_007b1400(long *param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar1 = FUN_007b8e00(param_1,"__libc_early_init",0x69682ac,"GLIBC_PRIVATE",0x963cf85);
  if (lVar1 != 0) {
    if (*(short *)(lVar1 + 6) == -0xf) {
      lVar2 = 0;
    }
    else {
      lVar2 = *param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x007b144f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(lVar2 + *(long *)(lVar1 + 8)))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006e2220("sym != NULL","dl-call-libc-early-init.c",0x25,"_dl_call_libc_early_init");
}

