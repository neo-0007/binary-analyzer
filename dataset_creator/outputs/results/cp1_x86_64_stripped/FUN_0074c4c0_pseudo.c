
char * FUN_0074c4c0(char *param_1,char *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  int extraout_EDX;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  long in_FS_OFFSET;
  
  if (param_4 < param_3) {
    pcVar3 = "buffer overflow detected";
    FUN_00771f80();
    if (extraout_EDX < 1) {
      pcVar7 = (char *)0x0;
    }
    else {
      uVar5 = *param_4;
      if ((uVar5 & 0x8000) == 0) {
        lVar2 = *(long *)(in_FS_OFFSET + 0x10);
        piVar8 = *(int **)(param_4 + 0x22);
        if (*(long *)(piVar8 + 2) != lVar2) {
          LOCK();
          iVar1 = *piVar8;
          if (iVar1 == 0) {
            *piVar8 = 1;
          }
          UNLOCK();
          if (iVar1 != 0) {
            FUN_00709590();
          }
          piVar8 = *(int **)(param_4 + 0x22);
          uVar5 = *param_4;
          *(long *)(piVar8 + 2) = lVar2;
        }
        piVar8[1] = piVar8[1] + 1;
      }
      *param_4 = uVar5 & 0xffffffdf;
      pcVar7 = (char *)((long)extraout_EDX + -1);
      if (param_2 < (char *)((long)extraout_EDX + -1)) {
        pcVar7 = param_2;
      }
      pcVar4 = (char *)FUN_006fe490(param_4,pcVar3,pcVar7,10,1);
      uVar6 = *param_4;
      if (pcVar4 == (char *)0x0) {
        pcVar7 = (char *)0x0;
      }
      else if (((uVar6 & 0x20) == 0) ||
              (pcVar7 = (char *)0x0, *(int *)(in_FS_OFFSET + -0x58) == 0xb)) {
        if (param_2 <= pcVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00771d30();
        }
        pcVar3[(long)pcVar4] = '\0';
        uVar6 = *param_4;
        pcVar7 = pcVar3;
      }
      *param_4 = uVar5 & 0x20 | uVar6;
      if ((uVar6 & 0x8000) == 0) {
        piVar8 = *(int **)(param_4 + 0x22);
        iVar1 = piVar8[1];
        piVar8[1] = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          piVar8[2] = 0;
          piVar8[3] = 0;
          LOCK();
          iVar1 = *piVar8;
          *piVar8 = 0;
          UNLOCK();
          if (1 < iVar1) {
            FUN_00709660();
          }
        }
      }
    }
    return pcVar7;
  }
  pcVar3 = param_1;
  if (param_3 != (uint *)0x0) {
    pcVar3 = param_1 + (long)param_3;
    if (param_2 <= param_1) {
      if (param_1 == param_2) {
        return pcVar3;
      }
      if (param_1 < param_2 + (long)param_3) {
        pcVar7 = param_2 + -1 + (long)param_3;
        pcVar4 = param_1 + -1 + (long)param_3;
        for (; param_3 != (uint *)0x0; param_3 = (uint *)((long)param_3 + -1)) {
          *pcVar4 = *pcVar7;
          pcVar7 = pcVar7 + -1;
          pcVar4 = pcVar4 + -1;
        }
        return pcVar3;
      }
    }
    for (; param_3 != (uint *)0x0; param_3 = (uint *)((long)param_3 + -1)) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  return pcVar3;
}

