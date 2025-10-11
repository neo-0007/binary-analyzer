
int evp_keymgmt_util_get_deflt_digest_name
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  ulong local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  ulong local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  ulong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  ulong local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_b8 = 0;
  local_48 = 0;
  OSSL_PARAM_construct_utf8_string(&local_1c8,"default-digest",local_118,100);
  local_178 = local_1a8;
  local_198 = local_1c8;
  uStack_190 = uStack_1c0;
  local_188 = local_1b8;
  uStack_180 = uStack_1b0;
  OSSL_PARAM_construct_utf8_string(&local_1c8,"mandatory-digest",local_a8,100);
  local_150 = local_1a8;
  local_170 = local_1c8;
  uStack_168 = uStack_1c0;
  local_160 = local_1b8;
  uStack_158 = uStack_1b0;
  OSSL_PARAM_construct_end(&local_1c8);
  local_128 = local_1a8;
  local_148 = local_1c8;
  uStack_140 = uStack_1c0;
  local_138 = local_1b8;
  uStack_130 = uStack_1b0;
  iVar1 = evp_keymgmt_get_params(param_1,param_2,&local_198);
  if (iVar1 != 0) {
    iVar1 = OSSL_PARAM_modified(&local_170);
    if (iVar1 == 0) {
      iVar1 = OSSL_PARAM_modified(&local_198);
      if (iVar1 == 0) {
        iVar1 = -2;
        goto LAB_0052a811;
      }
      iVar1 = 1;
      pcVar2 = "UNDEF";
      if (1 < local_178) {
        pcVar2 = local_118;
      }
    }
    else {
      iVar1 = 2;
      pcVar2 = "UNDEF";
      if (1 < local_150) {
        pcVar2 = local_a8;
      }
    }
    OPENSSL_strlcpy(param_3,pcVar2,param_4);
  }
LAB_0052a811:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

