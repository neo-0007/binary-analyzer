
undefined8 FUN_007a1e60(uint *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  long in_FS_OFFSET;
  
  if ((*param_1 & 0x8000) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar4 = *(int **)(param_1 + 0x22);
    if (*(long *)(piVar4 + 2) != lVar2) {
      LOCK();
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        *piVar4 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
                    /* try { // try from 007a1f88 to 007a1f8c has its CatchHandler @ 007a1f92 */
        FUN_00709590();
      }
      piVar4 = *(int **)(param_1 + 0x22);
      *(long *)(piVar4 + 2) = lVar2;
    }
    piVar4[1] = piVar4[1] + 1;
  }
  if ((int)param_1[0x30] < 1) {
    if (*(long *)(param_1 + 0x12) != 0) {
      FUN_00706520(param_1);
    }
  }
  else if (*(long *)(*(long *)(param_1 + 0x28) + 0x40) != 0) {
    FUN_006ffe00(param_1);
  }
  lVar2 = *(long *)(param_1 + 0x36);
  if (0x827 < lVar2 - 0x93f160U) {
    FUN_00703130();
  }
                    /* try { // try from 007a1f07 to 007a1f64 has its CatchHandler @ 007a1f92 */
  uVar3 = (**(code **)(lVar2 + 0x48))(param_1,param_2,0,param_3);
  if ((*param_1 & 0x8000) == 0) {
    piVar4 = *(int **)(param_1 + 0x22);
    iVar1 = piVar4[1];
    piVar4[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar4[2] = 0;
      piVar4[3] = 0;
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = 0;
      UNLOCK();
      if (1 < iVar1) {
        FUN_00709660();
      }
    }
  }
  return uVar3;
}

