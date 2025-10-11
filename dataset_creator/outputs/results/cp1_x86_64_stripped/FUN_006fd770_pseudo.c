
undefined1 * FUN_006fd770(undefined1 *param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  if (0 < param_2) {
    if (param_2 == 1) {
      *param_1 = 0;
    }
    else {
      uVar4 = *param_3;
      if ((uVar4 & 0x8000) == 0) {
        lVar3 = *(long *)(in_FS_OFFSET + 0x10);
        piVar5 = *(int **)(param_3 + 0x22);
        if (*(long *)(piVar5 + 2) != lVar3) {
          LOCK();
          iVar1 = *piVar5;
          if (iVar1 == 0) {
            *piVar5 = 1;
          }
          UNLOCK();
          if (iVar1 != 0) {
                    /* try { // try from 006fd8b0 to 006fd8b4 has its CatchHandler @ 006fd8ba */
            FUN_00709590();
          }
          piVar5 = *(int **)(param_3 + 0x22);
          uVar4 = *param_3;
          *(long *)(piVar5 + 2) = lVar3;
        }
        piVar5[1] = piVar5[1] + 1;
      }
      *param_3 = uVar4 & 0xffffffdf;
                    /* try { // try from 006fd7fb to 006fd7ff has its CatchHandler @ 006fd8ba */
      lVar3 = FUN_006fe490(param_3,param_1,(long)(param_2 + -1),10,1);
      uVar2 = *param_3;
      if ((lVar3 == 0) || (((uVar2 & 0x20) != 0 && (*(int *)(in_FS_OFFSET + -0x58) != 0xb)))) {
        *param_3 = uVar4 & 0x20 | uVar2;
        param_1 = (undefined1 *)0x0;
      }
      else {
        param_1[lVar3] = 0;
        uVar2 = *param_3;
        *param_3 = uVar4 & 0x20 | uVar2;
      }
      if ((uVar2 & 0x8000) == 0) {
        piVar5 = *(int **)(param_3 + 0x22);
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
    }
    return param_1;
  }
  return (undefined1 *)0x0;
}

