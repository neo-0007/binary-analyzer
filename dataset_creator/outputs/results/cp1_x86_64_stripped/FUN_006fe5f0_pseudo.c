
undefined8 FUN_006fe5f0(uint *param_1,long param_2,uint param_3,int param_4)

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
                    /* try { // try from 006fe780 to 006fe784 has its CatchHandler @ 006fe7aa */
        FUN_00709590();
      }
      piVar4 = *(int **)(param_1 + 0x22);
      *(long *)(piVar4 + 2) = lVar2;
    }
    piVar4[1] = piVar4[1] + 1;
  }
  if (param_3 < 3) {
    if (param_4 != 0) {
      if ((int)param_1[0x30] < 0) {
        if (*(long *)(param_1 + 0x12) != 0) {
          if ((param_3 == 1) && ((*param_1 & 0x100) != 0)) {
            param_2 = param_2 - (*(long *)(param_1 + 4) - *(long *)(param_1 + 2));
          }
          FUN_00706520(param_1);
        }
      }
      else if ((param_1[0x30] != 0) && (*(long *)(*(long *)(param_1 + 0x28) + 0x40) != 0)) {
        if ((param_3 == 1) && ((*param_1 & 0x100) != 0)) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00404713();
        }
        FUN_006ffe00(param_1);
      }
    }
    lVar2 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar2 - 0x93f160U) {
      FUN_00703130();
    }
                    /* try { // try from 006fe68c to 006fe734 has its CatchHandler @ 006fe7aa */
    uVar3 = (**(code **)(lVar2 + 0x48))(param_1,param_2,param_3,param_4);
  }
  else {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    uVar3 = 0xffffffffffffffff;
  }
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

