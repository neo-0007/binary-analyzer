
long FUN_005164c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00515b10();
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/encode_decode/decoder_pkey.c",0x1b3,"OSSL_DECODER_CTX_new_for_pkey");
    FUN_0051f8f0(0x3c,0xc0100,0);
  }
  else {
    iVar1 = FUN_00513650(lVar2);
    if ((((iVar1 != 0) && (iVar1 = FUN_005136b0(lVar2,param_3), iVar1 != 0)) &&
        (iVar1 = FUN_005135f0(lVar2,param_5), iVar1 != 0)) &&
       ((iVar1 = FUN_00516160(lVar2,param_1,param_4,param_6,param_7), iVar1 != 0 &&
        (iVar1 = FUN_00513e10(lVar2,param_6,param_7), iVar1 != 0)))) {
      return lVar2;
    }
    FUN_00515c80(lVar2);
  }
  return 0;
}

