
int FUN_00557110(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar1 = thunk_FUN_007129d0();
  iVar2 = thunk_FUN_007129d0(param_2);
  iVar3 = 0;
  if (iVar2 + 1 < iVar1) {
    lVar4 = ((long)iVar1 - (long)iVar2) + param_1;
    iVar3 = thunk_FUN_00712780(lVar4,param_2);
    if (iVar3 != 0) {
      return 0;
    }
    iVar3 = 0;
    if (*(char *)(lVar4 + -1) == ' ') {
      iVar3 = ((int)lVar4 + -1) - (int)param_1;
    }
  }
  return iVar3;
}

