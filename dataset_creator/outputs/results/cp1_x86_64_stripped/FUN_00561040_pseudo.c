
undefined8 FUN_00561040(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0055d690();
  if (lVar2 != 0) {
    iVar1 = FUN_00560e50(lVar2,param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_00560da0(param_1,lVar2);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  FUN_0055d6b0(lVar2);
  return 0;
}

