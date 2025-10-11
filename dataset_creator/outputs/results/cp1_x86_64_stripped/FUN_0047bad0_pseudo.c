
bool FUN_0047bad0(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x40) == 0)) {
    lVar1 = FUN_00422240();
    *(long *)(param_1 + 0x40) = lVar1;
    if (lVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/rands/test_rng.c",0xf9,"test_rng_enable_locking");
      FUN_0051f8f0(0x39,0x7e,0);
    }
    return lVar1 != 0;
  }
  return true;
}

