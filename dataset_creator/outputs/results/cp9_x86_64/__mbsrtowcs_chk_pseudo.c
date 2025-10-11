
void __mbsrtowcs_chk(wchar_t *param_1,char **param_2,ulong param_3,mbstate_t *param_4,ulong param_5)

{
  if (param_3 <= param_5) {
    mbsrtowcs(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __chk_fail();
}

