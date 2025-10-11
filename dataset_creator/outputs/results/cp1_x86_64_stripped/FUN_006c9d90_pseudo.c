
bool FUN_006c9d90(long param_1,int param_2,int *param_3)

{
  if (param_2 != *param_3) {
    return false;
  }
  return *(long *)(param_3 + 2) == param_1;
}

