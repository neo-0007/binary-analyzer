
undefined8
siv_init_part_0(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe | param_7 & 1;
  if (param_2 != 0) {
    if (*(long *)(param_1 + 8) == param_3) {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x68))(param_1,param_2,*(long *)(param_1 + 8));
      if (iVar1 != 0) goto LAB_0044368c;
    }
    else {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_aes_siv.c",0x5c,"siv_init");
      ERR_set_error(0x39,0x69,0);
    }
    return 0;
  }
LAB_0044368c:
  uVar2 = aes_siv_set_ctx_params(param_1,param_6);
  return uVar2;
}

