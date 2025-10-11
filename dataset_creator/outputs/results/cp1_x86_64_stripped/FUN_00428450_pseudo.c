
long * FUN_00428450(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0041aec0(0x50,"../crypto/rand/rand_lib.c",0x1b8);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  FUN_00419fe0(0x40000,0);
  lVar3 = FUN_00422240();
  *plVar2 = lVar3;
  if (lVar3 != 0) {
    iVar1 = FUN_00422360((long)plVar2 + 0x1c,0);
    if (iVar1 != 0) {
      iVar1 = FUN_00422360(plVar2 + 3,0);
      if (iVar1 != 0) {
        return plVar2;
      }
      FUN_004223b0((long)plVar2 + 0x1c);
    }
    lVar3 = *plVar2;
  }
  FUN_00422300(lVar3);
  FUN_0041ad60(plVar2,"../crypto/rand/rand_lib.c",0x1d5);
  return (long *)0x0;
}

