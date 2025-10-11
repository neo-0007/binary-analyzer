
undefined8 FUN_00714380(long *param_1,long *param_2,char *param_3,int param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  lVar2 = thunk_FUN_007129d0(param_3);
  uVar5 = 0;
  if (lVar2 != 0) {
    lVar2 = lVar2 + 1;
    lVar3 = FUN_00710840(*param_1,*param_2 + lVar2);
    *param_1 = lVar3;
    if (lVar3 != 0) {
      pcVar4 = (char *)(lVar3 + *param_2);
      do {
        cVar1 = *param_3;
        if (cVar1 == param_4) {
          if (((char *)*param_1 < pcVar4) && (pcVar4[-1] != '\0')) {
            *pcVar4 = '\0';
            cVar1 = *param_3;
            pcVar4 = pcVar4 + 1;
          }
          else {
            lVar2 = lVar2 + -1;
          }
        }
        else {
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
        }
        param_3 = param_3 + 1;
      } while (cVar1 != '\0');
      *param_2 = *param_2 + lVar2;
      return 0;
    }
    uVar5 = 0xc;
  }
  return uVar5;
}

