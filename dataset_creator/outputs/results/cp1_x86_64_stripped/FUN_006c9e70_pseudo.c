
bool FUN_006c9e70(long param_1,int *param_2,int param_3)

{
  if (*(long *)(param_2 + 2) != param_1) {
    return false;
  }
  return *param_2 == param_3;
}

