
long FUN_004db3d0(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    FUN_0051f420();
    lVar2 = 0;
    FUN_0051f540("../crypto/dso/dso_lib.c",0x113,"DSO_convert_filename");
    FUN_0051f8f0(0x25,0xc0102,0);
  }
  else if ((param_2 == 0) && (param_2 = param_1[7], param_2 == 0)) {
    FUN_0051f420();
    lVar2 = 0;
    FUN_0051f540("../crypto/dso/dso_lib.c",0x119,"DSO_convert_filename");
    FUN_0051f8f0(0x25,0x6f,0);
  }
  else {
    if (((*(byte *)((long)param_1 + 0x14) & 1) == 0) &&
       (((pcVar1 = (code *)param_1[5], pcVar1 != (code *)0x0 ||
         (pcVar1 = *(code **)(*param_1 + 0x28), pcVar1 != (code *)0x0)) &&
        (lVar2 = (*pcVar1)(param_1,param_2), lVar2 != 0)))) {
      return lVar2;
    }
    lVar2 = FUN_0041c2c0(param_2,"../crypto/dso/dso_lib.c",0x123);
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dso/dso_lib.c",0x125,"DSO_convert_filename");
      FUN_0051f8f0(0x25,0xc0100,0);
    }
  }
  return lVar2;
}

