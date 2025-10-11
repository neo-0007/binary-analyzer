
long FUN_004f07c0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_004efb90(param_2);
    if (lVar2 != 0) {
      iVar1 = FUN_004efec0(lVar2,param_1);
      if (iVar1 != 0) {
        return lVar2;
      }
      FUN_004efcc0(lVar2);
    }
  }
  return 0;
}

