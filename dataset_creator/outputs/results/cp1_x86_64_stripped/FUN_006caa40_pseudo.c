
bool FUN_006caa40(long param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = true;
  if ((*(char **)(param_1 + 8) != "NSt8ios_base7failureE") &&
     (bVar1 = false, **(char **)(param_1 + 8) != '*')) {
    iVar2 = thunk_FUN_00712780();
    return iVar2 == 0;
  }
  return bVar1;
}

