
int FUN_007c77b0(ulong *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  
  iVar2 = FUN_0076f0b0(-DAT_0093eb18 & *param_1,DAT_0093eb18,DAT_0093aed0);
  if (iVar2 == 0) {
    *param_1 = 0;
    DAT_0093eb08 = DAT_0093eb08 | 1;
  }
  else if (*(int *)(in_FS_OFFSET + -0x58) != 0) {
    return *(int *)(in_FS_OFFSET + -0x58);
  }
  LOCK();
  bVar4 = DAT_0094ae00 == 0;
  if (bVar4) {
    DAT_0094ae00 = 1;
  }
  UNLOCK();
  if (!bVar4) {
    FUN_00709590(&DAT_0094ae00);
  }
  puVar3 = DAT_0094ae40;
  if ((undefined8 **)DAT_0094ae40 != &DAT_0094ae40) {
    do {
      iVar2 = FUN_0076f0b0(puVar3[0x7c] + puVar3[0x7a],puVar3[0x7b] - puVar3[0x7c],7);
      if ((iVar2 != 0) && (iVar2 = *(int *)(in_FS_OFFSET + -0x58), iVar2 != 0)) goto LAB_007c785c;
      puVar3 = (undefined8 *)*puVar3;
    } while ((undefined8 **)puVar3 != &DAT_0094ae40);
  }
  puVar3 = DAT_0094ae20;
  if ((undefined8 **)DAT_0094ae20 != &DAT_0094ae20) {
    do {
      while (iVar2 = FUN_0076f0b0(puVar3[0x7c] + puVar3[0x7a],puVar3[0x7b] - puVar3[0x7c],7),
            iVar2 == 0) {
        puVar3 = (undefined8 *)*puVar3;
        if ((undefined8 **)puVar3 == &DAT_0094ae20) goto LAB_007c78d4;
      }
      iVar2 = *(int *)(in_FS_OFFSET + -0x58);
      if (iVar2 != 0) goto LAB_007c785c;
      puVar3 = (undefined8 *)*puVar3;
    } while ((undefined8 **)puVar3 != &DAT_0094ae20);
  }
LAB_007c78d4:
  iVar2 = 0;
LAB_007c785c:
  iVar1 = DAT_0094ae00;
  LOCK();
  DAT_0094ae00 = 0;
  UNLOCK();
  if (1 < iVar1) {
    FUN_00709660(&DAT_0094ae00);
  }
  return iVar2;
}

