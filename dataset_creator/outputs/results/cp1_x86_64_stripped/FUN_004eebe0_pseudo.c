
bool FUN_004eebe0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar1 = FUN_004b7700(param_2);
    *(long *)(param_1 + 0x28) = lVar1;
    if (lVar1 == 0) {
      FUN_0051f420(param_2);
      FUN_0051f540("../crypto/ec/ec_key.c",0x3b3,"ossl_ec_key_simple_oct2priv");
      FUN_0051f8f0(0x10,0xc0100,0);
      return false;
    }
  }
  lVar1 = FUN_004b84d0(param_2,param_3);
  *(long *)(param_1 + 0x28) = lVar1;
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_key.c",0x3b8,"ossl_ec_key_simple_oct2priv");
    FUN_0051f8f0(0x10,0x80003,0);
  }
  else {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  }
  return lVar1 != 0;
}

