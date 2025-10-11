
undefined4
ossl_cipher_generic_stream_update
          (long param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,ulong param_6)

{
  int iVar1;
  ulong uVar2;
  
  if (param_6 == 0) {
    *param_3 = 0;
    return 1;
  }
  if (param_4 < param_6) {
    ERR_new();
    ERR_set_debug("../providers/implementations/ciphers/ciphercommon.c",0x1d1,
                  "ossl_cipher_generic_stream_update");
    ERR_set_error(0x39,0x6a,0);
    return 0;
  }
  iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,param_6);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/ciphers/ciphercommon.c",0x1d6,
                  "ossl_cipher_generic_stream_update");
    ERR_set_error(0x39,0x66,0);
    return 0;
  }
  *param_3 = param_6;
  if (((*(byte *)(param_1 + 0x3c) & 2) == 0) && (*(int *)(param_1 + 0x40) != 0)) {
    if (*(int *)(param_1 + 0x60) != 0) {
      uVar2 = (ulong)*(byte *)(param_2 + -1 + param_6) + 1;
      if (param_6 < uVar2) {
        return 0;
      }
      param_6 = param_6 - uVar2;
      *param_3 = param_6;
    }
    if (param_6 < *(ulong *)(param_1 + 0x68)) {
      return 0;
    }
    param_6 = param_6 - *(ulong *)(param_1 + 0x68);
    *param_3 = param_6;
    uVar2 = *(ulong *)(param_1 + 0x58);
    if (uVar2 != 0) {
      if (param_6 < uVar2) {
        return 0;
      }
      *(ulong *)(param_1 + 0x48) = param_2 + (param_6 - uVar2);
      *param_3 = param_6 - uVar2;
    }
  }
  return 1;
}

