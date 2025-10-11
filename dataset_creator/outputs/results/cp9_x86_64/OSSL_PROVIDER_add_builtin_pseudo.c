
undefined4 OSSL_PROVIDER_add_builtin(undefined8 param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/provider.c",0x79,"OSSL_PROVIDER_add_builtin");
    ERR_set_error(0xf,0xc0102,0);
    uVar2 = 0;
  }
  else {
    local_58 = (undefined1  [16])0x0;
    local_38 = 0;
    local_48 = (undefined1  [16])0x0;
    pcVar3 = CRYPTO_strdup(param_2,"../crypto/provider.c",0x7d);
    local_58._0_8_ = pcVar3;
    if (pcVar3 == (char *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/provider.c",0x7f,"OSSL_PROVIDER_add_builtin");
      ERR_set_error(0xf,0xc0100,0);
      uVar2 = 0;
    }
    else {
      local_48._0_8_ = param_3;
      iVar1 = ossl_provider_info_add_to_store(param_1,local_58);
      if (iVar1 == 0) {
        ossl_provider_info_clear(local_58);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

