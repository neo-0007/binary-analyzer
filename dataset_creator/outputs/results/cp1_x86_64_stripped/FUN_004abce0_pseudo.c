
undefined8 FUN_004abce0(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (param_2 <= param_3) {
    param_3 = param_2;
  }
  do {
    if (param_3 == 0) {
      return 1;
    }
    iVar1 = FUN_004ab870(param_1,&DAT_0081d1a9);
    param_3 = param_3 + -1;
  } while (iVar1 == 1);
  return 0;
}

