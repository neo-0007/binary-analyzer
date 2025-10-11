
int FUN_00486090(long param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5,
                ulong param_6)

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    if (param_4 < param_6) {
      FUN_0051f420();
      iVar1 = 0;
      FUN_0051f540("../providers/implementations/ciphers/ciphercommon.c",0x212,
                   "ossl_cipher_generic_cipher");
      FUN_0051f8f0(0x39,0x6a,0);
    }
    else {
      iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,param_6);
      if (iVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/ciphers/ciphercommon.c",0x217,
                     "ossl_cipher_generic_cipher");
        FUN_0051f8f0(0x39,0x66,0);
        iVar1 = 0;
      }
      else {
        *param_3 = param_6;
        iVar1 = 1;
      }
    }
  }
  return iVar1;
}

