
char FUN_004d3070(int param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = FUN_004d5e70();
    *param_2 = lVar2;
    return (lVar2 != 0) * '\x02';
  }
  if (param_1 == 2) {
    FUN_004d5b70(*param_2);
    *param_2 = 0;
    cVar1 = '\x02';
  }
  else {
    cVar1 = '\x01';
    if (param_1 == 5) {
      lVar2 = *param_2;
      FUN_004d6100(lVar2,0xf000);
      FUN_004d6120(lVar2,0);
      FUN_004d4a80(lVar2);
      *(long *)(lVar2 + 200) = *(long *)(lVar2 + 200) + 1;
      return '\x01';
    }
  }
  return cVar1;
}

