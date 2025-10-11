
long FUN_004f0340(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = FUN_004ef460(param_1[0x15],param_1[0x16],*param_1);
    if (lVar2 != 0) {
      iVar1 = FUN_004eff90(lVar2,param_1);
      if (iVar1 != 0) {
        return lVar2;
      }
      FUN_004efd00(lVar2);
    }
  }
  return 0;
}

