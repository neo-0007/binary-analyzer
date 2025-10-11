
int pmeth_func_cmp_BSEARCH_CMP_FN(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)*param_1;
  piVar2 = (int *)(*(code *)*param_2)();
  return iVar1 - *piVar2;
}

