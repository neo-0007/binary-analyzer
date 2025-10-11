
undefined8 FUN_006fdb20(undefined8 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  
  lVar3 = thunk_FUN_007129d0();
  if ((*param_2 & 0x8000) == 0) {
    lVar4 = *(long *)(in_FS_OFFSET + 0x10);
    piVar5 = *(int **)(param_2 + 0x22);
    if (*(long *)(piVar5 + 2) != lVar4) {
      LOCK();
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        *piVar5 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
        FUN_00709590();
      }
      piVar5 = *(int **)(param_2 + 0x22);
      *(long *)(piVar5 + 2) = lVar4;
    }
    piVar5[1] = piVar5[1] + 1;
  }
  if (param_2[0x30] == 0) {
    param_2[0x30] = 0xffffffff;
LAB_006fdb8d:
    lVar4 = *(long *)(param_2 + 0x36);
    if (0x827 < lVar4 - 0x93f160U) {
                    /* try { // try from 006fdc20 to 006fdc34 has its CatchHandler @ 006fdc3a */
      FUN_00703130();
    }
                    /* try { // try from 006fdbba to 006fdbbd has its CatchHandler @ 006fdc3a */
    lVar4 = (**(code **)(lVar4 + 0x38))(param_2,param_1,lVar3);
    uVar6 = 1;
    if (lVar3 == lVar4) {
      uVar2 = *param_2;
      goto joined_r0x006fdbf1;
    }
  }
  else if (param_2[0x30] == 0xffffffff) goto LAB_006fdb8d;
  uVar6 = 0xffffffff;
  uVar2 = *param_2;
joined_r0x006fdbf1:
  if ((uVar2 & 0x8000) == 0) {
    piVar5 = *(int **)(param_2 + 0x22);
    iVar1 = piVar5[1];
    piVar5[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
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
  }
  return uVar6;
}

