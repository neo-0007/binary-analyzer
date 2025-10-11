
undefined8 FUN_004dafe0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  if ((param_1 != 0) && (lVar1 = param_2, param_2 != 0)) {
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar1 = FUN_0041c2c0(param_2,"../crypto/dso/dso_lib.c",0xf3);
      if (lVar1 != 0) {
        FUN_0041ad60(*(undefined8 *)(param_1 + 0x38),"../crypto/dso/dso_lib.c",0xf8);
        *(long *)(param_1 + 0x38) = lVar1;
        return 1;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/dso/dso_lib.c",0xf5,"DSO_set_filename");
      FUN_0051f8f0(0x25,0xc0100,0);
    }
    else {
      FUN_0051f420(param_2);
      FUN_0051f540("../crypto/dso/dso_lib.c",0xef,"DSO_set_filename");
      FUN_0051f8f0(0x25,0x6e,0);
    }
    return 0;
  }
  FUN_0051f420(lVar1);
  FUN_0051f540("../crypto/dso/dso_lib.c",0xeb,"DSO_set_filename");
  FUN_0051f8f0(0x25,0xc0102,0);
  return 0;
}

