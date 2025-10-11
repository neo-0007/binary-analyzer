
undefined1 * __memmove_chk_erms(undefined1 *param_1,undefined1 *param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_4 < param_3) {
                    /* WARNING: Subroutine does not return */
    __fortify_fail("buffer overflow detected");
  }
  if (param_3 != 0) {
    puVar1 = param_1;
    if (param_2 <= param_1) {
      if (param_1 == param_2) {
        return param_1;
      }
      if (param_1 < param_2 + param_3) {
        puVar1 = param_2 + (param_3 - 1);
        puVar2 = param_1 + (param_3 - 1);
        for (; param_3 != 0; param_3 = param_3 - 1) {
          *puVar2 = *puVar1;
          puVar1 = puVar1 + -1;
          puVar2 = puVar2 + -1;
        }
        return param_1;
      }
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *puVar1 = *param_2;
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  return param_1;
}

