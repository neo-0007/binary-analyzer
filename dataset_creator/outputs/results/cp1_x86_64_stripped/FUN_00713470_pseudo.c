
char * FUN_00713470(char *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  char *pcVar2;
  
  if (param_1 == (char *)0x0) {
    param_1 = (char *)*param_3;
  }
  if (*param_1 != '\0') {
    lVar1 = thunk_FUN_00712c40(param_1,param_2);
    pcVar2 = param_1 + lVar1;
    param_1 = pcVar2;
    if (*pcVar2 != '\0') {
      lVar1 = thunk_FUN_00712880(pcVar2,param_2);
      param_1 = pcVar2 + lVar1;
      if (*param_1 != '\0') {
        *param_1 = '\0';
        param_1 = param_1 + 1;
      }
      goto LAB_007134c2;
    }
  }
  pcVar2 = (char *)0x0;
LAB_007134c2:
  *param_3 = param_1;
  return pcVar2;
}

