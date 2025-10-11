
long * FUN_004db100(long *param_1,long param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  bVar1 = false;
  if (param_1 == (long *)0x0) {
    param_1 = (long *)FUN_004dabe0();
    if (param_1 == (long *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dso/dso_lib.c",0x75,"DSO_load");
      FUN_0051f8f0(0x25,0xc0100,0);
      return (long *)0x0;
    }
    lVar3 = FUN_004daeb0(param_1,2,(long)param_4,0);
    bVar1 = true;
    if (lVar3 < 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dso/dso_lib.c",0x7b,"DSO_load");
      FUN_0051f8f0(0x25,100,0);
      goto LAB_004db1b6;
    }
  }
  if (param_1[7] == 0) {
    if (param_2 == 0) {
LAB_004db180:
      FUN_0051f420();
      FUN_0051f540("../crypto/dso/dso_lib.c",0x90,"DSO_load");
      FUN_0051f8f0(0x25,0x6f,0);
    }
    else {
      iVar2 = FUN_004dafe0(param_1,param_2);
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/dso/dso_lib.c",0x8b,"DSO_load");
        FUN_0051f8f0(0x25,0x70,0);
      }
      else {
        if (param_1[7] == 0) goto LAB_004db180;
        if (*(code **)(*param_1 + 8) == (code *)0x0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/dso/dso_lib.c",0x94,"DSO_load");
          FUN_0051f8f0(0x25,0x6c,0);
        }
        else {
          iVar2 = (**(code **)(*param_1 + 8))(param_1);
          if (iVar2 != 0) {
            return param_1;
          }
          FUN_0051f420();
          FUN_0051f540("../crypto/dso/dso_lib.c",0x98,"DSO_load");
          FUN_0051f8f0(0x25,0x67,0);
        }
      }
    }
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../crypto/dso/dso_lib.c",0x82,"DSO_load");
    FUN_0051f8f0(0x25,0x6e,0);
  }
  if (!bVar1) {
    return (long *)0x0;
  }
LAB_004db1b6:
  FUN_004daaa0(param_1);
  return (long *)0x0;
}

