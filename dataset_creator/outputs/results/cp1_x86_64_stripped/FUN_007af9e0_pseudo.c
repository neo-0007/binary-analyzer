
void FUN_007af9e0(long *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  LOCK();
  bVar3 = DAT_0094b3f8 == 0;
  if (bVar3) {
    DAT_0094b3f8 = 1;
  }
  UNLOCK();
  if (!bVar3) {
    FUN_00709590(&DAT_0094b3f8);
  }
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_007af000();
  }
  lVar2 = *param_1 + -1;
  if (lVar2 == 0) {
    FUN_007104f0(param_1);
  }
  else {
    *param_1 = lVar2;
  }
  iVar1 = DAT_0094b3f8;
  LOCK();
  DAT_0094b3f8 = 0;
  UNLOCK();
  if (1 < iVar1) {
    FUN_00709660(&DAT_0094b3f8);
    return;
  }
  return;
}

