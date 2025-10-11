
uint FUN_007020f0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  uVar4 = *param_1;
  if (((param_1[0x1d] & 0x80) == 0) || ((uVar4 & 0x8000) != 0)) {
    return uVar4 >> 4 & 1;
  }
  piVar5 = *(int **)(param_1 + 0x22);
  lVar3 = *(long *)(in_FS_OFFSET + 0x10);
  if (lVar3 == *(long *)(piVar5 + 2)) {
    iVar1 = piVar5[1];
    uVar4 = uVar4 >> 4 & 1;
  }
  else {
    LOCK();
    iVar1 = *piVar5;
    if (iVar1 == 0) {
      *piVar5 = 1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      FUN_00709590();
    }
    uVar2 = *param_1;
    piVar5 = *(int **)(param_1 + 0x22);
    *(long *)(piVar5 + 2) = lVar3;
    iVar1 = piVar5[1];
    uVar4 = uVar2 >> 4 & 1;
    if ((uVar2 & 0x8000) != 0) {
      piVar5[1] = iVar1 + 1;
      return uVar4;
    }
  }
  if (iVar1 == 0) {
    piVar5[2] = 0;
    piVar5[3] = 0;
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = 0;
    UNLOCK();
    if (1 < iVar1) {
      FUN_00709660();
    }
  }
  return uVar4;
}

