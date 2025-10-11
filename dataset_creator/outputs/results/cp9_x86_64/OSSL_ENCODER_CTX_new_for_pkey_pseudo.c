
long OSSL_ENCODER_CTX_new_for_pkey
               (long param_1,undefined4 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *ptr;
  long in_FS_OFFSET;
  undefined1 local_108 [32];
  undefined8 local_e8;
  long local_d8;
  byte local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  byte local_a0;
  int local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    ERR_new();
    lVar2 = 0;
    ERR_set_debug("../crypto/encode_decode/encoder_pkey.c",0x147,"OSSL_ENCODER_CTX_new_for_pkey");
    ERR_set_error(0x3b,0xc0102,0);
    goto LAB_005f086b;
  }
  if ((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x68) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/encode_decode/encoder_pkey.c",0x14c,"OSSL_ENCODER_CTX_new_for_pkey");
    ERR_set_error(0x3b,0x80106,"The passed EVP_PKEY must be assigned a key");
    lVar2 = 0;
    goto LAB_005f086b;
  }
  lVar2 = OSSL_ENCODER_CTX_new();
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/encode_decode/encoder_pkey.c",0x152,"OSSL_ENCODER_CTX_new_for_pkey");
    ERR_set_error(0x3b,0xc0100,0);
    goto LAB_005f086b;
  }
  lVar4 = *(long *)(param_1 + 0x60);
  if (lVar4 != 0) {
    uVar3 = EVP_KEYMGMT_get0_provider(lVar4);
    lVar4 = ossl_provider_libctx(uVar3);
  }
  iVar1 = OSSL_ENCODER_CTX_set_output_type(lVar2,param_3);
  if (iVar1 != 0) {
    if (param_4 != 0) {
      iVar1 = OSSL_ENCODER_CTX_set_output_structure(lVar2,param_4);
      if (iVar1 == 0) goto LAB_005f0860;
    }
    iVar1 = OSSL_ENCODER_CTX_set_selection(lVar2,param_2);
    if (iVar1 != 0) {
      if (*(long *)(param_1 + 0x60) != 0) {
        uVar3 = EVP_KEYMGMT_get0_provider();
        uVar5 = ossl_provider_libctx(uVar3);
        if (*(long *)(param_1 + 0x60) != 0) {
          ptr = (long *)CRYPTO_zalloc(0x28,"../crypto/encode_decode/encoder_pkey.c",0xf6);
          if (ptr == (long *)0x0) {
            ERR_new();
            ERR_set_debug("../crypto/encode_decode/encoder_pkey.c",0xf7,
                          "ossl_encoder_ctx_setup_for_pkey");
            ERR_set_error(0x3b,0xc0100,0);
            goto LAB_005f0860;
          }
          local_d8 = OPENSSL_sk_new_null();
          if (local_d8 == 0) {
            ERR_new();
            uVar3 = 0x101;
LAB_005f0829:
            ERR_set_debug("../crypto/encode_decode/encoder_pkey.c",uVar3,
                          "ossl_encoder_ctx_setup_for_pkey");
            ERR_set_error(0x3b,0xc0100,0);
          }
          else {
            local_d0 = local_d0 & 0xfe;
            EVP_KEYMGMT_names_do_all(*(undefined8 *)(param_1 + 0x60),collect_name,&local_d8);
            if ((local_d0 & 1) == 0) {
              local_c8 = local_d8;
              local_b8 = *(undefined8 *)(lVar2 + 8);
              local_c0 = *(undefined8 *)(lVar2 + 0x10);
              local_a0 = local_a0 & 0xfe;
              local_9c = 0;
              local_b0 = uVar3;
              local_a8 = lVar2;
              OSSL_ENCODER_do_all_provided(uVar5,collect_encoder);
              local_a0 = local_a0 | 1;
              OSSL_ENCODER_do_all_provided(uVar5,collect_encoder,&local_c8);
              OPENSSL_sk_free(local_d8);
              if (local_9c != 0) {
                ERR_new();
                uVar3 = 0x123;
                goto LAB_005f0829;
              }
              iVar1 = OSSL_ENCODER_CTX_get_num_encoders(lVar2);
              if (iVar1 == 0) {
                OSSL_ENCODER_CTX_set_construct_data(lVar2,0);
                CRYPTO_free(ptr);
                goto LAB_005f0778;
              }
              iVar1 = OSSL_ENCODER_CTX_set_construct(lVar2,encoder_construct_pkey);
              if (iVar1 != 0) {
                iVar1 = OSSL_ENCODER_CTX_set_construct_data(lVar2,ptr);
                if (iVar1 != 0) {
                  iVar1 = OSSL_ENCODER_CTX_set_cleanup(lVar2,encoder_destruct_pkey);
                  if (iVar1 != 0) {
                    *ptr = param_1;
                    *(undefined4 *)(ptr + 1) = param_2;
                    goto LAB_005f0778;
                  }
                }
              }
            }
            else {
              OPENSSL_sk_free(local_d8);
            }
          }
          OSSL_ENCODER_CTX_set_construct_data(lVar2,0);
          CRYPTO_free(ptr);
          goto LAB_005f0860;
        }
      }
LAB_005f0778:
      iVar1 = OSSL_ENCODER_CTX_add_extra(lVar2,lVar4,param_5);
      if (iVar1 != 0) {
        local_98 = (undefined1  [16])0x0;
        local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x48));
        local_88 = (undefined1  [16])0x0;
        local_78 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        OSSL_PARAM_construct_int(local_108,"save-parameters",&local_c8);
        local_78._0_8_ = local_e8;
        OSSL_ENCODER_CTX_set_params(lVar2,local_98);
        goto LAB_005f086b;
      }
    }
  }
LAB_005f0860:
  OSSL_ENCODER_CTX_free(lVar2);
  lVar2 = 0;
LAB_005f086b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

