
undefined8 FUN_0060bd60(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    return 1;
  }
  if ((param_1 != 0) && (iVar1 = FUN_00436480(), iVar1 != 0)) {
    if ((param_3 == 0) && (iVar1 = FUN_0060bc40(param_2), iVar1 != 0)) {
      return 0;
    }
    uVar2 = FUN_0060b160(0,param_1,param_2);
    return uVar2;
  }
  return 0;
}

