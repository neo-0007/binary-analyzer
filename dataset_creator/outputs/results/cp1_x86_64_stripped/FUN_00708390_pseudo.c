
void FUN_00708390(void)

{
  bool bVar1;
  
  DAT_00946934 = DAT_00946934 + -1;
  if (DAT_00946934 == 0) {
    DAT_00946938 = 0;
    LOCK();
    UNLOCK();
    bVar1 = 1 < DAT_00946930;
    DAT_00946930 = 0;
    if (bVar1) {
      DAT_00946930 = DAT_00946934;
      FUN_00709660(&DAT_00946930);
      return;
    }
  }
  return;
}

