
bool FUN_004f5c50(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_0041aec0(0x40,"../crypto/ec/ec_pmeth.c",0x33);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_pmeth.c",0x34,"pkey_ec_init");
    FUN_0051f8f0(0x10,0xc0100,0);
  }
  else {
    *(undefined2 *)(lVar1 + 0x18) = 0x1ff;
    *(long *)(param_1 + 0x98) = lVar1;
  }
  return lVar1 != 0;
}

