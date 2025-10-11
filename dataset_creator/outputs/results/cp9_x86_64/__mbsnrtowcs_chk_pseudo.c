
void __mbsnrtowcs_chk(wchar_t *param_1,char **param_2,size_t param_3,ulong param_4,
                     mbstate_t *param_5,ulong param_6)

{
  if (param_4 <= param_6) {
    mbsnrtowcs(param_1,param_2,param_3,param_4,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __chk_fail();
}

