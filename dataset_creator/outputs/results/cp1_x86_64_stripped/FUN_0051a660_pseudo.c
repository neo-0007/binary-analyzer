
void FUN_0051a660(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((DAT_00941018 != 0) || (DAT_00941018 = FUN_00436410(), DAT_00941018 != 0)) {
    puVar2 = (undefined8 *)FUN_0041ad90(8,"../crypto/engine/eng_lib.c",0x80);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/engine/eng_lib.c",0x81,"int_cleanup_item");
      FUN_0051f8f0(0x26,0xc0100,0);
      return;
    }
    *puVar2 = param_1;
    iVar1 = FUN_00435f80(DAT_00941018,puVar2);
    if (iVar1 < 1) {
      FUN_0041ad60(puVar2,"../crypto/engine/eng_lib.c",0x9b);
      return;
    }
  }
  return;
}

