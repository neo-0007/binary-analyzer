
int ec_export(EC_KEY *param_1,uint param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  point_conversion_form_t pVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  BN_CTX *ctx;
  undefined8 uVar6;
  EC_GROUP *pEVar7;
  long lVar8;
  long in_FS_OFFSET;
  void *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  iVar1 = ossl_prov_is_running();
  if (((param_1 != (EC_KEY *)0x0) && (iVar1 != 0)) && ((param_2 & 4) != 0)) {
    if (((param_2 & 3) != 1) && ((param_2 & 0x83) != 0x80)) {
      lVar4 = OSSL_PARAM_BLD_new();
      if (lVar4 != 0) {
        uVar5 = ossl_ec_key_get_libctx(param_1);
        ctx = (BN_CTX *)BN_CTX_new_ex(uVar5);
        if (ctx == (BN_CTX *)0x0) {
          lVar8 = 0;
          iVar1 = 0;
        }
        else {
          BN_CTX_start(ctx);
          uVar5 = ossl_ec_key_get0_propq(param_1);
          uVar6 = ossl_ec_key_get_libctx(param_1);
          pEVar7 = EC_KEY_get0_group(param_1);
          iVar1 = ossl_ec_group_todata(pEVar7,lVar4,0,uVar6,uVar5,ctx,&local_48);
          lVar8 = 0;
          if (iVar1 != 0) {
            if ((param_2 & 3) != 0) {
              iVar1 = key_to_params(param_1,lVar4,0,param_2 & 1,&local_50);
              lVar8 = 0;
              if (iVar1 == 0) goto LAB_00470630;
            }
            if ((param_2 & 0x80) != 0) {
              pVar2 = EC_KEY_get_conv_form(param_1);
              lVar8 = ossl_ec_pt_format_id2name(pVar2);
              if (lVar8 != 0) {
                iVar1 = ossl_param_build_set_utf8_string(lVar4,0,"point-format",lVar8);
                lVar8 = 0;
                if (iVar1 == 0) goto LAB_00470630;
              }
              uVar3 = EC_KEY_get_flags(param_1);
              lVar8 = ossl_ec_check_group_type_id2name(uVar3 & 0x6000);
              if (lVar8 != 0) {
                iVar1 = ossl_param_build_set_utf8_string(lVar4,0,"group-check",lVar8);
                lVar8 = 0;
                if (iVar1 == 0) goto LAB_00470630;
              }
              uVar3 = EC_KEY_get_enc_flags(param_1);
              if ((uVar3 & 2) != 0) {
                iVar1 = ossl_param_build_set_int(lVar4,0,"include-public",0);
                lVar8 = 0;
                if (iVar1 == 0) goto LAB_00470630;
              }
              uVar3 = EC_KEY_get_flags(param_1);
              iVar1 = ossl_param_build_set_int(lVar4,0,"use-cofactor-flag",uVar3 >> 0xc & 1);
              lVar8 = 0;
              if (iVar1 == 0) goto LAB_00470630;
            }
            lVar8 = OSSL_PARAM_BLD_to_param(lVar4);
            iVar1 = 1;
            if (lVar8 != 0) {
              iVar1 = (*param_3)(lVar8,param_4);
            }
          }
        }
LAB_00470630:
        OSSL_PARAM_free(lVar8);
        OSSL_PARAM_BLD_free(lVar4);
        CRYPTO_free(local_50);
        CRYPTO_free(local_48);
        BN_CTX_end(ctx);
        BN_CTX_free(ctx);
        goto LAB_0047068a;
      }
    }
  }
  iVar1 = 0;
LAB_0047068a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

