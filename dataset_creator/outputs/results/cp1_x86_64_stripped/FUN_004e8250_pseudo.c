
undefined8 FUN_004e8250(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x28) != 0) {
    uVar1 = FUN_004edb60();
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec_ameth.c",0x1b5,"ec_pkey_check");
  FUN_0051f8f0(0x10,0x7d,0);
  return 0;
}

