
long * FUN_004dabe0(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0041aec0(0x50,"../crypto/dso/dso_lib.c",0x11);
  if (plVar2 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dso/dso_lib.c",0x13,"DSO_new_method");
    FUN_0051f8f0(0x25,0xc0100,0);
  }
  else {
    lVar3 = FUN_00436410();
    plVar2[1] = lVar3;
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dso/dso_lib.c",0x19,"DSO_new_method");
      FUN_0051f8f0(0x25,0xc0100,0);
      FUN_0041ad60(plVar2,"../crypto/dso/dso_lib.c",0x1a);
      plVar2 = (long *)0x0;
    }
    else {
      lVar3 = FUN_005cd6a0();
      *plVar2 = lVar3;
      LOCK();
      *(undefined4 *)(plVar2 + 2) = 1;
      UNLOCK();
      lVar3 = FUN_00422240();
      plVar2[9] = lVar3;
      if (lVar3 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/dso/dso_lib.c",0x21,"DSO_new_method");
        FUN_0051f8f0(0x25,0xc0100,0);
        FUN_004360b0(plVar2[1]);
        FUN_0041ad60(plVar2,"../crypto/dso/dso_lib.c",0x23);
        plVar2 = (long *)0x0;
      }
      else if (*(code **)(*plVar2 + 0x38) != (code *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2);
        if (iVar1 == 0) {
          FUN_004daaa0(plVar2);
          plVar2 = (long *)0x0;
        }
      }
    }
  }
  return plVar2;
}

