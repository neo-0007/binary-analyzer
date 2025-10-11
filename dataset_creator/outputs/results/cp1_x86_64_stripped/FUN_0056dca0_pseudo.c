
undefined8 FUN_0056dca0(undefined8 param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = FUN_0042bd50();
  if ((param_2 != 0xffffffff) && (uVar1 != param_2)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_sp800_56b_gen.c",0xb8,"ossl_rsa_sp800_56b_validate_strength");
    FUN_0051f8f0(4,0xb0,0);
    return 0;
  }
  return 1;
}

