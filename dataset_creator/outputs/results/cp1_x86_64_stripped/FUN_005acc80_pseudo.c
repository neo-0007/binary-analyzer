
undefined8 FUN_005acc80(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_0041aec0(0x28,"../crypto/x509/x_name.c",0x5c);
  if (plVar1 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x_name.c",0x69,"x509_name_ex_new");
    FUN_0051f8f0(0xd,0xc0100,0);
    return 0;
  }
  lVar2 = FUN_00436410();
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_004c4f60();
    plVar1[2] = lVar2;
    if (lVar2 != 0) {
      *(undefined4 *)(plVar1 + 1) = 1;
      *param_1 = plVar1;
      return 1;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/x_name.c",0x69,"x509_name_ex_new");
  FUN_0051f8f0(0xd,0xc0100,0);
  FUN_004360b0(*plVar1);
  FUN_0041ad60(plVar1,"../crypto/x509/x_name.c",0x6c);
  return 0;
}

