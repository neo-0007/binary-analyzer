
int FUN_006fe7c0(uint *param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  uVar4 = *param_1;
  if ((uVar4 & 0x8000) == 0) {
    lVar3 = *(long *)(in_FS_OFFSET + 0x10);
    piVar5 = *(int **)(param_1 + 0x22);
    if (*(long *)(piVar5 + 2) != lVar3) {
      LOCK();
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        *piVar5 = 1;
      }
      UNLOCK();
      if (iVar2 != 0) {
        FUN_00709590();
      }
      piVar5 = *(int **)(param_1 + 0x22);
      uVar4 = *param_1;
      *(long *)(piVar5 + 2) = lVar3;
    }
    piVar5[1] = piVar5[1] + 1;
    if (param_3 == 1) {
LAB_006fe910:
      uVar4 = uVar4 & 0xfffffffd | 0x200;
      *param_1 = uVar4;
      if (param_2 == 0) {
        iVar2 = 0;
        goto LAB_006fe8bf;
      }
    }
    else {
      if (param_3 != 2) {
        if (param_3 == 0) goto LAB_006fe870;
LAB_006fe832:
        iVar2 = -1;
        goto LAB_006fe8bf;
      }
LAB_006fe8f8:
      param_4 = 0;
      param_2 = 0;
      *param_1 = uVar4 & 0xfffffdff | 2;
    }
  }
  else {
    if (param_3 == 1) goto LAB_006fe910;
    if (param_3 == 2) goto LAB_006fe8f8;
    if (param_3 != 0) {
      return -1;
    }
LAB_006fe870:
    uVar4 = uVar4 & 0xfffffdfd;
    *param_1 = uVar4;
    if (param_2 == 0) {
      iVar2 = 0;
      if (*(long *)(param_1 + 0xe) != 0) goto LAB_006fe8bf;
      lVar3 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar3 - 0x93f160U) {
        FUN_00703130();
      }
                    /* try { // try from 006fe961 to 006fe99e has its CatchHandler @ 006fe9a1 */
      iVar2 = (**(code **)(lVar3 + 0x68))(param_1);
      uVar4 = *param_1;
      if (-1 < iVar2) {
        uVar4 = uVar4 & 0xfffffdff;
        iVar2 = 0;
        *param_1 = uVar4;
        goto LAB_006fe8bf;
      }
      goto LAB_006fe832;
    }
  }
  lVar3 = *(long *)(param_1 + 0x36);
  if (0x827 < lVar3 - 0x93f160U) {
    FUN_00703130();
  }
                    /* try { // try from 006fe8b2 to 006fe8b5 has its CatchHandler @ 006fe9a1 */
  lVar3 = (**(code **)(lVar3 + 0x58))(param_1,param_2,param_4);
  uVar4 = *param_1;
  iVar2 = -(uint)(lVar3 == 0);
LAB_006fe8bf:
  if ((uVar4 & 0x8000) == 0) {
    piVar5 = *(int **)(param_1 + 0x22);
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
  return iVar2;
}

