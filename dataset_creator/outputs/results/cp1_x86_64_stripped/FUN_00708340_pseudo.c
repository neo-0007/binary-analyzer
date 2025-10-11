
void FUN_00708340(void)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x10);
  lVar2 = DAT_00946938;
  if (DAT_00946938 != lVar1) {
    LOCK();
    bVar3 = DAT_00946930 == 0;
    if (bVar3) {
      DAT_00946930 = 1;
    }
    UNLOCK();
    lVar2 = lVar1;
    if (!bVar3) {
      FUN_00709590(&DAT_00946930);
    }
  }
  DAT_00946938 = lVar2;
  DAT_00946934 = DAT_00946934 + 1;
  return;
}

