
long * FUN_00428060(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_0041aec0(0x20,"../crypto/property/property_string.c",0x57);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar2 = FUN_00422240();
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_00545610(FUN_00427c70,FUN_00427c60);
    plVar1[1] = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_00545610(FUN_00427c70,FUN_00427c60);
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        return plVar1;
      }
    }
  }
  FUN_00427fb0(plVar1);
  return (long *)0x0;
}

