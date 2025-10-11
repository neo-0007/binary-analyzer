
undefined4 FUN_00447230(void)

{
  int iVar1;
  ulong in_RCX;
  ulong in_R9;
  
  if (in_RCX < in_R9) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/ciphers/cipher_aes_xts.c",199,"aes_xts_stream_update"
                );
    FUN_0051f8f0(0x39,0x6a,0);
    return 0;
  }
  iVar1 = FUN_00446e10();
  if (iVar1 != 0) {
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/ciphers/cipher_aes_xts.c",0xcc,"aes_xts_stream_update")
  ;
  FUN_0051f8f0(0x39,0x66,0);
  return 0;
}

