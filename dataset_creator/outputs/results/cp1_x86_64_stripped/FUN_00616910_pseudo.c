
int FUN_00616910(long param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  iVar9 = 0;
  param_3 = param_3 + -1;
  puVar2 = *(undefined4 **)(param_1 + 0x40);
  FUN_004ab6c0(param_1,0xf);
  do {
    lVar3 = *(long *)(puVar2 + 2);
    iVar4 = puVar2[4];
    while (0 < iVar4) {
      iVar6 = puVar2[5];
      if (0 < param_3) {
        pcVar8 = (char *)(lVar3 + iVar6);
        iVar6 = 0;
        pcVar7 = param_2;
        do {
          cVar1 = *pcVar8;
          param_2 = pcVar7 + 1;
          iVar6 = iVar6 + 1;
          *pcVar7 = cVar1;
          if (cVar1 == '\n') {
            puVar2[4] = puVar2[4] - iVar6;
            iVar9 = iVar9 + iVar6;
            puVar2[5] = puVar2[5] + iVar6;
            goto LAB_006169db;
          }
          iVar4 = puVar2[4];
          pcVar8 = pcVar8 + 1;
          iVar5 = param_3;
          if (iVar4 <= param_3) {
            iVar5 = iVar4;
          }
          pcVar7 = param_2;
        } while (iVar6 < iVar5);
        iVar4 = iVar4 - iVar6;
        iVar9 = iVar9 + iVar6;
        param_3 = param_3 - iVar6;
        iVar6 = puVar2[5] + iVar6;
      }
      puVar2[4] = iVar4;
      puVar2[5] = iVar6;
      if (param_3 == 0) {
LAB_006169db:
        *param_2 = '\0';
        return iVar9;
      }
      lVar3 = *(long *)(puVar2 + 2);
      iVar4 = puVar2[4];
    }
    iVar4 = FUN_004ab770(*(undefined8 *)(param_1 + 0x48),lVar3,*puVar2);
    if (iVar4 < 1) {
      FUN_004ac5f0(param_1);
      *param_2 = '\0';
      if (iVar4 == 0) {
        return iVar9;
      }
      if (iVar9 == 0) {
        iVar9 = iVar4;
      }
      return iVar9;
    }
    puVar2[4] = iVar4;
    puVar2[5] = 0;
  } while( true );
}

