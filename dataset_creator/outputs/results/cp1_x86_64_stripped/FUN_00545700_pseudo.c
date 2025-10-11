
void FUN_00545700(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((int)param_1[3] != 0) {
    lVar2 = *param_1;
    uVar5 = 0;
    do {
      plVar1 = (long *)(lVar2 + uVar5 * 8);
      lVar3 = *plVar1;
      if (lVar3 != 0) {
        do {
          lVar2 = *(long *)(lVar3 + 8);
          FUN_0041ad60(lVar3,"../crypto/lhash/lhash.c",0x79);
          lVar3 = lVar2;
        } while (lVar2 != 0);
        lVar2 = *param_1;
        plVar1 = (long *)(lVar2 + uVar5 * 8);
      }
      *plVar1 = 0;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 3));
  }
  param_1[7] = 0;
  return;
}

