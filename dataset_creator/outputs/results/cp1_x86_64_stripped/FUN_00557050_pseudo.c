
undefined4
FUN_00557050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_004b0b80();
  lVar3 = FUN_004ab550(uVar2);
  if (lVar3 == 0) {
    FUN_0051f420();
    uVar1 = 0;
    FUN_0051f540("../crypto/pem/pem_lib.c",0x2a6,"PEM_read");
    FUN_0051f8f0(9,0x80007,0);
  }
  else {
    FUN_004abd40(lVar3,0x6a,0,param_1);
    uVar1 = FUN_00557040(lVar3,param_2,param_3,param_4,param_5);
    FUN_004ab560(lVar3);
  }
  return uVar1;
}

