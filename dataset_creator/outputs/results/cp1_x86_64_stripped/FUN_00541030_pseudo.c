
undefined8 FUN_00541030(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0040e590();
  if (iVar1 == 0x198) {
    uVar2 = FUN_00410840(param_1);
    return uVar2;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/p_legacy.c",0x48,"evp_pkey_get0_EC_KEY_int");
  FUN_0051f8f0(6,0x8e,0);
  return 0;
}

