
undefined4
FUN_00558120(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_004b0cd0(param_1,0);
  if (lVar2 == 0) {
    FUN_0051f420();
    uVar1 = 0;
    FUN_0051f540("../crypto/pem/pem_pk8.c",0xf4,"do_pk8pkey_fp");
    FUN_0051f8f0(9,0x80007,0);
  }
  else {
    uVar1 = FUN_00557c00(lVar2,param_2,0,param_3,0,param_4,param_5,param_6,param_7);
    FUN_004ab560(lVar2);
  }
  return uVar1;
}

