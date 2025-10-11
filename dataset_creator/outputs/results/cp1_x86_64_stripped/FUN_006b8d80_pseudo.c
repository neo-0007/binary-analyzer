
undefined8 FUN_006b8d80(long param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    pcVar1 = *(char **)(param_1 + 0x18);
    if (*pcVar1 == '\0') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = pcVar1 + 1;
    param_2 = (int)*pcVar1;
  }
  if (param_2 != 0x68) {
    if (param_2 != 0x76) {
      return 0;
    }
    FUN_006b8cc0(param_1);
    if (**(char **)(param_1 + 0x18) != '_') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  FUN_006b8cc0(param_1);
  if (**(char **)(param_1 + 0x18) != '_') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  return 1;
}

