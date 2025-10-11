
undefined8 FUN_004208d0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) &&
     (param_2 = FUN_0041c2c0(param_2,"../crypto/provider_core.c",0x321), param_2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/provider_core.c",0x323,"OSSL_PROVIDER_set_default_search_path");
    FUN_0051f8f0(0xf,0xc0100,0);
    return 0;
  }
  lVar2 = FUN_00417730(param_1,1,&DAT_008de180);
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/provider_core.c",0x154,"get_provider_store");
    FUN_0051f8f0(0xf,0xc0103,0);
  }
  else {
    iVar1 = FUN_004222c0(*(undefined8 *)(lVar2 + 0x18));
    if (iVar1 != 0) {
      FUN_0041ad60(*(undefined8 *)(lVar2 + 0x28),"../crypto/provider_core.c",0x329);
      *(long *)(lVar2 + 0x28) = param_2;
      FUN_004222e0(*(undefined8 *)(lVar2 + 0x18));
      return 1;
    }
  }
  FUN_0041ad60(param_2,"../crypto/provider_core.c",0x32e);
  return 0;
}

