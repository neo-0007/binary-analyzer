
undefined8 EVP_PKEY_new_CMAC_key(ENGINE *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90 [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (ENGINE *)0x0) {
    param_1 = (ENGINE *)ENGINE_get_id(param_1);
  }
  local_110 = 0;
  if (param_4 != 0) {
    lVar2 = EVP_CIPHER_get0_name(param_4);
    if (lVar2 != 0) {
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,"CMAC",0);
      if (ctx != (EVP_PKEY_CTX *)0x0) {
        iVar1 = EVP_PKEY_fromdata_init(ctx);
        if (iVar1 < 1) {
          ERR_new();
          uVar3 = 0x27a;
        }
        else {
          puVar4 = &local_b8;
          OSSL_PARAM_construct_octet_string(&local_148,&DAT_007c4ad5,param_2,param_3);
          local_e8 = local_128;
          local_108 = local_148;
          uStack_100 = uStack_140;
          local_f8 = local_138;
          uStack_f0 = uStack_130;
          OSSL_PARAM_construct_utf8_string(&local_148,"cipher",lVar2,0);
          local_e0 = local_148;
          uStack_d8 = uStack_140;
          local_c0 = local_128;
          local_d0 = local_138;
          uStack_c8 = uStack_130;
          if (param_1 != (ENGINE *)0x0) {
            OSSL_PARAM_construct_utf8_string(&local_148,"engine",param_1,0);
            puVar4 = local_90;
            local_98 = local_128;
            local_b8 = local_148;
            uStack_b0 = uStack_140;
            local_a8 = local_138;
            uStack_a0 = uStack_130;
          }
          OSSL_PARAM_construct_end(&local_148);
          *puVar4 = local_148;
          puVar4[1] = uStack_140;
          puVar4[2] = local_138;
          puVar4[3] = uStack_130;
          puVar4[4] = local_128;
          iVar1 = EVP_PKEY_fromdata(ctx,&local_110,0x87,&local_108);
          if (0 < iVar1) goto LAB_0052fd06;
          ERR_new();
          uVar3 = 0x28d;
        }
        ERR_set_debug("../crypto/evp/p_lib.c",uVar3,"new_cmac_key_int");
        ERR_set_error(6,0xb4,0);
      }
LAB_0052fd06:
      EVP_PKEY_CTX_free(ctx);
      uVar3 = local_110;
      goto LAB_0052fd13;
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/p_lib.c",0x271,"new_cmac_key_int");
  ERR_set_error(6,0xb4,0);
  uVar3 = 0;
LAB_0052fd13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

