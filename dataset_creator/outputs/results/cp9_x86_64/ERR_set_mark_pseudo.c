
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ERR_set_mark(void)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = ossl_err_get_state_int();
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x380);
    bVar4 = *(int *)(lVar3 + 900) != iVar2;
    if (bVar4) {
      piVar1 = (int *)(lVar3 + 0x40 + (long)iVar2 * 4);
      *piVar1 = *piVar1 + 1;
    }
    return (uint)bVar4;
  }
  return 0;
}

