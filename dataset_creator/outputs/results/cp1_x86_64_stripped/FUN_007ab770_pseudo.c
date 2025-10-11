
int FUN_007ab770(ulong param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 >> 3 != 0) {
    puVar1 = param_2 + (param_1 >> 3);
    iVar4 = 0;
    do {
      uVar2 = *param_2;
      if (uVar2 != 0) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          uVar2 = uVar2 & uVar2 - 1;
        } while (uVar2 != 0);
        iVar4 = iVar4 + iVar3;
      }
      param_2 = param_2 + 1;
    } while (puVar1 != param_2);
    return iVar4;
  }
  return 0;
}

