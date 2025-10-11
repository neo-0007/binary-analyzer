
long * FUN_00596c00(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0041aec0(0x58,"../crypto/ui/ui_lib.c",0x256);
  if (plVar2 != (long *)0x0) {
    lVar3 = FUN_0041c2c0(param_1,"../crypto/ui/ui_lib.c",599);
    *plVar2 = lVar3;
    if (lVar3 != 0) {
      iVar1 = FUN_004196b0(0xe,plVar2,plVar2 + 9);
      if (iVar1 != 0) {
        return plVar2;
      }
      lVar3 = *plVar2;
    }
    FUN_0041ad60(lVar3,"../crypto/ui/ui_lib.c",0x25b);
  }
  FUN_0041ad60(plVar2,"../crypto/ui/ui_lib.c",0x25c);
  FUN_0051f420();
  FUN_0051f540("../crypto/ui/ui_lib.c",0x25d,"UI_create_method");
  FUN_0051f8f0(0x28,0xc0100,0);
  return (long *)0x0;
}

