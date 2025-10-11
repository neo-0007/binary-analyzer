
long rand_new_drbg(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8 [25];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_158 = param_4;
  local_14c = param_3;
  lVar2 = ossl_lib_ctx_get_data(param_1,5,rand_drbg_ossl_ctx_method);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    pcVar7 = *(char **)(lVar2 + 0x20);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "CTR-DRBG";
    }
    lVar3 = EVP_RAND_fetch(param_1,pcVar7,*(undefined8 *)(lVar2 + 0x38));
    if (lVar3 == 0) {
      ERR_new();
      lVar4 = 0;
      ERR_set_debug("../crypto/rand/rand_lib.c",0x23b,"rand_new_drbg");
      ERR_set_error(0x24,0x90,0);
    }
    else {
      lVar4 = EVP_RAND_CTX_new(lVar3,param_2);
      EVP_RAND_free(lVar3);
      if (lVar4 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/rand/rand_lib.c",0x241,"rand_new_drbg");
        ERR_set_error(0x24,0x8f,0);
      }
      else {
        pcVar7 = *(char **)(lVar2 + 0x28);
        puVar5 = &local_120;
        if (pcVar7 == (char *)0x0) {
          pcVar7 = "AES-256-CTR";
        }
        OSSL_PARAM_construct_utf8_string(&local_188,"cipher",pcVar7,0);
        local_148 = local_188;
        uStack_140 = uStack_180;
        local_128 = local_168;
        local_138 = local_178;
        uStack_130 = uStack_170;
        if (*(long *)(lVar2 + 0x30) != 0) {
          OSSL_PARAM_construct_utf8_string(&local_188,"digest",*(long *)(lVar2 + 0x30),0);
          puVar5 = local_f8;
          local_100 = local_168;
          local_120 = local_188;
          uStack_118 = uStack_180;
          local_110 = local_178;
          uStack_108 = uStack_170;
        }
        puVar6 = puVar5;
        if (*(long *)(lVar2 + 0x38) != 0) {
          puVar6 = puVar5 + 5;
          OSSL_PARAM_construct_utf8_string(&local_188,"properties",*(long *)(lVar2 + 0x38),0);
          *puVar5 = local_188;
          puVar5[1] = uStack_180;
          puVar5[2] = local_178;
          puVar5[3] = uStack_170;
          puVar5[4] = local_168;
        }
        OSSL_PARAM_construct_utf8_string(&local_188,"mac",&DAT_007c9964,0);
        *puVar6 = local_188;
        puVar6[1] = uStack_180;
        puVar6[2] = local_178;
        puVar6[3] = uStack_170;
        puVar6[4] = local_168;
        OSSL_PARAM_construct_uint(&local_188,"reseed_requests",&local_14c);
        puVar6[5] = local_188;
        puVar6[6] = uStack_180;
        puVar6[7] = local_178;
        puVar6[8] = uStack_170;
        puVar6[9] = local_168;
        OSSL_PARAM_construct_time_t(&local_188,"reseed_time_interval",&local_158);
        puVar6[10] = local_188;
        puVar6[0xb] = uStack_180;
        puVar6[0xc] = local_178;
        puVar6[0xd] = uStack_170;
        puVar6[0xe] = local_168;
        OSSL_PARAM_construct_end(&local_188);
        puVar6[0xf] = local_188;
        puVar6[0x10] = uStack_180;
        puVar6[0x11] = local_178;
        puVar6[0x12] = uStack_170;
        puVar6[0x13] = local_168;
        iVar1 = EVP_RAND_instantiate(lVar4,0,0,0,0,&local_148);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/rand/rand_lib.c",0x259,"rand_new_drbg");
          ERR_set_error(0x24,0x6c,0);
          EVP_RAND_CTX_free(lVar4);
          lVar4 = 0;
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

