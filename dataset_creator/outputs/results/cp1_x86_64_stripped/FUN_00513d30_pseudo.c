
undefined8 FUN_00513d30(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) && (param_5 != 0)) {
    lVar1 = FUN_00513cf0();
    uVar2 = FUN_00513d10(param_1);
                    /* WARNING: Could not recover jumptable at 0x00513d96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x78))(uVar2,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0x276,"OSSL_DECODER_export");
  FUN_0051f8f0(0x3c,0xc0102,0);
  return 0;
}

