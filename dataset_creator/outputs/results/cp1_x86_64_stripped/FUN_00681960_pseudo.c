
bool FUN_00681960(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  
  plVar1 = (long *)*param_1;
  bVar5 = (int)param_1[1] == -1;
  bVar2 = plVar1 != (long *)0x0 && bVar5;
  if (bVar2) {
    bVar5 = false;
    if ((ulong)plVar1[3] <= (ulong)plVar1[2]) {
      iVar4 = (**(code **)(*plVar1 + 0x48))();
      if (iVar4 == -1) {
        *param_1 = 0;
        bVar5 = bVar2;
      }
    }
  }
  plVar1 = (long *)*param_2;
  bVar2 = (int)param_2[1] == -1;
  bVar3 = plVar1 != (long *)0x0 && bVar2;
  if (bVar3) {
    bVar2 = false;
    if ((ulong)plVar1[3] <= (ulong)plVar1[2]) {
      iVar4 = (**(code **)(*plVar1 + 0x48))();
      if (iVar4 == -1) {
        *param_2 = 0;
        bVar2 = bVar3;
      }
    }
  }
  return bVar2 == bVar5;
}

