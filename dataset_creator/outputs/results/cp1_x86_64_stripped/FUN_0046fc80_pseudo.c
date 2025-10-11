
bool FUN_0046fc80(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if ((((param_1 != 0) && (iVar1 != 0)) && ((param_2 & 7) != 0)) &&
     (iVar1 = FUN_004d8e70(param_1,param_3), iVar1 != 0)) {
    if ((param_2 & 3) == 0) {
      return true;
    }
    iVar1 = FUN_004d7c40(param_1,param_3,param_2 & 1);
    return iVar1 != 0;
  }
  return false;
}

