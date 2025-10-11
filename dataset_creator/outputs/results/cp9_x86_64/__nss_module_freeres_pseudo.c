
void __nss_module_freeres(void)

{
  int *piVar1;
  int *__ptr;
  
  __ptr = nss_module_list;
  if (nss_module_list != (int *)0x0) {
    do {
      if ((*__ptr == 1) && (*(long *)(__ptr + 0x82) != 0)) {
        __libc_dlclose();
      }
      piVar1 = *(int **)(__ptr + 0x84);
      free(__ptr);
      __ptr = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  nss_module_list = (int *)0x0;
  return;
}

