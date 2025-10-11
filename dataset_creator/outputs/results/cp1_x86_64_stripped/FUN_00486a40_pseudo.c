
undefined8 FUN_00486a40(long param_1,long *param_2,ulong param_3,undefined8 *param_4,long *param_5)

{
  long lVar1;
  
  lVar1 = *param_5;
  if (lVar1 != 0) {
    if (param_3 < (ulong)(lVar1 + *param_2)) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/ciphercommon_block.c",0x57,
                   "ossl_cipher_trailingdata");
      FUN_0051f8f0(0x39,0xc0103,0);
      return 0;
    }
    thunk_FUN_00713a50(param_1 + *param_2,*param_4,lVar1);
    *param_2 = *param_2 + *param_5;
    *param_5 = 0;
  }
  return 1;
}

