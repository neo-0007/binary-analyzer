
undefined8 EVP_PKEY_CTX_set_group_name(int *param_1,long param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  if ((param_1 == (int *)0x0) || ((*param_1 - 2U & 0xfffffffd) != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/evp_lib.c",0x451,"EVP_PKEY_CTX_set_group_name");
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    OSSL_PARAM_construct_utf8_string(&local_98,"group",param_2,0);
    local_68._8_8_ = uStack_90;
    local_68._0_8_ = local_98;
    local_48._0_8_ = local_78;
    local_58._8_8_ = uStack_80;
    local_58._0_8_ = local_88;
    uVar1 = EVP_PKEY_CTX_set_params(param_1,local_68);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

