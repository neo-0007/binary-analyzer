
undefined8 FUN_004122e0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(long *)(param_1 + 6) != 0) {
      FUN_00412da0();
      if (*(long *)(param_1 + 8) != 0) {
        *param_1 = 8;
        return 1;
      }
    }
    *param_1 = 0;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/pmeth_gn.c",0x162,"fromdata_init");
  FUN_0051f8f0(6,0x96,0);
  return 0xfffffffe;
}

