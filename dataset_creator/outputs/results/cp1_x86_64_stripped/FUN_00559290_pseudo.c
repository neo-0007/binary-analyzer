
long FUN_00559290(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_2 != 6) && (param_2 != 0x74)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pem/pvkfmt.c",0x52,"evp_pkey_new0_key");
    FUN_0051f8f0(9,0xc0103,0);
    return 0;
  }
  lVar2 = FUN_0040ec60();
  if (lVar2 == 0) {
    if (param_2 == 6) {
      FUN_0042b980(param_1);
    }
    else {
      FUN_004d8960(param_1);
    }
  }
  else if (param_2 == 6) {
    iVar1 = FUN_00540ed0(lVar2,param_1);
    if (iVar1 != 0) {
      FUN_0042b980(param_1);
      return lVar2;
    }
    FUN_0040f4f0(lVar2);
    FUN_0042b980(param_1);
  }
  else {
    iVar1 = FUN_0040f330();
    if (iVar1 != 0) {
      FUN_004d8960(param_1);
      return lVar2;
    }
    FUN_0040f4f0(lVar2);
    FUN_004d8960(param_1);
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/pem/pvkfmt.c",0x75,"evp_pkey_new0_key");
  FUN_0051f8f0(9,0xc0100,0);
  return 0;
}

