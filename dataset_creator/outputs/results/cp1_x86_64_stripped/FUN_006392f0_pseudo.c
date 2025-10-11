
undefined8 * FUN_006392f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (-1 < *(int *)(param_1 + 2)) {
    if (param_1 != &DAT_009452a0) {
      if (DAT_0093ea10 == '\0') {
        LOCK();
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
      }
    }
    return param_1 + 3;
  }
  puVar1 = (undefined8 *)FUN_00638b30(param_1,param_2,0);
  return puVar1;
}

