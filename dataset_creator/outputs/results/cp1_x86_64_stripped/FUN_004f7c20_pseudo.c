
undefined4 FUN_004f7c20(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_004b0b80();
  lVar3 = FUN_004ab550(uVar2);
  if (lVar3 != 0) {
    FUN_004abd40(lVar3,0x6a,0,param_1);
    uVar1 = FUN_004e83e0(lVar3,param_2);
    FUN_004ab560(lVar3);
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/eck_prn.c",0x39,"ECParameters_print_fp");
  FUN_0051f8f0(0x10,0x80020,0);
  return 0;
}

