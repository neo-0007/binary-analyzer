
char * FUN_00771d30(undefined8 param_1,ulong param_2,undefined8 param_3,uint *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int extraout_EDX;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  
  pcVar6 = "buffer overflow detected";
  FUN_00771f80();
  if (extraout_EDX < 1) {
    pcVar8 = (char *)0x0;
  }
  else {
    uVar4 = *param_4;
    if ((uVar4 & 0x8000) == 0) {
      lVar2 = *(long *)(in_FS_OFFSET + 0x10);
      piVar7 = *(int **)(param_4 + 0x22);
      if (*(long *)(piVar7 + 2) != lVar2) {
        LOCK();
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          *piVar7 = 1;
        }
        UNLOCK();
        if (iVar1 != 0) {
          FUN_00709590();
        }
        piVar7 = *(int **)(param_4 + 0x22);
        uVar4 = *param_4;
        *(long *)(piVar7 + 2) = lVar2;
      }
      piVar7[1] = piVar7[1] + 1;
    }
    *param_4 = uVar4 & 0xffffffdf;
    uVar3 = (long)extraout_EDX - 1U;
    if (param_2 < (long)extraout_EDX - 1U) {
      uVar3 = param_2;
    }
    uVar3 = FUN_006fe490(param_4,pcVar6,uVar3,10,1);
    uVar5 = *param_4;
    if (uVar3 == 0) {
      pcVar8 = (char *)0x0;
    }
    else if (((uVar5 & 0x20) == 0) || (pcVar8 = (char *)0x0, *(int *)(in_FS_OFFSET + -0x58) == 0xb))
    {
      if (param_2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00771d30();
      }
      pcVar6[uVar3] = '\0';
      uVar5 = *param_4;
      pcVar8 = pcVar6;
    }
    *param_4 = uVar4 & 0x20 | uVar5;
    if ((uVar5 & 0x8000) == 0) {
      piVar7 = *(int **)(param_4 + 0x22);
      iVar1 = piVar7[1];
      piVar7[1] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        piVar7[2] = 0;
        piVar7[3] = 0;
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = 0;
        UNLOCK();
        if (1 < iVar1) {
          FUN_00709660();
        }
      }
    }
  }
  return pcVar8;
}

