
long * FUN_0041f340(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_0041aec0(0x10,"../crypto/provider_core.c",0x100);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (*param_1 != 0) {
    lVar2 = FUN_0041c2c0(*param_1,"../crypto/provider_core.c",0x105);
    *plVar1 = lVar2;
    if (lVar2 == 0) goto LAB_0041f3bc;
  }
  if (param_1[1] == 0) {
    return plVar1;
  }
  lVar2 = FUN_0041c2c0(param_1[1],"../crypto/provider_core.c",0x10a);
  plVar1[1] = lVar2;
  if (lVar2 != 0) {
    return plVar1;
  }
  lVar2 = *plVar1;
LAB_0041f3bc:
  FUN_0041ad60(lVar2,"../crypto/provider_core.c",0x110);
  FUN_0041ad60(plVar1,"../crypto/provider_core.c",0x111);
  return (long *)0x0;
}

