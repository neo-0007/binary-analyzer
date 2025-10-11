
void ossl_cipher_generic_dinit
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xf5;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    cipher_generic_init_internal_part_0(param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}

