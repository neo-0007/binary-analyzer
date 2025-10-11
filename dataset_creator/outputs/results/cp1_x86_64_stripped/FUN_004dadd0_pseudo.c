
long FUN_004dadd0(long *param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    FUN_0051f420();
    lVar1 = 0;
    FUN_0051f540("../crypto/dso/dso_lib.c",0xa8,"DSO_bind_func");
    FUN_0051f8f0(0x25,0xc0102,0);
  }
  else if (*(code **)(*param_1 + 0x18) == (code *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dso/dso_lib.c",0xac,"DSO_bind_func");
    FUN_0051f8f0(0x25,0x6c,0);
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x18))();
    if (lVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dso/dso_lib.c",0xb0,"DSO_bind_func");
      FUN_0051f8f0(0x25,0x6a,0);
    }
  }
  return lVar1;
}

