
char * FUN_0074c4f0(char *param_1,char *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  int extraout_EDX;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  long in_FS_OFFSET;
  
  if (param_4 < param_3) {
    pcVar7 = "buffer overflow detected";
    FUN_00771f80();
    if (extraout_EDX < 1) {
      pcVar6 = (char *)0x0;
    }
    else {
      uVar4 = *param_4;
      if ((uVar4 & 0x8000) == 0) {
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
          uVar4 = *param_4;
          *(long *)(piVar8 + 2) = lVar2;
        }
        piVar8[1] = piVar8[1] + 1;
      }
      *param_4 = uVar4 & 0xffffffdf;
      pcVar6 = (char *)((long)extraout_EDX + -1);
      if (param_2 < (char *)((long)extraout_EDX + -1)) {
        pcVar6 = param_2;
      }
      pcVar3 = (char *)FUN_006fe490(param_4,pcVar7,pcVar6,10,1);
      uVar5 = *param_4;
      if (pcVar3 == (char *)0x0) {
        pcVar6 = (char *)0x0;
      }
      else if (((uVar5 & 0x20) == 0) ||
              (pcVar6 = (char *)0x0, *(int *)(in_FS_OFFSET + -0x58) == 0xb)) {
        if (param_2 <= pcVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00771d30();
        }
        pcVar7[(long)pcVar3] = '\0';
        uVar5 = *param_4;
        pcVar6 = pcVar7;
      }
      *param_4 = uVar4 & 0x20 | uVar5;
      if ((uVar5 & 0x8000) == 0) {
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
    return pcVar6;
  }
  if (param_3 != (uint *)0x0) {
    pcVar7 = param_1;
    if (param_2 <= param_1) {
      if (param_1 == param_2) {
        return param_1;
      }
      if (param_1 < param_2 + (long)param_3) {
        pcVar7 = param_2 + -1 + (long)param_3;
        pcVar6 = param_1 + -1 + (long)param_3;
        for (; param_3 != (uint *)0x0; param_3 = (uint *)((long)param_3 + -1)) {
          *pcVar6 = *pcVar7;
          pcVar7 = pcVar7 + -1;
          pcVar6 = pcVar6 + -1;
        }
        return param_1;
      }
    }
    for (; param_3 != (uint *)0x0; param_3 = (uint *)((long)param_3 + -1)) {
      *pcVar7 = *param_2;
      param_2 = param_2 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  return param_1;
}

