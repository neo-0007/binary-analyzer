
void FUN_00422170(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[3] != 0) {
      puVar1 = &DAT_007cf9cd;
      if (param_2 != 1) {
        puVar1 = &DAT_007cf9d2;
      }
      *param_1 = puVar1;
      FUN_00421ef0();
      (*(code *)param_1[3])(param_1 + 4,param_1[0x18]);
      *param_1 = "None";
      param_1[1] = "None";
      param_1[2] = "None";
    }
    return;
  }
  return;
}

