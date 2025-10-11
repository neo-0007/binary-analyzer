
void FUN_004181c0(undefined8 *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 1) != *param_2) {
    return;
  }
  iVar1 = param_2[4];
  uVar2 = *param_1;
  param_2[4] = iVar1 + 1;
  *(undefined8 *)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = uVar2;
  return;
}

