
undefined8 FUN_00700060(uint *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(uint **)(param_2 + 8) != param_1) {
    return 0xffffffff;
  }
  uVar1 = *param_1;
  iVar2 = *(int *)(param_2 + 0x10);
  plVar3 = *(long **)(param_1 + 0x28);
  if (iVar2 < 0) {
    lVar7 = plVar3[1];
    if ((uVar1 & 0x100) == 0) {
      lVar4 = plVar3[2];
      *param_1 = uVar1 | 0x100;
      lVar5 = plVar3[10];
      lVar6 = plVar3[8];
      plVar3[10] = lVar7;
      plVar3[8] = lVar4;
      plVar3[2] = lVar6;
      *plVar3 = lVar5;
      plVar3[1] = lVar5;
      *plVar3 = lVar5 + (long)iVar2 * 4;
      return 0;
    }
  }
  else {
    lVar4 = plVar3[2];
    lVar7 = lVar4;
    if ((uVar1 & 0x100) != 0) {
      lVar7 = plVar3[10];
      *param_1 = uVar1 & 0xfffffeff;
      lVar5 = plVar3[1];
      plVar3[1] = lVar7;
      plVar3[10] = lVar5;
      lVar7 = plVar3[8];
      plVar3[8] = lVar4;
      plVar3[2] = lVar7;
    }
  }
  *plVar3 = lVar7 + (long)iVar2 * 4;
  return 0;
}

