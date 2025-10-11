
undefined8 FUN_00458ac0(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if (in_RCX == 0) {
    if ((in_R8 & 1) != 0) {
      uVar1 = FUN_00456330();
      return uVar1;
    }
    if ((in_R8 & 2) != 0) {
      uVar1 = FUN_00456330();
      return uVar1;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x596,
               "rsa_to_RSA_der_encode");
  FUN_0051f8f0(0x39,0x80106,0);
  return 0;
}

