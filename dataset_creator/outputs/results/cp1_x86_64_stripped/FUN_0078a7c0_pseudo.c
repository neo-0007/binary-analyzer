
void FUN_0078a7c0(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  LOCK();
  bVar6 = DAT_0094ae00 == 0;
  if (bVar6) {
    DAT_0094ae00 = 1;
  }
  UNLOCK();
  if (!bVar6) {
    FUN_00709590(&DAT_0094ae00);
  }
  puVar5 = DAT_0094ae40;
  if ((undefined8 **)DAT_0094ae40 != &DAT_0094ae40) {
    do {
      lVar1 = *(long *)(param_1 + 0x438);
      lVar2 = *(long *)(param_1 + 0x440);
      uVar4 = thunk_FUN_00713820((-0x2c0 - *(long *)(param_1 + 0x458)) + (long)puVar5,
                                 *(undefined8 *)(param_1 + 0x430));
      thunk_FUN_00713720(uVar4,0,lVar2 - lVar1);
      puVar5 = (undefined8 *)*puVar5;
    } while ((undefined8 **)puVar5 != &DAT_0094ae40);
  }
  puVar5 = DAT_0094ae30;
  if ((undefined8 **)DAT_0094ae30 != &DAT_0094ae30) {
    do {
      lVar1 = *(long *)(param_1 + 0x438);
      lVar2 = *(long *)(param_1 + 0x440);
      uVar4 = thunk_FUN_00713820((-0x2c0 - *(long *)(param_1 + 0x458)) + (long)puVar5,
                                 *(undefined8 *)(param_1 + 0x430));
      thunk_FUN_00713720(uVar4,0,lVar2 - lVar1);
      puVar5 = (undefined8 *)*puVar5;
    } while ((undefined8 **)puVar5 != &DAT_0094ae30);
  }
  iVar3 = DAT_0094ae00;
  LOCK();
  DAT_0094ae00 = 0;
  UNLOCK();
  if (1 < iVar3) {
    FUN_00709660(&DAT_0094ae00);
    return;
  }
  return;
}

