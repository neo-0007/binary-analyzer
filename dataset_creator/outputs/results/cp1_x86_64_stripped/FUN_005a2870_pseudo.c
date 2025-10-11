
bool FUN_005a2870(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  
  if (param_1 != (long *)0x0) {
    bVar2 = false;
    if (param_2 != 0) {
      FUN_004a06b0(*param_1);
      lVar1 = FUN_00424a40(param_2);
      bVar2 = lVar1 != 0;
      *param_1 = lVar1;
    }
    return bVar2;
  }
  return false;
}

