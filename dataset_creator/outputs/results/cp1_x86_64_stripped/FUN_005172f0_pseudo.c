
undefined4 FUN_005172f0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_004b0b80();
  lVar3 = FUN_004ab550(uVar2);
  if (lVar3 == 0) {
    FUN_0051f420();
    uVar1 = 0;
    FUN_0051f540("../crypto/encode_decode/encoder_lib.c",0x47,"bio_from_file");
    FUN_0051f8f0(0x3b,0x80007,0);
  }
  else {
    FUN_004abd40(lVar3,0x6a,0,param_2);
    uVar1 = FUN_00517230(param_1,lVar3);
  }
  FUN_004ab560(lVar3);
  return uVar1;
}

