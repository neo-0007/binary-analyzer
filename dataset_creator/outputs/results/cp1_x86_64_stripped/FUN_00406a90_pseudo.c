
void FUN_00406a90(undefined8 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  
  if (param_1[7] != 0) {
    if ((param_1[1] != 0) && (pcVar1 = *(code **)(param_1[1] + 0xb0), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
    param_1[7] = 0;
    FUN_0040b0c0(param_1,2);
  }
  FUN_00405e60(param_1,param_2);
  if (param_2 != 0) {
    param_1[1] = 0;
  }
  FUN_0051a270(param_1[2]);
  param_1[2] = 0;
  if (param_3 != 0) {
    return;
  }
  FUN_00406a50(param_1[8]);
  param_1[8] = 0;
  *param_1 = 0;
  return;
}

