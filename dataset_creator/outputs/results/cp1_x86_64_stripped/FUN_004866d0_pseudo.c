
undefined8 FUN_004866d0(long param_1,undefined8 param_2,ulong param_3)

{
  if ((*(ulong *)(param_1 + 0x20) == param_3) && (param_3 < 0x11)) {
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 4;
    thunk_FUN_00713a50(param_1 + 0x94);
    thunk_FUN_00713a50(param_1 + 0x74,param_2,param_3);
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/ciphers/ciphercommon.c",0x28b,
               "ossl_cipher_generic_initiv");
  FUN_0051f8f0(0x39,0x6d,0);
  return 0;
}

