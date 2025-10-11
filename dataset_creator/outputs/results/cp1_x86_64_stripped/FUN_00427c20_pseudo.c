
void FUN_00427c20(undefined8 *param_1,undefined8 *param_2)

{
  if (*(int *)(param_1 + 1) != *(int *)(param_2 + 1)) {
    return;
  }
  *param_2 = *param_1;
  return;
}

