
void FUN_00761f50(void)

{
  int iVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = DAT_0094aac0 == 0;
  if (bVar2) {
    DAT_0094aac0 = 1;
  }
  UNLOCK();
  if (!bVar2) {
    FUN_00709590(&DAT_0094aac0);
  }
  FUN_00761570(1);
  iVar1 = DAT_0094aac0;
  if (DAT_0094aac8 == 0) {
    PTR_DAT_0093ea00 = DAT_0094aa60;
    PTR_DAT_0093ea08 = DAT_0094aa90;
  }
  LOCK();
  DAT_0094aac0 = 0;
  UNLOCK();
  if (1 < iVar1) {
    FUN_00709660(&DAT_0094aac0);
    return;
  }
  return;
}

