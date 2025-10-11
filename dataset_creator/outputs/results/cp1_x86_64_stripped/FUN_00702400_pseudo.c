
int FUN_00702400(uint *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long in_FS_OFFSET;
  
  if ((*param_1 & 0x8000) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar3 = *(int **)(param_1 + 0x22);
    if (*(long *)(piVar3 + 2) != lVar2) {
      LOCK();
      iVar1 = *piVar3;
      if (iVar1 == 0) {
        *piVar3 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
                    /* try { // try from 007024c0 to 007024c4 has its CatchHandler @ 007024ca */
        FUN_00709590();
      }
      piVar3 = *(int **)(param_1 + 0x22);
      *(long *)(piVar3 + 2) = lVar2;
    }
    piVar3[1] = piVar3[1] + 1;
  }
                    /* try { // try from 0070245e to 00702462 has its CatchHandler @ 007024ca */
  lVar2 = FUN_006fe4a0(param_1,param_2,param_3,3);
  if ((*param_1 & 0x8000) == 0) {
    piVar3 = *(int **)(param_1 + 0x22);
    iVar1 = piVar3[1];
    piVar3[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar3[2] = 0;
      piVar3[3] = 0;
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = 0;
      UNLOCK();
      if (1 < iVar1) {
        FUN_00709660();
      }
    }
  }
  return -(uint)(lVar2 == -1);
}

