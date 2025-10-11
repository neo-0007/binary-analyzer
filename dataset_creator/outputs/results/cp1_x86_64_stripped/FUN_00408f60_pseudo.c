
long FUN_00408f60(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)FUN_00425350();
  if (puVar1 == (undefined8 *)0x0) {
    lVar2 = FUN_0041c2c0(&DAT_0083e5c2,"../crypto/evp/evp_fetch.c",0x245);
    return lVar2;
  }
  lVar2 = FUN_004275f0(param_1,*puVar1,0,0);
  if (lVar2 != 0) {
    lVar3 = FUN_0041ad90(lVar2,"../crypto/evp/evp_fetch.c",0x24d);
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/evp_fetch.c",0x24f,"evp_get_global_properties_str");
      FUN_0051f8f0(6,0xc0100,0);
    }
    else {
      lVar2 = FUN_004275f0(param_1,*puVar1,lVar3,lVar2);
      if (lVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/evp_fetch.c",0x253,"evp_get_global_properties_str");
        FUN_0051f8f0(6,0xc0103,0);
        FUN_0041ad60(lVar3,"../crypto/evp/evp_fetch.c",0x254);
        lVar3 = 0;
      }
    }
    return lVar3;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/evp_fetch.c",0x249,"evp_get_global_properties_str");
  FUN_0051f8f0(6,0xc0103,0);
  return 0;
}

