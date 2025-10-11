
bool evp_cipher_cache_constants(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  uint local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_1e8 = 0;
  local_1e4 = 0;
  local_1e0 = 0;
  local_1dc = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1d4 = 0;
  OSSL_PARAM_construct_size_t(&local_218,"blocksize",&local_1c8);
  local_1b8 = local_218;
  uStack_1b0 = uStack_210;
  local_1a8 = local_208;
  uStack_1a0 = uStack_200;
  local_198 = local_1f8;
  OSSL_PARAM_construct_size_t(&local_218,"ivlen",&local_1d0);
  local_190 = local_218;
  uStack_188 = uStack_210;
  local_180 = local_208;
  uStack_178 = uStack_200;
  local_170 = local_1f8;
  OSSL_PARAM_construct_size_t(&local_218,"keylen",&local_1c0);
  local_168 = local_218;
  uStack_160 = uStack_210;
  local_158 = local_208;
  uStack_150 = uStack_200;
  local_148 = local_1f8;
  OSSL_PARAM_construct_uint(&local_218,"mode",&local_1d4);
  local_140 = local_218;
  uStack_138 = uStack_210;
  local_130 = local_208;
  uStack_128 = uStack_200;
  local_120 = local_1f8;
  OSSL_PARAM_construct_int(&local_218,&DAT_007c47f2,&local_1e8);
  local_118 = local_218;
  uStack_110 = uStack_210;
  local_108 = local_208;
  uStack_100 = uStack_200;
  local_f8 = local_1f8;
  OSSL_PARAM_construct_int(&local_218,"custom-iv",&local_1e4);
  local_f0 = local_218;
  uStack_e8 = uStack_210;
  local_e0 = local_208;
  uStack_d8 = uStack_200;
  local_d0 = local_1f8;
  OSSL_PARAM_construct_int(&local_218,"cts",&local_1e0);
  local_c8 = local_218;
  uStack_c0 = uStack_210;
  local_b8 = local_208;
  uStack_b0 = uStack_200;
  local_a8 = local_1f8;
  OSSL_PARAM_construct_int(&local_218,"tls-multi",&local_1dc);
  local_a0 = local_218;
  uStack_98 = uStack_210;
  local_90 = local_208;
  uStack_88 = uStack_200;
  local_80 = local_1f8;
  OSSL_PARAM_construct_int(&local_218,"has-randkey",&local_1d8);
  local_58 = local_1f8;
  local_78 = local_218;
  uStack_70 = uStack_210;
  local_68 = local_208;
  uStack_60 = uStack_200;
  OSSL_PARAM_construct_end(&local_218);
  local_50 = local_218;
  uStack_48 = uStack_210;
  local_30 = local_1f8;
  local_40 = local_208;
  uStack_38 = uStack_200;
  iVar1 = evp_do_ciph_getparams(param_1,&local_1b8);
  if (0 < iVar1) {
    *(int *)(param_1 + 4) = (int)local_1c8;
    *(ulong *)(param_1 + 0x10) = (ulong)local_1d4;
    *(int *)(param_1 + 0xc) = (int)local_1d0;
    *(int *)(param_1 + 8) = (int)local_1c0;
    if (local_1e8 != 0) {
      *(ulong *)(param_1 + 0x10) = (ulong)(local_1d4 | 0x200000);
    }
    if (local_1e4 != 0) {
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x10;
    }
    if (local_1e0 != 0) {
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x4000;
    }
    if (local_1dc != 0) {
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x400000;
    }
    if (*(long *)(param_1 + 0xb8) != 0) {
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x100000;
    }
    if (local_1d8 != 0) {
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x200;
    }
    uVar2 = EVP_CIPHER_gettable_ctx_params(param_1);
    lVar3 = OSSL_PARAM_locate_const(uVar2,"alg_id_param");
    if (lVar3 != 0) {
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x1000000;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

