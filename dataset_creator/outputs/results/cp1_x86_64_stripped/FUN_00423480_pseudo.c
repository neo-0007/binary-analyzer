
ulong FUN_00423480(int *param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  iVar1 = *param_1;
  uVar6 = (ulong)(uint)(iVar1 - *param_2);
  if (iVar1 - *param_2 == 0) {
    plVar2 = *(long **)(param_1 + 2);
    plVar3 = *(long **)(param_2 + 2);
    if (iVar1 == 2) {
      if (plVar2[1] == 0) {
        return 0xffffffff;
      }
      lVar4 = plVar3[1];
    }
    else {
      if (2 < iVar1) {
        if (iVar1 == 3) {
          return (ulong)(uint)((int)plVar2[2] - (int)plVar3[2]);
        }
        return uVar6;
      }
      if (iVar1 == 0) {
        uVar5 = *(int *)((long)plVar2 + 0x14) - *(int *)((long)plVar3 + 0x14);
        if (uVar5 != 0) {
          return (ulong)uVar5;
        }
        uVar6 = thunk_FUN_00713570(plVar2[3],plVar3[3]);
        return uVar6;
      }
      if (iVar1 != 1) {
        return uVar6;
      }
      if (*plVar2 == 0) {
        return 0xffffffff;
      }
      lVar4 = *plVar3;
    }
    if (lVar4 != 0) {
      uVar6 = thunk_FUN_00712780();
      return uVar6;
    }
    uVar6 = 1;
  }
  return uVar6;
}

