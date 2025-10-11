
void FUN_006e03d0(undefined8 *param_1)

{
  int iVar1;
  
  if ((code *)param_1[4] != (code *)0x0) {
    (*(code *)param_1[4])();
  }
  iVar1 = *(int *)(param_1 + 3);
  if (iVar1 == 0) {
    FUN_007104f0(param_1[1]);
    iVar1 = *(int *)(param_1 + 3);
  }
  else if (iVar1 == 1) {
    FUN_0076f080(param_1[1],param_1[2]);
    iVar1 = *(int *)(param_1 + 3);
  }
  if (iVar1 != 2) {
    FUN_007104f0(*param_1);
  }
  FUN_007104f0(param_1);
  return;
}

