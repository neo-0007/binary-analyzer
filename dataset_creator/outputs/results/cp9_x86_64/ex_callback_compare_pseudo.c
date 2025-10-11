
int ex_callback_compare(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  if (lVar3 == lVar4) {
    return 0;
  }
  if (lVar3 != 0) {
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x10);
      iVar5 = 0;
      iVar2 = *(int *)(lVar3 + 0x10);
      if (iVar2 != iVar1) {
        iVar5 = ((iVar2 <= iVar1) - 1) + (uint)(iVar2 <= iVar1);
      }
      return iVar5;
    }
    return -1;
  }
  return 1;
}

