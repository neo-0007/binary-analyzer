
undefined1 * __memset_chk_erms(undefined1 *param_1,undefined1 param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  
  if (param_4 < param_3) {
                    /* WARNING: Subroutine does not return */
    __fortify_fail("buffer overflow detected");
  }
  puVar1 = param_1;
  if (param_3 != 0) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *puVar1 = param_2;
      puVar1 = puVar1 + 1;
    }
    return param_1;
  }
  return param_1;
}

