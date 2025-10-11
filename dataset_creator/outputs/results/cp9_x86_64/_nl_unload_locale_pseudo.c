
void _nl_unload_locale(undefined8 *param_1)

{
  int iVar1;
  
  if ((code *)param_1[4] != (code *)0x0) {
    (*(code *)param_1[4])();
  }
  iVar1 = *(int *)(param_1 + 3);
  if (iVar1 == 0) {
    free((void *)param_1[1]);
    iVar1 = *(int *)(param_1 + 3);
  }
  else if (iVar1 == 1) {
    munmap((void *)param_1[1],param_1[2]);
    iVar1 = *(int *)(param_1 + 3);
  }
  if (iVar1 != 2) {
    free((void *)*param_1);
  }
  free(param_1);
  return;
}

