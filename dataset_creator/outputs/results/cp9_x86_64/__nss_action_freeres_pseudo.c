
void __nss_action_freeres(void)

{
  long *plVar1;
  long *__ptr;
  
  __ptr = nss_actions;
  if (nss_actions != (long *)0x0) {
    do {
      plVar1 = (long *)*__ptr;
      free(__ptr);
      __ptr = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  nss_actions = (long *)0x0;
  return;
}

