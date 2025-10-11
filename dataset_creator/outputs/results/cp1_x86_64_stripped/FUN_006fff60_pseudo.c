
int FUN_006fff60(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = param_2 + param_3;
  do {
    if (piVar1 <= param_2) {
      return param_3 + param_1;
    }
    piVar1 = piVar1 + -1;
  } while (*piVar1 != 10);
  return (int)((long)(param_2 + param_3) - (long)piVar1 >> 2) + -1;
}

