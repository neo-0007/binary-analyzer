
bool FUN_004f8910(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar1 = FUN_004b8260();
    return lVar1 != 0;
  }
  FUN_0051f420(param_2);
  FUN_0051f540("../crypto/ec/ecp_mont.c",0x125,"ossl_ec_GFp_mont_field_set_to_one");
  FUN_0051f8f0(0x10,0x6f,0);
  return false;
}

