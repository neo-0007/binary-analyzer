
int FUN_005bf230(long param_1,char *param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  if (param_3 == 0) {
LAB_005bf246:
    iVar10 = 0;
  }
  else {
    puVar2 = *(uint **)(param_1 + 0x40);
    uVar11 = param_3 - 1;
    FUN_004ab6c0(param_1,0xf);
    uVar3 = puVar2[4];
    if ((int)uVar3 < 1) {
      uVar7 = puVar2[5];
      iVar10 = 0;
LAB_005bf2ee:
      uVar4 = uVar7 + 0xfff + param_3;
      lVar6 = *(long *)(puVar2 + 2);
      uVar3 = uVar4 + 0xfff;
      if (-1 < (int)uVar4) {
        uVar3 = uVar4;
      }
      uVar3 = uVar3 & 0xfffff000;
      if ((int)*puVar2 < (int)uVar3) {
        lVar6 = FUN_0041ade0(lVar6,(long)(int)uVar3,"../crypto/bio/bf_readbuff.c",0x61);
        if (lVar6 == 0) goto LAB_005bf246;
        *(long *)(puVar2 + 2) = lVar6;
        uVar7 = puVar2[5];
        *puVar2 = uVar3;
      }
      pcVar9 = (char *)(lVar6 + (int)uVar7);
      if (0 < (int)uVar11) {
        iVar12 = uVar11 + iVar10;
        pcVar8 = param_2;
        do {
          iVar5 = FUN_004ab770(*(undefined8 *)(param_1 + 0x48),pcVar9,1);
          if (iVar5 < 1) {
            FUN_004ac5f0(param_1);
            *pcVar8 = '\0';
            if (iVar10 != 0) {
              return iVar10;
            }
            return iVar5;
          }
          param_2 = pcVar8 + 1;
          iVar10 = iVar10 + 1;
          *pcVar8 = *pcVar9;
          puVar2[5] = puVar2[5] + 1;
        } while ((*pcVar9 != '\n') && (pcVar9 = pcVar9 + 1, pcVar8 = param_2, iVar12 != iVar10));
      }
    }
    else {
      uVar7 = puVar2[5];
      if ((int)uVar11 < 1) {
        iVar10 = 0;
      }
      else {
        pcVar8 = (char *)(*(long *)(puVar2 + 2) + (long)(int)uVar7);
        iVar10 = 0;
        pcVar9 = param_2;
        do {
          cVar1 = *pcVar8;
          param_2 = pcVar9 + 1;
          iVar10 = iVar10 + 1;
          *pcVar9 = cVar1;
          if (cVar1 == '\n') {
            puVar2[4] = puVar2[4] - iVar10;
            puVar2[5] = puVar2[5] + iVar10;
            goto LAB_005bf388;
          }
          uVar3 = puVar2[4];
          pcVar8 = pcVar8 + 1;
          uVar7 = uVar3;
          if ((int)uVar11 <= (int)uVar3) {
            uVar7 = uVar11;
          }
          pcVar9 = param_2;
        } while (iVar10 < (int)uVar7);
        uVar11 = uVar11 - iVar10;
        uVar3 = uVar3 - iVar10;
        uVar7 = puVar2[5] + iVar10;
      }
      puVar2[4] = uVar3;
      puVar2[5] = uVar7;
      if (uVar11 != 0) {
        param_3 = uVar11 + 1;
        goto LAB_005bf2ee;
      }
    }
LAB_005bf388:
    *param_2 = '\0';
  }
  return iVar10;
}

