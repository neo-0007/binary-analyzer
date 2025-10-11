
long FUN_004eecb0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_004eea50(param_1,0,0);
  if (lVar1 != 0) {
    lVar2 = FUN_0041ad90(lVar1,"../crypto/ec/ec_key.c",0x3c7);
    if (lVar2 == 0) {
      FUN_0051f420();
      lVar1 = 0;
      FUN_0051f540("../crypto/ec/ec_key.c",0x3c8,"EC_KEY_priv2buf");
      FUN_0051f8f0(0x10,0xc0100,0);
    }
    else {
      lVar1 = FUN_004eea50(param_1,lVar2,lVar1);
      if (lVar1 != 0) {
        *param_2 = lVar2;
        return lVar1;
      }
      FUN_0041ad60(lVar2,"../crypto/ec/ec_key.c",0x3cd);
      lVar1 = 0;
    }
  }
  return lVar1;
}

