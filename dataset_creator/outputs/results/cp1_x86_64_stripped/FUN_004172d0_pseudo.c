
long * FUN_004172d0(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0041aec0(0x1c8,"../crypto/context.c",0xc0);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar3 = FUN_00422240();
  *plVar2 = lVar3;
  if ((lVar3 != 0) && (iVar1 = FUN_00417120(plVar2), iVar1 != 0)) {
    return plVar2;
  }
  FUN_0041ad60(plVar2,"../crypto/context.c",0xc3);
  return (long *)0x0;
}

