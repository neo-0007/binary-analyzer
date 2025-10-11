
/* WARNING: Removing unreachable block (ram,0x00789b74) */
/* WARNING: Removing unreachable block (ram,0x00789b7c) */
/* WARNING: Removing unreachable block (ram,0x00789c24) */
/* WARNING: Removing unreachable block (ram,0x00789c30) */
/* WARNING: Removing unreachable block (ram,0x00789b82) */
/* WARNING: Removing unreachable block (ram,0x00789c3a) */

void FUN_00789ac0(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  
  LOCK();
  bVar4 = DAT_0094ae00 == 0;
  if (bVar4) {
    DAT_0094ae00 = 1;
  }
  UNLOCK();
  if (!bVar4) {
    FUN_00709590(&DAT_0094ae00);
  }
  puVar1 = *(undefined8 **)(in_FS_OFFSET + 0x10);
  puVar3 = DAT_0094ae40;
  if ((undefined8 **)DAT_0094ae40 != &DAT_0094ae40) {
    do {
      if ((puVar1 != puVar3 + -0x58) && (*(int *)((long)puVar3 + -0x2a4) != 0)) {
        LOCK();
        bVar4 = *(int *)((long)puVar3 + -0x2a4) == 1;
        if (bVar4) {
          *(int *)((long)puVar3 + -0x2a4) = 2;
        }
        UNLOCK();
        if (bVar4) {
          do {
            syscall();
          } while (*(int *)((long)puVar3 + -0x2a4) == 2);
        }
      }
      puVar3 = (undefined8 *)*puVar3;
    } while ((undefined8 **)puVar3 != &DAT_0094ae40);
  }
  puVar3 = DAT_0094ae30;
  if ((undefined8 **)DAT_0094ae30 != &DAT_0094ae30) {
    do {
      if ((puVar1 != puVar3 + -0x58) && (*(int *)((long)puVar3 + -0x2a4) != 0)) {
        LOCK();
        bVar4 = *(int *)((long)puVar3 + -0x2a4) == 1;
        if (bVar4) {
          *(int *)((long)puVar3 + -0x2a4) = 2;
        }
        UNLOCK();
        if (bVar4) {
          do {
            syscall();
          } while (*(int *)((long)puVar3 + -0x2a4) == 2);
        }
      }
      puVar3 = (undefined8 *)*puVar3;
    } while ((undefined8 **)puVar3 != &DAT_0094ae30);
  }
  iVar2 = DAT_0094ae00;
  LOCK();
  DAT_0094ae00 = 0;
  UNLOCK();
  if (iVar2 < 2) {
    return;
  }
  FUN_00709660(&DAT_0094ae00);
  return;
}

