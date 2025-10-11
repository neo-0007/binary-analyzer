
undefined8 FUN_00420550(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00417730(param_1,1,&DAT_008de180);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/provider_core.c",0x154,"get_provider_store");
    FUN_0051f8f0(0xf,0xc0103,0);
    return 0;
  }
  uVar2 = FUN_004222c0(*(undefined8 *)(lVar1 + 0x20));
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  *(byte *)(lVar1 + 0x48) = *(byte *)(lVar1 + 0x48) & 0xfe;
  FUN_004222e0(*(undefined8 *)(lVar1 + 0x20));
  return 1;
}

