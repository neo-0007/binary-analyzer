
int FUN_00607580(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = **(int **)*param_2;
  iVar2 = **(int **)*param_1;
  iVar3 = iVar1;
  if (iVar2 <= iVar1) {
    iVar3 = iVar2;
  }
  iVar3 = thunk_FUN_00713570(*(undefined8 *)(*(int **)*param_1 + 2),
                             *(undefined8 *)(*(int **)*param_2 + 2),(long)iVar3);
  if (iVar3 == 0) {
    iVar3 = iVar2 - iVar1;
  }
  return iVar3;
}

