
void _nl_unload_domain(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if ((undefined1 *)param_1[0x17] != __gettext_germanic_plural) {
    __gettext_free_exp();
  }
  if (param_1[0xf] != 0) {
    uVar2 = 0;
    do {
      while( true ) {
        puVar1 = (undefined8 *)(param_1[0xe] + uVar2 * 0x18);
        free((void *)*puVar1);
        if ((long)puVar1[2] - 1U < 0xfffffffffffffffe) {
          free((void *)puVar1[2]);
        }
        if (puVar1[1] == -1) break;
        __gconv_close();
        uVar2 = uVar2 + 1;
        if ((ulong)param_1[0xf] <= uVar2) goto LAB_007c34de;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)param_1[0xf]);
  }
LAB_007c34de:
  free((void *)param_1[0xe]);
  free((void *)param_1[4]);
  if (*(int *)(param_1 + 1) == 0) {
    free((void *)*param_1);
    free(param_1);
    return;
  }
  munmap((void *)*param_1,param_1[2]);
  free(param_1);
  return;
}

