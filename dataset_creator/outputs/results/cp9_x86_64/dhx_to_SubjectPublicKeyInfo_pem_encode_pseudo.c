
undefined8 dhx_to_SubjectPublicKeyInfo_pem_encode(void)

{
  undefined8 uVar1;
  long in_RCX;
  ulong in_R8;
  
  if ((in_RCX == 0) && ((in_R8 & 2) != 0)) {
    uVar1 = key2any_encode();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x55b,
                "dhx_to_SubjectPublicKeyInfo_pem_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}

