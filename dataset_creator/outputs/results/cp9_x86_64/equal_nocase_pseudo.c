
undefined8 equal_nocase(char *param_1,char *param_2,long param_3,char *param_4,uint param_5)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char cVar4;
  
  if (((param_5 & 0x8000) == 0) || (param_2 <= param_4)) {
    if (param_4 == param_2) goto LAB_00588255;
  }
  else {
    pcVar1 = param_1;
    do {
      if (*pcVar1 == '\0') {
        return 0;
      }
      if (((param_5 >> 4 & 1) != 0) && (*pcVar1 == '.')) {
        return 0;
      }
      pcVar1 = pcVar1 + 1;
      pcVar3 = param_1 + ((long)param_2 - (long)pcVar1);
    } while (pcVar1 != param_1 + ((long)param_2 - (long)param_4));
    param_1 = pcVar1;
    param_2 = param_4;
    if (pcVar3 == param_4) {
LAB_00588255:
      pcVar1 = (char *)0x0;
      if (param_2 != (char *)0x0) {
        do {
          cVar2 = param_1[(long)pcVar1];
          cVar4 = pcVar1[param_3];
          if (cVar2 == '\0') {
            return 0;
          }
          if (cVar2 != cVar4) {
            if ((byte)(cVar2 + 0xbfU) < 0x1a) {
              cVar2 = cVar2 + ' ';
              if ((byte)(cVar4 + 0xbfU) < 0x1a) goto LAB_0058829d;
            }
            else {
              if (0x19 < (byte)(cVar4 + 0xbfU)) {
                return 0;
              }
LAB_0058829d:
              cVar4 = cVar4 + ' ';
            }
            if (cVar4 != cVar2) {
              return 0;
            }
          }
          pcVar1 = pcVar1 + 1;
        } while (param_2 != pcVar1);
      }
      return 1;
    }
  }
  return 0;
}

