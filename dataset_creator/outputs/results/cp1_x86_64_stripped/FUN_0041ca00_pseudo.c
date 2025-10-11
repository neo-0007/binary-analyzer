
int FUN_0041ca00(char *param_1,char *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_3 != 0) {
    pcVar4 = param_1;
    do {
      iVar1 = FUN_00546710((int)*pcVar4);
      iVar2 = FUN_00546710((int)*param_2);
      if (iVar1 - iVar2 != 0) {
        return iVar1 - iVar2;
      }
      pcVar3 = pcVar4 + 1;
    } while ((*pcVar4 != '\0') &&
            (pcVar4 = pcVar3, param_2 = param_2 + 1, param_1 + param_3 != pcVar3));
  }
  return 0;
}

