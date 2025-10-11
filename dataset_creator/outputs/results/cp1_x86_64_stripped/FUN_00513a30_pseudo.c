
undefined4 FUN_00513a30(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/encode_decode/decoder_lib.c",0x13e,"OSSL_DECODER_CTX_add_decoder");
    FUN_0051f8f0(0x3c,0xc0102,0);
    return 0;
  }
  uVar3 = FUN_00515780(param_2);
  uVar3 = thunk_FUN_00420cb0(uVar3);
  lVar4 = (**(code **)(param_2 + 0x38))(uVar3);
  if (lVar4 == 0) {
    FUN_00513710(0);
    uVar2 = 0;
  }
  else {
    lVar5 = FUN_00513770(param_2,lVar4);
    if (lVar5 == 0) {
      FUN_00513710(0);
      (**(code **)(param_2 + 0x40))(lVar4);
      return 0;
    }
    iVar1 = FUN_005139b0(param_1,lVar5);
    if (iVar1 == 0) {
      FUN_00513710(lVar5);
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

