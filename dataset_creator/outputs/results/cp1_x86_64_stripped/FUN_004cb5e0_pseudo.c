
long * FUN_004cb5e0(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_0041ad90(0x90,"../crypto/cmac/cmac.c",0x38);
  if (plVar1 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/cmac/cmac.c",0x39,"CMAC_CTX_new");
    FUN_0051f8f0(0xf,0xc0100,0);
  }
  else {
    lVar2 = FUN_00535890();
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      FUN_0041ad60(plVar1,"../crypto/cmac/cmac.c",0x3e);
      plVar1 = (long *)0x0;
    }
    else {
      *(undefined4 *)(plVar1 + 0x11) = 0xffffffff;
    }
  }
  return plVar1;
}

