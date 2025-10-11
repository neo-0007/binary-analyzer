
undefined8
gcm_init_part_0(long param_1,long param_2,long param_3,void *param_4,size_t param_5,
               undefined8 param_6,byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xfe | param_7 & 1;
  if (param_4 != (void *)0x0) {
    if (0x7f < param_5 - 1) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/ciphercommon_gcm.c",0x36,"gcm_init");
      ERR_set_error(0x39,0x6d,0);
      return 0;
    }
    *(size_t *)(param_1 + 0x10) = param_5;
    memcpy((void *)(param_1 + 0x55),param_4,param_5);
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 8) != param_3) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/ciphercommon_gcm.c",0x40,"gcm_init");
      ERR_set_error(0x39,0x69,0);
      return 0;
    }
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xf0))(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = ossl_gcm_set_ctx_params(param_1,param_6);
  return uVar2;
}

