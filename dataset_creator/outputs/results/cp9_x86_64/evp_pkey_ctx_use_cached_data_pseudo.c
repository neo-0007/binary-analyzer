
undefined8 evp_pkey_ctx_use_cached_data(undefined4 *param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0xe) != 0) {
    uVar1 = evp_pkey_ctx_ctrl_str_int();
    return uVar1;
  }
  uVar1 = evp_pkey_ctx_ctrl_int
                    (param_1,0xffffffff,*param_1,0xf,*(undefined8 *)(param_1 + 0x12),
                     *(undefined8 *)(param_1 + 0x10));
  return uVar1;
}

