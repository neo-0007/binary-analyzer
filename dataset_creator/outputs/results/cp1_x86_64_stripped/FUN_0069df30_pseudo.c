
void FUN_0069df30(long *param_1,ulong param_2,char param_3)

{
  char *pcVar1;
  ulong local_20 [2];
  
  local_20[0] = param_2;
  if (param_2 < 0x10) {
    pcVar1 = (char *)*param_1;
  }
  else {
    pcVar1 = (char *)FUN_0069de90(param_1,local_20,0);
    *param_1 = (long)pcVar1;
    param_1[2] = local_20[0];
  }
  if (local_20[0] != 0) {
    if (local_20[0] == 1) {
      *pcVar1 = param_3;
      param_1[1] = 1;
      *(undefined1 *)(*param_1 + 1) = 0;
      return;
    }
    thunk_FUN_00713720(pcVar1,(int)param_3,local_20[0]);
    pcVar1 = (char *)*param_1;
  }
  param_1[1] = local_20[0];
  pcVar1[local_20[0]] = '\0';
  return;
}

