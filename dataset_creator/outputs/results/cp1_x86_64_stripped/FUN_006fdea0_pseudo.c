
ulong FUN_006fdea0(undefined8 param_1,ulong param_2,ulong param_3,uint *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  
  lVar6 = param_2 * param_3;
  if (lVar6 == 0) {
    return 0;
  }
  if ((*param_4 & 0x8000) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar4 = *(int **)(param_4 + 0x22);
    if (*(long *)(piVar4 + 2) != lVar2) {
      LOCK();
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        *piVar4 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
        FUN_00709590();
      }
      piVar4 = *(int **)(param_4 + 0x22);
      *(long *)(piVar4 + 2) = lVar2;
    }
    piVar4[1] = piVar4[1] + 1;
  }
  if (param_4[0x30] == 0) {
    param_4[0x30] = 0xffffffff;
LAB_006fdf23:
    lVar2 = *(long *)(param_4 + 0x36);
    if (0x827 < lVar2 - 0x93f160U) {
                    /* try { // try from 006fe000 to 006fe014 has its CatchHandler @ 006fe01a */
      FUN_00703130();
    }
                    /* try { // try from 006fdf54 to 006fdf57 has its CatchHandler @ 006fe01a */
    uVar3 = (**(code **)(lVar2 + 0x38))(param_4,param_1,lVar6);
    bVar7 = uVar3 == 0xffffffffffffffff;
    if ((*param_4 & 0x8000) != 0) goto LAB_006fdf89;
    piVar5 = *(int **)(param_4 + 0x22);
    piVar4 = piVar5 + 1;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 != 0) goto LAB_006fdf89;
  }
  else {
    if (param_4[0x30] == 0xffffffff) goto LAB_006fdf23;
    if ((*param_4 & 0x8000) != 0) {
      return 0;
    }
    piVar5 = *(int **)(param_4 + 0x22);
    piVar4 = piVar5 + 1;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 != 0) {
      return 0;
    }
    bVar7 = false;
    uVar3 = 0;
  }
  piVar5[2] = 0;
  piVar5[3] = 0;
  LOCK();
  iVar1 = *piVar5;
  *piVar5 = 0;
  UNLOCK();
  if (1 < iVar1) {
    FUN_00709660();
  }
LAB_006fdf89:
  if ((lVar6 - uVar3 != 0) && (!bVar7)) {
    param_3 = uVar3 / param_2;
  }
  return param_3;
}

