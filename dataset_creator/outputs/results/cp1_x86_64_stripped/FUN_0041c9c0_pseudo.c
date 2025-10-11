
int FUN_0041c9c0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar2 = FUN_00546710((int)*param_1);
    iVar3 = FUN_00546710((int)*param_2);
    if (iVar2 - iVar3 != 0) {
      return iVar2 - iVar3;
    }
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return 0;
}

