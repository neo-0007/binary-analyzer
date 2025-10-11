
char FUN_0056a320(int param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = FUN_0042bcc0();
    *param_2 = lVar2;
    return (lVar2 != 0) * '\x02';
  }
  if (param_1 != 2) {
    if ((param_1 == 5) && (*(int *)(*param_2 + 0x10) == 1)) {
      iVar1 = FUN_0042d520();
      return (iVar1 == 1) * '\x02';
    }
    return '\x01';
  }
  FUN_0042b980(*param_2);
  *param_2 = 0;
  return '\x02';
}

