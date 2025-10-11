
undefined8
ccm_init_part_0(byte *param_1,long param_2,long param_3,void *param_4,size_t param_5,
               undefined8 param_6,byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_1 & 0xfe | param_7 & 1;
  if (param_4 != (void *)0x0) {
    if (0xfU - *(long *)(param_1 + 8) != param_5) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/ciphercommon_ccm.c",0xeb,"ccm_init");
      ERR_set_error(0x39,0x6d,0);
      return 0;
    }
    memcpy(param_1 + 0x30,param_4,0xfU - *(long *)(param_1 + 8));
    *param_1 = *param_1 | 4;
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x18) != param_3) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/ciphercommon_ccm.c",0xf3,"ccm_init");
      ERR_set_error(0x39,0x69,0);
      return 0;
    }
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x90))(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = ossl_ccm_set_ctx_params(param_1,param_6);
  return uVar2;
}

