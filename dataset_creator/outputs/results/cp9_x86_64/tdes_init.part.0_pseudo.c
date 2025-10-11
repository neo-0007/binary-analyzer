
undefined8
tdes_init_part_0(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                undefined8 param_6,byte param_7)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  bVar1 = *(byte *)(param_1 + 0x3c);
  *(byte *)(param_1 + 0x3c) = bVar1 & 0xfd | (param_7 & 1) * '\x02';
  if (param_4 == 0) {
    if (((bVar1 & 4) != 0) && (*(int *)(param_1 + 0x10) - 2U < 3)) {
      memcpy((void *)(param_1 + 0x94),(void *)(param_1 + 0x74),*(size_t *)(param_1 + 0x20));
    }
  }
  else {
    iVar2 = ossl_cipher_generic_initiv(param_1,param_4,param_5);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (param_2 == 0) {
LAB_0044a698:
    uVar3 = ossl_cipher_generic_set_ctx_params(param_1,param_6);
    return uVar3;
  }
  if (*(long *)(param_1 + 0x18) == param_3) {
    iVar2 = (*(code *)**(undefined8 **)(param_1 + 0xa8))(param_1,param_2,param_3);
    if (iVar2 != 0) goto LAB_0044a698;
  }
  else {
    ERR_new();
    ERR_set_debug("../providers/implementations/ciphers/cipher_tdes_common.c",0x5a,"tdes_init");
    ERR_set_error(0x39,0x69,0);
  }
  return 0;
}

