
undefined8 d_call_offset(long param_1,int param_2)

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
    d_number(param_1);
    if (**(char **)(param_1 + 0x18) != '_') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  d_number(param_1);
  if (**(char **)(param_1 + 0x18) != '_') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  return 1;
}

