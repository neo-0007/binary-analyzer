
undefined4 FUN_00487870(void)

{
  int iVar1;
  ulong in_RCX;
  ulong in_R9;
  
  if (in_RCX < in_R9) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/ciphers/ciphercommon_ccm.c",0x111,
                 "ossl_ccm_stream_update");
    FUN_0051f8f0(0x39,0x6a,0);
    return 0;
  }
  iVar1 = FUN_00486ca0();
  if (iVar1 != 0) {
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/ciphers/ciphercommon_ccm.c",0x116,
               "ossl_ccm_stream_update");
  FUN_0051f8f0(0x39,0x66,0);
  return 0;
}

