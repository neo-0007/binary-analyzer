
void FUN_0070fa60(void)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  byte bVar5;
  
  bVar5 = 0;
  piVar3 = *(int **)(in_FS_OFFSET + -0x20);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_0070c180();
    if (piVar3 != (int *)0x0) goto LAB_0070fa88;
    piVar3 = (int *)FUN_0070dad0(0x280,0);
    puVar2 = (undefined8 *)FUN_0070eae0(piVar3,0x280);
    if (puVar2 == (undefined8 *)0x0) {
      if (piVar3 == (int *)0x0) goto LAB_0070faaf;
      goto LAB_0070fb30;
    }
LAB_0070fb50:
    if (piVar3 == (int *)0x0) goto LAB_0070faaf;
  }
  else {
    LOCK();
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      *piVar3 = 1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      FUN_00709590(piVar3);
    }
LAB_0070fa88:
    puVar2 = (undefined8 *)FUN_0070eae0(piVar3,0x280);
    if (puVar2 == (undefined8 *)0x0) {
LAB_0070fb30:
      piVar3 = (int *)FUN_0070dfc0(piVar3,0x280);
      puVar2 = (undefined8 *)FUN_0070eae0(piVar3,0x280);
      goto LAB_0070fb50;
    }
  }
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = 0;
  UNLOCK();
  if (1 < iVar1) {
    FUN_00709660(piVar3);
  }
LAB_0070faaf:
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(in_FS_OFFSET + -0x30) = puVar2;
    *puVar2 = 0;
    puVar2[0x4f] = 0;
    uVar4 = (ulong)(((int)puVar2 - (int)(undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8)) +
                    0x280U >> 3);
    puVar2 = (undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar5 * -2 + 1;
    }
  }
  return;
}

