
bool FUN_00474ec0(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
    return false;
  }
  if ((param_2 & 0x83) != 0) {
    if ((param_2 & 3) == 3) {
      iVar1 = FUN_0056b000(param_1);
      return iVar1 != 0;
    }
    if (((param_2 & 1) != 0) && (iVar1 = thunk_FUN_0056d6c0(param_1), iVar1 == 0)) {
      return false;
    }
    if ((param_2 & 2) != 0) {
      iVar1 = thunk_FUN_0056d470(param_1);
      return iVar1 != 0;
    }
  }
  return true;
}

