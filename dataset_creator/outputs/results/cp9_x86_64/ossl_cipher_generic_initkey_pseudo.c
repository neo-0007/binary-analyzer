
void ossl_cipher_generic_initkey
               (long param_1,ulong param_2,ulong param_3,ulong param_4,undefined4 param_5,
               uint param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  
  if ((param_6 & 0x200) != 0) {
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 0x20;
  }
  if ((param_6 & 0x100) != 0) {
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 0x10;
  }
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
  *(ulong *)(param_1 + 0x18) = param_2 >> 3;
  *(ulong *)(param_1 + 0x20) = param_4 >> 3;
  *(undefined8 *)(param_1 + 0xa8) = param_7;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  *(ulong *)(param_1 + 0x28) = param_3 >> 3;
  if (param_8 != 0) {
    uVar1 = ossl_prov_ctx_get0_libctx();
    *(undefined8 *)(param_1 + 0xb8) = uVar1;
  }
  return;
}

