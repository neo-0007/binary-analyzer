
int FUN_00554fc0(short *param_1,int param_2,ulong param_3,int param_4)

{
  char cVar1;
  long lVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  
  uVar10 = (ulong)param_2;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_4 != 0) && (3 < param_2)) && (*param_1 == -0x4411)) && ((char)param_1[1] == -0x41)) {
    thunk_FUN_00713610(param_1,(char *)((long)param_1 + 3),(long)(param_2 + -3));
    *(char *)((long)param_1 + (uVar10 - 3)) = '\0';
    uVar10 = (ulong)(param_2 + -3);
  }
  iVar8 = (int)uVar10;
  if ((param_3 & 2) == 0) {
    psVar7 = param_1;
    if ((param_3 & 4) != 0) {
      if (iVar8 < 1) goto LAB_005551ab;
      do {
        iVar5 = FUN_005466b0((int)(char)*psVar7,0x400);
        iVar4 = (1 - (int)param_1) + (int)psVar7;
        if (((iVar5 == 0) || ((char)*psVar7 == '\r')) || ((char)*psVar7 == '\n')) goto LAB_0055503c;
        psVar7 = (short *)((long)psVar7 + 1);
      } while ((short *)((long)param_1 + (ulong)(iVar8 - 1) + 1) != psVar7);
      psVar7 = (short *)((long)iVar4 + (long)param_1);
      goto LAB_00555039;
    }
    iVar5 = 0;
    if (iVar8 < 1) {
LAB_005551ab:
      lVar6 = 1;
      iVar4 = 1;
      goto LAB_0055503f;
    }
    do {
      iVar4 = iVar5;
      cVar1 = (char)*psVar7;
      if ((cVar1 == '\n') || (cVar1 == '\r')) {
        iVar4 = iVar4 + 1;
        goto LAB_0055503c;
      }
      iVar5 = FUN_005466b0((int)cVar1,0x40);
      if (iVar5 != 0) {
        *(char *)psVar7 = ' ';
      }
      psVar7 = (short *)((long)psVar7 + 1);
      iVar5 = iVar4 + 1;
    } while (iVar8 != iVar4 + 1);
    psVar7 = (short *)((long)param_1 + uVar10);
    iVar4 = iVar4 + 2;
  }
  else {
    if (iVar8 < 0) {
LAB_00555030:
      iVar4 = (int)uVar10 + 1;
      psVar7 = (short *)((long)iVar4 + (long)param_1);
    }
    else {
      psVar3 = (short *)((long)iVar8 + (long)param_1);
      do {
        psVar7 = psVar3;
        if (' ' < (char)*psVar7) goto LAB_00555030;
        uVar9 = (int)uVar10 - 1;
        uVar10 = (ulong)uVar9;
        psVar3 = (short *)((long)psVar7 + -1);
      } while (uVar9 != 0xffffffff);
      iVar4 = 0;
    }
LAB_00555039:
    iVar4 = iVar4 + 1;
  }
LAB_0055503c:
  lVar6 = (long)iVar4;
LAB_0055503f:
  *(char *)psVar7 = '\n';
  *(char *)((long)param_1 + lVar6) = '\0';
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar4;
}

