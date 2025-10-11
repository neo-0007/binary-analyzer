
long * FUN_00602d90(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)FUN_0041aec0(0x10,"../crypto/provider_conf.c",0x1f);
  plVar3 = plVar1;
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_00422240();
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      plVar3 = (long *)0x0;
      FUN_0041ad60(plVar1,"../crypto/provider_conf.c",0x26);
    }
  }
  return plVar3;
}

