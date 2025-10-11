
undefined8 evp_pkey_ctx_ctrl_str_int(long param_1,char *param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    ERR_new();
    uVar2 = 0x558;
LAB_004140f0:
    ERR_set_debug("../crypto/evp/pmeth_lib.c",uVar2,"evp_pkey_ctx_ctrl_str_int");
    ERR_set_error(6,0x93,0);
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = evp_pkey_ctx_state();
    if (iVar1 < 2) {
      if (-1 < iVar1) {
        if ((*(long *)(param_1 + 0x78) != 0) &&
           (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x78) + 200),
           UNRECOVERED_JUMPTABLE != (code *)0x0)) {
          iVar1 = strcmp(param_2,"digest");
          if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004140b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
            return uVar2;
          }
          uVar2 = EVP_PKEY_CTX_md(param_1,0x7f0,1,param_3);
          return uVar2;
        }
        ERR_new();
        uVar2 = 0x562;
        goto LAB_004140f0;
      }
    }
    else if (iVar1 == 2) {
      uVar2 = evp_pkey_ctx_ctrl_str_to_param(param_1,param_2,param_3);
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}

