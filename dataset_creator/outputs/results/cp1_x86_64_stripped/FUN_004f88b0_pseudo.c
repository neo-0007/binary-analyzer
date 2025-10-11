
undefined8 FUN_004f88b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar1 = FUN_004b96f0();
    return uVar1;
  }
  FUN_0051f420(param_2,param_3);
  FUN_0051f540("../crypto/ec/ecp_mont.c",0x11a,"ossl_ec_GFp_mont_field_decode");
  FUN_0051f8f0(0x10,0x6f,0);
  return 0;
}

