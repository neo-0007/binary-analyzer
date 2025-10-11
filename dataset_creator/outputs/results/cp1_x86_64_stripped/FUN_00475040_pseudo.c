
bool FUN_00475040(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    if ((param_2 & 0x83) == 0) {
      return true;
    }
    if ((((param_2 & 3) == 0) || (lVar2 = FUN_0042c510(param_1), lVar2 != 0)) &&
       (((param_2 & 2) == 0 || (lVar2 = FUN_0042c500(param_1), lVar2 != 0)))) {
      if ((param_2 & 1) != 0) {
        lVar2 = FUN_0042c520(param_1);
        return lVar2 != 0;
      }
      return true;
    }
  }
  return false;
}

