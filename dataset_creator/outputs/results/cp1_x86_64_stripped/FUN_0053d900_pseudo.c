
long FUN_0053d900(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar2 = FUN_0040ec60();
    if (lVar2 != 0) {
      iVar1 = FUN_0053d870(lVar2,param_1,param_2);
      if (iVar1 != 0) {
        return lVar2;
      }
      goto LAB_0053d94b;
    }
  }
  lVar2 = 0;
LAB_0053d94b:
  FUN_0040f4f0(lVar2);
  return 0;
}

