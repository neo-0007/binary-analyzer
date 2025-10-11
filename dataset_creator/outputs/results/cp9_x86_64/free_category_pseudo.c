
void free_category(int param_1,undefined *param_2,undefined *param_3)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  __ptr = *(undefined8 **)(_nl_locale_file_list + lVar2 * 8);
  if (param_3 != param_2) {
    if ((&_nl_current_used)[lVar2] != 0) {
      (&_nl_global_locale)[lVar2] = param_3;
      if ((code *)(&_nl_category_postload)[lVar2] != (code *)0x0) {
        (*(code *)(&_nl_category_postload)[lVar2])();
      }
    }
    if ((&_nl_global_locale)[lVar2 + 0x10] != "C") {
      free((&_nl_global_locale)[lVar2 + 0x10]);
      (&_nl_global_locale)[lVar2 + 0x10] = "C";
    }
  }
  while (__ptr != (undefined8 *)0x0) {
    if (((undefined *)__ptr[2] != (undefined *)0x0) && (param_3 != (undefined *)__ptr[2])) {
      _nl_unload_locale();
    }
    puVar1 = (undefined8 *)__ptr[3];
    free((void *)*__ptr);
    free(__ptr);
    __ptr = puVar1;
  }
  return;
}

