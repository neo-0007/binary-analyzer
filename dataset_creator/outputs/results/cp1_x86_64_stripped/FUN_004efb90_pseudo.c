
long * FUN_004efb90(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  
  if (param_1 == (long *)0x0) {
    FUN_0051f420();
    plVar4 = (long *)0x0;
    FUN_0051f540("../crypto/ec/ec_lib.c",0x2d1,"EC_POINT_new");
    FUN_0051f8f0(0x10,0xc0102,0);
  }
  else if (*(long *)(*param_1 + 0x50) == 0) {
    FUN_0051f420();
    plVar4 = (long *)0x0;
    FUN_0051f540("../crypto/ec/ec_lib.c",0x2d5,"EC_POINT_new");
    FUN_0051f8f0(0x10,0xc0101,0);
  }
  else {
    plVar4 = (long *)FUN_0041aec0(0x30,"../crypto/ec/ec_lib.c",0x2d9);
    if (plVar4 == (long *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_lib.c",0x2db,"EC_POINT_new");
      FUN_0051f8f0(0x10,0xc0100,0);
    }
    else {
      lVar1 = *param_1;
      lVar2 = param_1[4];
      *plVar4 = lVar1;
      *(int *)(plVar4 + 1) = (int)lVar2;
      iVar3 = (**(code **)(lVar1 + 0x50))(plVar4);
      if (iVar3 == 0) {
        FUN_0041ad60(plVar4,"../crypto/ec/ec_lib.c",0x2e3);
        plVar4 = (long *)0x0;
      }
    }
  }
  return plVar4;
}

