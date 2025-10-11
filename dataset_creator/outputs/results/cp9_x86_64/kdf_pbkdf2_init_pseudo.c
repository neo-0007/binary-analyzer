
void kdf_pbkdf2_init(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  OSSL_PARAM_construct_utf8_string(local_a8,"digest",&DAT_007c6514,0);
  local_58._0_8_ = local_88;
  iVar1 = ossl_prov_digest_load_from_params(param_1 + 6,local_78,uVar2);
  if (iVar1 == 0) {
    ossl_prov_digest_reset(param_1 + 6);
  }
  param_1[5] = 0x800;
  *(undefined4 *)(param_1 + 9) = ossl_kdf_pbkdf2_default_checks;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

