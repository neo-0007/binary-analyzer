
void _IO_list_lock(void)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x10);
  lVar2 = DAT_00939938;
  if (DAT_00939938 != lVar1) {
    LOCK();
    bVar3 = list_all_lock == 0;
    if (bVar3) {
      list_all_lock = 1;
    }
    UNLOCK();
    lVar2 = lVar1;
    if (!bVar3) {
      __lll_lock_wait_private(&list_all_lock);
    }
  }
  DAT_00939938 = lVar2;
  DAT_00939934 = DAT_00939934 + 1;
  return;
}

