
undefined4
FUN_005591b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_004b0cd0(param_1,0);
  if (lVar2 == 0) {
    FUN_0051f420();
    uVar1 = 0;
    FUN_0051f540("../crypto/pem/pem_pkey.c",0x19e,"PEM_write_PrivateKey_ex");
    FUN_0051f8f0(9,0x80007,0);
  }
  else {
    uVar1 = FUN_00558dd0(lVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    FUN_004ab560(lVar2);
  }
  return uVar1;
}

