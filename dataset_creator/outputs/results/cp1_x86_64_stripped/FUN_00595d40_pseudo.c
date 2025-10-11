
long * FUN_00595d40(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0041aec0(0x38,"../crypto/ui/ui_lib.c",0x19);
  if (plVar2 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ui/ui_lib.c",0x1c,"UI_new_method");
    FUN_0051f8f0(0x28,0xc0100,0);
  }
  else {
    lVar3 = FUN_00422240();
    plVar2[6] = lVar3;
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ui/ui_lib.c",0x22,"UI_new_method");
      FUN_0051f8f0(0x28,0xc0100,0);
      FUN_0041ad60(plVar2,"../crypto/ui/ui_lib.c",0x23);
      plVar2 = (long *)0x0;
    }
    else {
      if (param_1 == 0) {
        param_1 = FUN_00597ac0();
        if (param_1 == 0) {
          param_1 = FUN_00597330();
        }
      }
      *plVar2 = param_1;
      iVar1 = FUN_004196b0(0xb,plVar2,plVar2 + 3);
      if (iVar1 == 0) {
        FUN_00595cd0(plVar2);
        plVar2 = (long *)0x0;
      }
    }
  }
  return plVar2;
}

