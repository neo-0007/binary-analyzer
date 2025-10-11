
void flush_cleanup(void)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  if ((run_fp != (uint *)0x0) && ((*run_fp & 0x8000) == 0)) {
    piVar2 = *(int **)(run_fp + 0x22);
    iVar1 = piVar2[1];
    piVar2[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar2[2] = 0;
      piVar2[3] = 0;
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = 0;
      UNLOCK();
      if (1 < iVar1) {
        __lll_lock_wake_private();
      }
    }
  }
  DAT_00939934 = DAT_00939934 + -1;
  if (DAT_00939934 == 0) {
    DAT_00939938 = 0;
    LOCK();
    UNLOCK();
    bVar3 = 1 < list_all_lock;
    list_all_lock = 0;
    if (bVar3) {
      list_all_lock = DAT_00939934;
      __lll_lock_wake_private(&list_all_lock);
      return;
    }
  }
  return;
}

