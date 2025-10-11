
undefined8
FUN_0051c190(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_pkey.c",0x79,"ENGINE_load_ssl_client_cert");
    FUN_0051f8f0(0x26,0xc0102,0);
  }
  else {
    iVar1 = FUN_004222c0(DAT_00941008);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0xa0) == 0) {
        FUN_004222e0(DAT_00941008);
        FUN_0051f420();
        FUN_0051f540("../crypto/engine/eng_pkey.c",0x80,"ENGINE_load_ssl_client_cert");
        FUN_0051f8f0(0x26,0x75,0);
      }
      else {
        FUN_004222e0(DAT_00941008);
        if (*(code **)(param_1 + 0x88) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0051c244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(param_1 + 0x88))(param_1,param_2,param_3,param_4,param_5,param_6);
          return uVar2;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/engine/eng_pkey.c",0x85,"ENGINE_load_ssl_client_cert");
        FUN_0051f8f0(0x26,0x7d,0);
      }
    }
  }
  return 0;
}

