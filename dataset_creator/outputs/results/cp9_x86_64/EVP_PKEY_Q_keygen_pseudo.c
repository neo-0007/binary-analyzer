
undefined8
EVP_PKEY_Q_keygen(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  long local_50;
  undefined1 local_48 [24];
  undefined8 local_30;
  undefined8 local_28;
  
  local_50 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = (undefined8 *)&stack0x00000008;
  local_c8 = 0x18;
  local_b8 = local_48;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_30 = param_4;
  local_28 = param_5;
  iVar1 = OPENSSL_strcasecmp(param_3,"RSA");
  if (iVar1 == 0) {
    if (local_c8 < 0x30) {
      uVar3 = (ulong)local_c8;
      local_c8 = local_c8 + 8;
      puVar4 = (undefined8 *)(local_b8 + uVar3);
    }
    else {
      puVar4 = local_c0;
      local_c0 = local_c0 + 1;
    }
    local_d8 = *puVar4;
    OSSL_PARAM_construct_size_t(&local_108,"bits",&local_d8);
    local_88._0_8_ = local_e8;
    local_a8._8_8_ = uStack_100;
    local_a8._0_8_ = local_108;
    local_98._8_8_ = uStack_f0;
    local_98._0_8_ = local_f8;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_3,&DAT_00826350);
    if (iVar1 == 0) {
      if (local_c8 < 0x30) {
        uVar3 = (ulong)local_c8;
        local_c8 = local_c8 + 8;
        puVar4 = (undefined8 *)(local_b8 + uVar3);
      }
      else {
        puVar4 = local_c0;
        local_c0 = local_c0 + 1;
      }
      OSSL_PARAM_construct_utf8_string(&local_108,"group",*puVar4,0);
      local_a8._8_8_ = uStack_100;
      local_a8._0_8_ = local_108;
      local_88._0_8_ = local_e8;
      local_98._8_8_ = uStack_f0;
      local_98._0_8_ = local_f8;
    }
    else {
      iVar1 = OPENSSL_strcasecmp(param_3,"ED25519");
      if (iVar1 != 0) {
        iVar1 = OPENSSL_strcasecmp(param_3,"X25519");
        if (iVar1 != 0) {
          iVar1 = OPENSSL_strcasecmp(param_3,"ED448");
          if (iVar1 != 0) {
            iVar1 = OPENSSL_strcasecmp(param_3,&DAT_007c4885);
            if (iVar1 != 0) {
              ERR_new();
              ERR_set_debug("../crypto/evp/evp_lib.c",0x4a2,"EVP_PKEY_Q_keygen");
              ERR_set_error(6,0x80106,0);
              uVar2 = 0;
              goto LAB_00410120;
            }
          }
        }
      }
    }
  }
  local_d0 = 0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(param_1,param_3,param_2);
  if (ctx != (EVP_PKEY_CTX *)0x0) {
    iVar1 = EVP_PKEY_keygen_init(ctx);
    if (0 < iVar1) {
      iVar1 = EVP_PKEY_CTX_set_params(ctx,local_a8);
      if (iVar1 != 0) {
        EVP_PKEY_generate(ctx,&local_d0);
      }
    }
  }
  EVP_PKEY_CTX_free(ctx);
  uVar2 = local_d0;
LAB_00410120:
  if (local_50 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

