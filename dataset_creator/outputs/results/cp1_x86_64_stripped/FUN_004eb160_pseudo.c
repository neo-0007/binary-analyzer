
undefined8 FUN_004eb160(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0041c9c0(param_2,"default");
    if (iVar1 == 0) {
      lVar2 = 0;
    }
    else {
      iVar1 = FUN_0041c9c0(param_2,"named");
      if (iVar1 == 0) {
        lVar2 = 1;
      }
      else {
        iVar1 = FUN_0041c9c0(param_2,"named-nist");
        if (iVar1 != 0) {
          return 0;
        }
        lVar2 = 2;
      }
    }
    iVar1 = (&DAT_00903600)[lVar2 * 4];
    if (iVar1 == -1) {
      return 0;
    }
  }
  FUN_004ee930(param_1,0x6000);
  FUN_004ee8a0(param_1,iVar1);
  return 1;
}

