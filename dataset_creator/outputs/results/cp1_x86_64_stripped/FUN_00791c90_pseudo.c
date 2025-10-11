
undefined8 FUN_00791c90(void)

{
  int iVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = DAT_0094b128 == 0;
  if (bVar2) {
    DAT_0094b128 = 1;
  }
  UNLOCK();
  if (!bVar2) {
    FUN_00709590(&DAT_0094b128);
  }
  if ((DAT_0094b118 == DAT_0094ab80) && (DAT_0094ab80 != 0)) {
    FUN_007104f0();
    DAT_0094b118 = 0;
  }
  iVar1 = DAT_0094b128;
  DAT_0094ab80 = 0;
  LOCK();
  DAT_0094b128 = 0;
  UNLOCK();
  if (1 < iVar1) {
    FUN_00709660(&DAT_0094b128);
    return 0;
  }
  return 0;
}

