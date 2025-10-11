
undefined8 argz_add_sep(undefined8 *param_1,long *param_2,char *param_3,int param_4)

{
  char cVar1;
  size_t sVar2;
  void *pvVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  
  sVar2 = strlen(param_3);
  uVar5 = 0;
  if (sVar2 != 0) {
    lVar6 = sVar2 + 1;
    pvVar3 = realloc((void *)*param_1,*param_2 + lVar6);
    *param_1 = pvVar3;
    if (pvVar3 != (void *)0x0) {
      pcVar4 = (char *)((long)pvVar3 + *param_2);
      do {
        cVar1 = *param_3;
        if (cVar1 == param_4) {
          if (((char *)*param_1 < pcVar4) && (pcVar4[-1] != '\0')) {
            *pcVar4 = '\0';
            cVar1 = *param_3;
            pcVar4 = pcVar4 + 1;
          }
          else {
            lVar6 = lVar6 + -1;
          }
        }
        else {
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
        }
        param_3 = param_3 + 1;
      } while (cVar1 != '\0');
      *param_2 = *param_2 + lVar6;
      return 0;
    }
    uVar5 = 0xc;
  }
  return uVar5;
}

