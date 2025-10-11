
undefined8 argz_create_sep(char *param_1,int param_2,undefined8 *param_3,size_t *param_4)

{
  char cVar1;
  size_t sVar2;
  char *__ptr;
  undefined8 uVar3;
  char *pcVar4;
  
  sVar2 = strlen(param_1);
  if (sVar2 == 0) {
    *param_3 = 0;
    uVar3 = 0;
    *param_4 = 0;
  }
  else {
    sVar2 = sVar2 + 1;
    __ptr = (char *)malloc(sVar2);
    *param_3 = __ptr;
    pcVar4 = __ptr;
    if (__ptr != (char *)0x0) {
      do {
        while (cVar1 = *param_1, cVar1 != param_2) {
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
LAB_0070a8f7:
          param_1 = param_1 + 1;
          if (cVar1 == '\0') goto LAB_0070a928;
        }
        if ((pcVar4 <= __ptr) || (pcVar4[-1] == '\0')) {
          sVar2 = sVar2 - 1;
          goto LAB_0070a8f7;
        }
        *pcVar4 = '\0';
        param_1 = param_1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
LAB_0070a928:
      if (sVar2 == 0) {
        free(__ptr);
        *param_3 = 0;
      }
      *param_4 = sVar2;
      return 0;
    }
    uVar3 = 0xc;
  }
  return uVar3;
}

