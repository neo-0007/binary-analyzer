
undefined8
FUN_00558b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_004b0b80();
  lVar2 = FUN_004ab550(uVar1);
  if (lVar2 == 0) {
    FUN_0051f420();
    uVar1 = 0;
    FUN_0051f540("../crypto/pem/pem_pkey.c",0x115,"PEM_read_PUBKEY_ex");
    FUN_0051f8f0(9,0x80007,0);
  }
  else {
    FUN_004abd40(lVar2,0x6a,0,param_1);
    uVar1 = FUN_00558b30(lVar2,param_2,param_3,param_4,param_5,param_6);
    FUN_004ab560(lVar2);
  }
  return uVar1;
}

