
bool FUN_0060aed0(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return false;
  }
  if (param_2 == 0) {
    lVar1 = *param_1;
  }
  else {
    if (param_2 != 1) {
      return false;
    }
    lVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  if (lVar1 == 0) {
    lVar1 = FUN_0060adf0();
    *param_1 = lVar1;
    if (lVar1 != 0) {
      lVar2 = FUN_004a7e50();
      *(long *)(lVar1 + 8) = lVar2;
      if (lVar2 != 0) {
        *(undefined4 *)*param_1 = 0;
        return true;
      }
    }
    return false;
  }
  return *(int *)*param_1 == 0;
}

