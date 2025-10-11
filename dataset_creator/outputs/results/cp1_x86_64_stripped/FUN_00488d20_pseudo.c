
undefined8
FUN_00488d20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((code *)param_1[1] != (code *)0x0) {
    (*(code *)param_1[1])(param_3);
    return 1;
  }
  if ((*(byte *)((long)param_1 + 0x3c) & 2) != 0) {
    FUN_0054c300();
    return 1;
  }
  FUN_0054c450(param_3,param_2,param_4,param_1[0x16],(long)param_1 + 0x94,*param_1);
  return 1;
}

