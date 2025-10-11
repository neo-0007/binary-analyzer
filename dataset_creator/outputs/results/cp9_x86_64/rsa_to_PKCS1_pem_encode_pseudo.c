
undefined8 rsa_to_PKCS1_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if (in_RCX == 0) {
    if ((in_R8 & 1) != 0) {
      uVar1 = key2any_encode();
      return uVar1;
    }
    if ((in_R8 & 2) != 0) {
      uVar1 = key2any_encode();
      return uVar1;
    }
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x5ad,
                "rsa_to_PKCS1_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}

