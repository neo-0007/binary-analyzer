
void _nl_finddomain_subfreeres(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  __ptr = _nl_loaded_domains;
  if (_nl_loaded_domains != (undefined8 *)0x0) {
    do {
      if (__ptr[2] != 0) {
        _nl_unload_domain();
      }
      puVar1 = (undefined8 *)__ptr[3];
      free((void *)*__ptr);
      free(__ptr);
      __ptr = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}

