
void FUN_004b5a10(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  
  iVar1 = FUN_004b7d40(param_4);
  if (iVar1 == 0) {
    FUN_004b3a60(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  if ((*(int *)(param_2 + 1) == 1) && (*(int *)(param_2 + 2) == 0)) {
    iVar1 = FUN_004b7e80(param_3,4);
    if (iVar1 == 0) {
      iVar1 = FUN_004b7e80(param_2,4);
      if (iVar1 == 0) {
        iVar1 = FUN_004b7e80(param_4,4);
        if (iVar1 == 0) {
          FUN_004b5560(param_1,*(undefined8 *)*param_2,param_3,param_4,param_5,0);
          return;
        }
      }
    }
  }
  FUN_004b4eb0(param_1,param_2,param_3,param_4,param_5,0);
  return;
}

