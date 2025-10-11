
undefined4
FUN_00556350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
            undefined8 param_9)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_004b0b80();
  lVar3 = FUN_004ab550(uVar2);
  if (lVar3 == 0) {
    FUN_0051f420();
    uVar1 = 0;
    FUN_0051f540("../crypto/pem/pem_lib.c",0x12e,"PEM_ASN1_write");
    FUN_0051f8f0(9,0x80007,0);
  }
  else {
    FUN_004abd40(lVar3,0x6a,0,param_3);
    uVar1 = FUN_00555e60(param_1,param_2,lVar3,param_4,param_5,param_6,param_7,param_8,param_9);
    FUN_004ab560(lVar3);
  }
  return uVar1;
}

