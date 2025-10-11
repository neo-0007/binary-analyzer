
undefined8 FUN_004d2880(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x70) != 0) {
    uVar1 = FUN_004d42a0();
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/dh/dh_ameth.c",0x1a7,"dh_pkey_public_check");
  FUN_0051f8f0(5,0x7d,0);
  return 0;
}

