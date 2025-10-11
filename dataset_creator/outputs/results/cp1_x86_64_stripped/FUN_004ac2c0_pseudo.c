
long FUN_004ac2c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  if (param_1 == 0) {
    return param_2;
  }
  do {
    lVar2 = lVar1;
    lVar1 = *(long *)(lVar2 + 0x48);
  } while (*(long *)(lVar2 + 0x48) != 0);
  *(long *)(lVar2 + 0x48) = param_2;
  if (param_2 != 0) {
    *(long *)(param_2 + 0x50) = lVar2;
  }
  FUN_004abd40(param_1,6,0);
  return param_1;
}

