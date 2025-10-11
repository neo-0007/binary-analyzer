
int FUN_00424bf0(long *param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 4) - *(int *)(*param_2 + 4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*param_1 + 8) - *(int *)(*param_2 + 8);
  }
  return iVar1;
}

