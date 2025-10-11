
long FUN_0041c4d0(char *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_3 != 0) {
    do {
      if (*param_1 == '\0') {
        lVar1 = FUN_0041c470(param_1,param_2,param_3 - lVar2);
        return lVar1 + lVar2;
      }
      lVar2 = lVar2 + 1;
      param_1 = param_1 + 1;
    } while (param_3 != lVar2);
  }
  lVar2 = FUN_0041c470(param_1,param_2,0);
  return lVar2 + param_3;
}

