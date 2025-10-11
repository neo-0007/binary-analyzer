
bool FUN_006243e0(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = true;
  if ((*(char **)(param_1 + 8) != *(char **)(param_2 + 8)) &&
     (bVar1 = false, **(char **)(param_1 + 8) != '*')) {
    iVar2 = thunk_FUN_00712780();
    return iVar2 == 0;
  }
  return bVar1;
}

