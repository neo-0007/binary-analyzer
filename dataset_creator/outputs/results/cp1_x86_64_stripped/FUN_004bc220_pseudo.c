
undefined4 FUN_004bc220(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (-1 < param_3) {
    uVar1 = FUN_004bc0e0();
    FUN_004b8490(param_1);
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/bn/bn_shift.c",0x56,"BN_lshift");
  FUN_0051f8f0(3,0x77,0);
  return 0;
}

