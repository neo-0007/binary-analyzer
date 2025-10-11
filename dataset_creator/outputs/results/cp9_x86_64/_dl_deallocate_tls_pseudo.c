
void _dl_deallocate_tls(long param_1,char param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(long *)(lVar1 + -0x10) != 0) {
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      free(*(void **)(lVar1 + 8 + uVar2 * 0x10));
    } while (uVar2 < *(ulong *)(lVar1 + -0x10));
  }
  if (lVar1 != 0x9388b0) {
    free((void *)(lVar1 + -0x10));
  }
  if (param_2 == '\0') {
    return;
  }
  free(*(void **)(param_1 + 0x9c0));
  return;
}

