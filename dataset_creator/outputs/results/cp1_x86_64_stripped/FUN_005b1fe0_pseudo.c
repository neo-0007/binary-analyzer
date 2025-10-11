
long * FUN_005b1fe0(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)FUN_0041aec0(0x10,"../providers/implementations/rands/drbg.c",0x117);
  plVar3 = plVar1;
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_00422240();
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      plVar3 = (long *)0x0;
      FUN_0041ad60(plVar1,"../providers/implementations/rands/drbg.c",0x11e);
    }
  }
  return plVar3;
}

