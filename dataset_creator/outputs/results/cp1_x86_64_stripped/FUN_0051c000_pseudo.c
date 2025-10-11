
long FUN_0051c000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    FUN_0051f420();
    lVar2 = 0;
    FUN_0051f540("../crypto/engine/eng_pkey.c",0x5b,"ENGINE_load_public_key");
    FUN_0051f8f0(0x26,0xc0102,0);
  }
  else {
    iVar1 = FUN_004222c0(DAT_00941008);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xa0) == 0) {
      FUN_004222e0(DAT_00941008);
      FUN_0051f420();
      FUN_0051f540("../crypto/engine/eng_pkey.c",0x62,"ENGINE_load_public_key");
      FUN_0051f8f0(0x26,0x75,0);
      return 0;
    }
    FUN_004222e0(DAT_00941008);
    if (*(code **)(param_1 + 0x80) == (code *)0x0) {
      FUN_0051f420();
      lVar2 = 0;
      FUN_0051f540("../crypto/engine/eng_pkey.c",0x67,"ENGINE_load_public_key");
      FUN_0051f8f0(0x26,0x7d,0);
    }
    else {
      lVar2 = (**(code **)(param_1 + 0x80))(param_1,param_2,param_3,param_4);
      if (lVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/engine/eng_pkey.c",0x6c,"ENGINE_load_public_key");
        FUN_0051f8f0(0x26,0x81,0);
      }
    }
  }
  return lVar2;
}

