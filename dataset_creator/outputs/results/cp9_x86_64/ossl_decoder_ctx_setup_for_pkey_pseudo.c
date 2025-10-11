
undefined4
ossl_decoder_ctx_setup_for_pkey
          (long param_1,undefined8 param_2,char *param_3,undefined8 param_4,char *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_58;
  long local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar9 = false;
  if (param_3 != (char *)0x0) {
    iVar1 = strcmp(param_3,"id-ecPublicKey");
    bVar9 = true;
    if (iVar1 != 0) {
      iVar1 = strcmp(param_3,"1.2.840.10045.2.1");
      bVar9 = iVar1 == 0;
    }
  }
  puVar3 = (undefined8 *)CRYPTO_zalloc(0x30,"../crypto/encode_decode/decoder_pkey.c",0x14c);
  if (puVar3 == (undefined8 *)0x0) {
    ERR_new();
    lVar5 = 0;
    ERR_set_debug("../crypto/encode_decode/decoder_pkey.c",0x151,"ossl_decoder_ctx_setup_for_pkey");
    ERR_set_error(0x3c,0xc0100,0);
    uVar8 = 0;
    goto LAB_00509b04;
  }
  if (param_5 == (char *)0x0) {
LAB_005099c8:
    lVar5 = OPENSSL_sk_new_null();
    puVar3[3] = lVar5;
    if ((lVar5 == 0) || (lVar5 = OPENSSL_sk_new_null(), lVar5 == 0)) goto LAB_00509ac0;
    puVar3[5] = param_2;
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    *puVar3 = param_4;
    *(undefined4 *)(puVar3 + 2) = uVar8;
    EVP_KEYMGMT_do_all_provided(param_4,collect_keymgmt,puVar3[3]);
    iVar1 = OPENSSL_sk_num(puVar3[3]);
    if (0 < iVar1) {
      iVar7 = 0;
      do {
        uVar6 = OPENSSL_sk_value(puVar3[3],iVar7);
        if ((((param_3 == (char *)0x0) || (iVar2 = EVP_KEYMGMT_is_a(uVar6,param_3), iVar2 != 0)) ||
            ((bVar9 && (iVar2 = EVP_KEYMGMT_is_a(uVar6,&DAT_007cb256), iVar2 != 0)))) &&
           (iVar2 = EVP_KEYMGMT_names_do_all(uVar6,collect_name,lVar5), iVar2 == 0)) {
          ERR_new();
          ERR_set_debug("../crypto/encode_decode/decoder_pkey.c",0x16d,
                        "ossl_decoder_ctx_setup_for_pkey");
          ERR_set_error(0x3c,0xc0103,0);
          uVar8 = 0;
          goto LAB_00509af2;
        }
        iVar7 = iVar7 + 1;
      } while (iVar1 != iVar7);
    }
    local_48 = 0;
    local_58 = lVar5;
    local_50 = param_1;
    OSSL_DECODER_do_all_provided(param_4,collect_decoder,&local_58);
    OPENSSL_sk_free(lVar5);
    if ((local_48 & 0x100000000) != 0) goto LAB_00509aec;
    lVar5 = 0;
    iVar1 = OSSL_DECODER_CTX_get_num_decoders(param_1);
    uVar8 = 1;
    if (iVar1 != 0) {
      iVar1 = OSSL_DECODER_CTX_set_construct(param_1,decoder_construct_pkey);
      if ((iVar1 != 0) && (iVar1 = OSSL_DECODER_CTX_set_construct_data(param_1,puVar3), iVar1 != 0))
      {
        iVar1 = OSSL_DECODER_CTX_set_cleanup(param_1,decoder_clean_pkey_construct_arg);
        uVar8 = 1;
        if (iVar1 != 0) goto LAB_00509b04;
      }
      goto LAB_00509aec;
    }
  }
  else {
    pcVar4 = CRYPTO_strdup(param_5,"../crypto/encode_decode/decoder_pkey.c",0x14e);
    puVar3[1] = pcVar4;
    if (pcVar4 != (char *)0x0) goto LAB_005099c8;
LAB_00509ac0:
    ERR_new();
    ERR_set_debug("../crypto/encode_decode/decoder_pkey.c",0x151,"ossl_decoder_ctx_setup_for_pkey");
    ERR_set_error(0x3c,0xc0100,0);
LAB_00509aec:
    uVar8 = 0;
    lVar5 = 0;
  }
LAB_00509af2:
  decoder_clean_pkey_construct_arg_part_0(puVar3);
LAB_00509b04:
  OPENSSL_sk_free(lVar5);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar8;
}

