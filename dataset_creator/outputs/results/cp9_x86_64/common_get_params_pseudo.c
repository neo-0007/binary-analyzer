
bool common_get_params(EC_KEY *param_1,undefined8 param_2,int param_3)

{
  uchar *buf;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  point_conversion_form_t pVar4;
  EC_GROUP *group;
  undefined8 uVar5;
  undefined8 uVar6;
  BN_CTX *ctx;
  long lVar7;
  EC_POINT *p;
  EC_GROUP *group_00;
  size_t sVar8;
  undefined *puVar9;
  int iVar10;
  long in_FS_OFFSET;
  bool bVar11;
  char *local_80;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  group = EC_KEY_get0_group(param_1);
  if (group != (EC_GROUP *)0x0) {
    uVar5 = ossl_ec_key_get_libctx(param_1);
    uVar6 = ossl_ec_key_get0_propq(param_1);
    ctx = (BN_CTX *)BN_CTX_new_ex(uVar5);
    if (ctx != (BN_CTX *)0x0) {
      BN_CTX_start(ctx);
      lVar7 = OSSL_PARAM_locate(param_2,"max-size");
      if (lVar7 == 0) {
LAB_0046f371:
        lVar7 = OSSL_PARAM_locate(param_2,"bits");
        if (lVar7 != 0) {
          uVar2 = EC_GROUP_order_bits(group);
          iVar1 = OSSL_PARAM_set_int(lVar7,uVar2);
          if (iVar1 == 0) goto LAB_0046f590;
        }
        lVar7 = OSSL_PARAM_locate(param_2,"security-bits");
        if (lVar7 != 0) {
          iVar1 = EC_GROUP_order_bits(group);
          iVar10 = 0x100;
          if ((((iVar1 < 0x200) && (iVar10 = 0xc0, iVar1 < 0x180)) && (iVar10 = 0x80, iVar1 < 0x100)
              ) && ((iVar10 = 0x70, iVar1 < 0xe0 && (iVar10 = 0x50, iVar1 < 0xa0)))) {
            iVar10 = iVar1 / 2;
          }
          iVar1 = OSSL_PARAM_set_int(lVar7,iVar10);
          if (iVar1 == 0) goto LAB_0046f590;
        }
        lVar7 = OSSL_PARAM_locate(param_2,"decoded-from-explicit");
        if ((lVar7 != 0) &&
           ((iVar1 = EC_KEY_decoded_from_explicit_params(param_1), iVar1 < 0 ||
            (iVar1 = OSSL_PARAM_set_int(lVar7,iVar1), iVar1 == 0)))) goto LAB_0046f590;
        if (param_3 != 0) {
          lVar7 = OSSL_PARAM_locate(param_2,"default-digest");
          if ((lVar7 == 0) || (iVar1 = OSSL_PARAM_set_utf8_string(lVar7,&DAT_007cb3f0), iVar1 != 0))
          goto LAB_0046f4d0;
          goto LAB_0046f590;
        }
        lVar7 = OSSL_PARAM_locate(param_2,"default-digest");
        if ((lVar7 != 0) && (iVar1 = OSSL_PARAM_set_utf8_string(lVar7,"SHA256"), iVar1 == 0))
        goto LAB_0046f590;
        lVar7 = OSSL_PARAM_locate(param_2,"use-cofactor-flag");
        if (lVar7 != 0) {
          uVar3 = EC_KEY_get_flags(param_1);
          iVar1 = OSSL_PARAM_set_int(lVar7,uVar3 >> 0xc & 1);
          if (iVar1 == 0) goto LAB_0046f590;
        }
LAB_0046f4d0:
        lVar7 = OSSL_PARAM_locate(param_2,"encoded-pub-key");
        if (lVar7 != 0) {
          sVar8 = *(size_t *)(lVar7 + 0x20);
          buf = *(uchar **)(lVar7 + 0x10);
          p = EC_KEY_get0_public_key(param_1);
          group_00 = EC_KEY_get0_group(param_1);
          sVar8 = EC_POINT_point2oct(group_00,p,POINT_CONVERSION_UNCOMPRESSED,buf,sVar8,ctx);
          *(size_t *)(lVar7 + 0x20) = sVar8;
          if (sVar8 == 0) goto LAB_0046f590;
        }
        local_5c = 0;
        local_58 = 0;
        local_54 = 0;
        iVar1 = EC_GROUP_get_field_type(group);
        if (iVar1 == 0x197) {
          iVar1 = EC_GROUP_get_basis_type(group);
          if (iVar1 == 0x2aa) {
            local_80 = "p.tpBasis";
          }
          else {
            if (iVar1 != 0x2ab) goto LAB_0046f590;
            local_80 = "p.ppBasis";
          }
          local_80 = local_80 + 2;
          iVar10 = EC_GROUP_get_degree(group);
          iVar10 = ossl_param_build_set_int(0,param_2,"m",iVar10);
          if ((iVar10 != 0) &&
             (iVar10 = ossl_param_build_set_utf8_string(0,param_2,"basis-type",local_80),
             iVar10 != 0)) {
            if (iVar1 == 0x2aa) {
              iVar1 = EC_GROUP_get_trinomial_basis(group,&local_5c);
              if (iVar1 != 0) {
                puVar9 = &DAT_008107ec;
                uVar2 = local_5c;
                goto LAB_0046f7fd;
              }
            }
            else {
              iVar1 = EC_GROUP_get_pentanomial_basis(group,&local_5c,&local_58,&local_54);
              if (((iVar1 != 0) &&
                  (iVar1 = ossl_param_build_set_int(0,param_2,&DAT_007c8f98,local_5c), iVar1 != 0))
                 && (iVar1 = ossl_param_build_set_int(0,param_2,"k2",local_58), iVar1 != 0)) {
                puVar9 = &DAT_007da810;
                uVar2 = local_54;
LAB_0046f7fd:
                iVar1 = ossl_param_build_set_int(0,param_2,puVar9,uVar2);
                if (iVar1 != 0) goto LAB_0046f561;
              }
            }
          }
          goto LAB_0046f590;
        }
LAB_0046f561:
        iVar1 = ossl_ec_group_todata(group,0,param_2,uVar5,uVar6,ctx,&local_48);
        if (((iVar1 == 0) || (iVar1 = key_to_params(param_1,0,param_2,1,&local_50), iVar1 == 0)) ||
           (param_1 == (EC_KEY *)0x0)) goto LAB_0046f590;
        pVar4 = EC_KEY_get_conv_form(param_1);
        lVar7 = ossl_ec_pt_format_id2name(pVar4);
        if ((lVar7 != 0) &&
           (iVar1 = ossl_param_build_set_utf8_string(0,param_2,"point-format",lVar7), iVar1 == 0))
        goto LAB_0046f590;
        uVar3 = EC_KEY_get_flags(param_1);
        lVar7 = ossl_ec_check_group_type_id2name(uVar3 & 0x6000);
        if (((lVar7 != 0) &&
            (iVar1 = ossl_param_build_set_utf8_string(0,param_2,"group-check",lVar7), iVar1 == 0))
           || ((uVar3 = EC_KEY_get_enc_flags(param_1), (uVar3 & 2) != 0 &&
               (iVar1 = ossl_param_build_set_int(0,param_2,"include-public",0), iVar1 == 0))))
        goto LAB_0046f590;
        uVar3 = EC_KEY_get_flags(param_1);
        iVar1 = ossl_param_build_set_int(0,param_2,"use-cofactor-flag",uVar3 >> 0xc & 1);
        bVar11 = iVar1 != 0;
      }
      else {
        iVar1 = ECDSA_size(param_1);
        iVar1 = OSSL_PARAM_set_int(lVar7,iVar1);
        if (iVar1 != 0) goto LAB_0046f371;
LAB_0046f590:
        bVar11 = false;
      }
      CRYPTO_free(local_48);
      CRYPTO_free(local_50);
      BN_CTX_end(ctx);
      BN_CTX_free(ctx);
      goto LAB_0046f5d3;
    }
  }
  bVar11 = false;
LAB_0046f5d3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar11;
}

