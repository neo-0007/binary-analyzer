
bool FUN_00471590(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0043b840();
  if ((param_1 != 0) && (iVar1 != 0)) {
    if ((param_2 & 0x87) == 0) {
      return true;
    }
    if ((((param_2 & 2) == 0) || (lVar2 = FUN_004ee3f0(param_1), lVar2 != 0)) &&
       (((param_2 & 1) == 0 || (lVar2 = FUN_004ee2e0(param_1), lVar2 != 0)))) {
      if ((param_2 & 4) != 0) {
        lVar2 = FUN_004ee2d0(param_1);
        return lVar2 != 0;
      }
      return true;
    }
  }
  return false;
}

