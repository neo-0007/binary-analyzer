
bool FUN_0059ccc0(char *param_1,char *param_2,undefined8 param_3,char *param_4,uint param_5)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (((param_5 & 0x8000) == 0) || (param_2 <= param_4)) {
    if (param_4 == param_2) goto LAB_0059cd1d;
  }
  else {
    pcVar2 = param_1;
    do {
      if (*pcVar2 == '\0') {
        return false;
      }
      if (((param_5 >> 4 & 1) != 0) && (*pcVar2 == '.')) {
        return false;
      }
      pcVar2 = pcVar2 + 1;
      pcVar3 = param_1 + ((long)param_2 - (long)pcVar2);
    } while (pcVar2 != param_1 + ((long)param_2 - (long)param_4));
    param_1 = pcVar2;
    param_2 = param_4;
    if (param_4 == pcVar3) {
LAB_0059cd1d:
      iVar1 = thunk_FUN_00713570(param_1,param_3,param_2);
      return iVar1 == 0;
    }
  }
  return false;
}

