
void FUN_0051a5b0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if (DAT_00941018 == 0) {
    DAT_00941018 = FUN_00436410();
    if (DAT_00941018 == 0) {
      return;
    }
  }
  puVar1 = (undefined8 *)FUN_0041ad90(8,"../crypto/engine/eng_lib.c",0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    FUN_00435d80(DAT_00941018,puVar1,0);
    return;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/engine/eng_lib.c",0x81,"int_cleanup_item");
  FUN_0051f8f0(0x26,0xc0100,0);
  return;
}

