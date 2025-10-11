
long FUN_0041c890(undefined8 param_1,long param_2,char param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != 0) {
    if (param_3 == '\0') {
      lVar3 = param_2 * 2 + 1;
    }
    else {
      lVar3 = param_2 * 3;
    }
    lVar2 = FUN_0041ad90(lVar3,"../crypto/o_str.c",0x113);
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/o_str.c",0x114,"ossl_buf2hexstr_sep");
      FUN_0051f8f0(0xf,0xc0100,0);
    }
    else {
      iVar1 = FUN_0041c1d0(lVar2,lVar3,0,param_1,param_2,(int)param_3);
      if (iVar1 == 0) {
        FUN_0041ad60(lVar2,"../crypto/o_str.c",0x11a);
        lVar2 = 0;
      }
    }
    return lVar2;
  }
  lVar3 = FUN_0041aec0(1,"../crypto/o_str.c",0x110);
  return lVar3;
}

