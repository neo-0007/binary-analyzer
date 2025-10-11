
void _IO_list_unlock(void)

{
  bool bVar1;
  
  DAT_00939934 = DAT_00939934 + -1;
  if (DAT_00939934 == 0) {
    DAT_00939938 = 0;
    LOCK();
    UNLOCK();
    bVar1 = 1 < list_all_lock;
    list_all_lock = 0;
    if (bVar1) {
      list_all_lock = DAT_00939934;
      __lll_lock_wake_private(&list_all_lock);
      return;
    }
  }
  return;
}

