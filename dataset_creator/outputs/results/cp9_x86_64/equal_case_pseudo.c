
bool equal_case(char *param_1,char *param_2,void *param_3,char *param_4,uint param_5)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (((param_5 & 0x8000) == 0) || (param_2 <= param_4)) {
    if (param_4 == param_2) goto LAB_005891ad;
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
LAB_005891ad:
      iVar1 = bcmp(param_1,param_3,(size_t)param_2);
      return iVar1 == 0;
    }
  }
  return false;
}

