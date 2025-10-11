
undefined8 FUN_007142a0(char *param_1,int param_2,undefined8 *param_3,long *param_4)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  lVar2 = thunk_FUN_007129d0();
  if (lVar2 == 0) {
    *param_3 = 0;
    uVar4 = 0;
    *param_4 = 0;
  }
  else {
    lVar2 = lVar2 + 1;
    pcVar3 = (char *)FUN_007101b0(lVar2);
    *param_3 = pcVar3;
    pcVar5 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      do {
        while (cVar1 = *param_1, cVar1 != param_2) {
          *pcVar5 = cVar1;
          pcVar5 = pcVar5 + 1;
LAB_00714307:
          param_1 = param_1 + 1;
          if (cVar1 == '\0') goto LAB_00714338;
        }
        if ((pcVar5 <= pcVar3) || (pcVar5[-1] == '\0')) {
          lVar2 = lVar2 + -1;
          goto LAB_00714307;
        }
        *pcVar5 = '\0';
        param_1 = param_1 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
LAB_00714338:
      if (lVar2 == 0) {
        FUN_007104f0(pcVar3);
        *param_3 = 0;
      }
      *param_4 = lVar2;
      return 0;
    }
    uVar4 = 0xc;
  }
  return uVar4;
}

