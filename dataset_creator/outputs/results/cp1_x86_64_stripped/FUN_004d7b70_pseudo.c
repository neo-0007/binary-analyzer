
char FUN_004d7b70(int param_1,long *param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_004d8c90();
    *param_2 = lVar1;
    return (lVar1 != 0) * '\x02';
  }
  if (param_1 != 2) {
    return '\x01';
  }
  FUN_004d8960(*param_2);
  *param_2 = 0;
  return '\x02';
}

