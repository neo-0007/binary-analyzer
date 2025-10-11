
void __wmemset_chk(wchar_t *param_1,wchar_t param_2,ulong param_3,ulong param_4)

{
  if (param_3 <= param_4) {
    wmemset(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __fortify_fail("buffer overflow detected");
}

