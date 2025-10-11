
void __gconv_release_step(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long in_FS_OFFSET;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (param_1[8] != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("step->__end_fct == NULL","gconv_db.c",0xe1,"__gconv_release_step");
    }
  }
  else {
    plVar1 = param_1 + 2;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      pcVar2 = (code *)(((ulong)param_1[8] >> 0x11 | param_1[8] << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
      if (pcVar2 != (code *)0x0) {
        _dl_mcount_wrapper_check(pcVar2);
        (*pcVar2)(param_1);
        lVar3 = *param_1;
      }
      __gconv_release_shlib(lVar3);
      *param_1 = 0;
    }
  }
  return;
}

