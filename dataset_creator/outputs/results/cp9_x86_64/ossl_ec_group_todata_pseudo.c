
undefined8
ossl_ec_group_todata
          (EC_GROUP *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          BN_CTX *param_6,undefined8 *param_7)

{
  point_conversion_form_t pVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  EC_POINT *pEVar8;
  BIGNUM *pBVar9;
  BIGNUM *pBVar10;
  BIGNUM *pBVar11;
  uchar *puVar12;
  size_t sVar13;
  undefined8 uVar14;
  char *local_48;
  
  if (param_1 == (EC_GROUP *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_backend.c",0x12a,"ossl_ec_group_todata");
    ERR_set_error(0x10,0x86,0);
    return 0;
  }
  pVar1 = EC_GROUP_get_point_conversion_form(param_1);
  lVar5 = ossl_ec_pt_format_id2name(pVar1);
  if ((lVar5 == 0) ||
     (iVar2 = ossl_param_build_set_utf8_string(param_2,param_3,"point-format",lVar5), iVar2 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_backend.c",0x134,"ossl_ec_group_todata");
    ERR_set_error(0x10,0x68,0);
    return 0;
  }
  uVar3 = EC_GROUP_get_asn1_flag(param_1);
  if ((*(long *)(encoding_nameid_map + (ulong)(uVar3 & 1) * 0x10 + 8) == 0) ||
     (iVar2 = ossl_param_build_set_utf8_string(param_2,param_3,"encoding"), iVar2 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_backend.c",0x13d,"ossl_ec_group_todata");
    ERR_set_error(0x10,0x66,0);
    return 0;
  }
  iVar2 = EC_GROUP_get_curve_name(param_1);
  if ((param_2 == 0) || (iVar2 == 0)) {
    iVar4 = EC_GROUP_get_field_type(param_1);
    if (iVar4 == 0x196) {
      local_48 = "prime-field";
    }
    else {
      local_48 = "characteristic-two-field";
      if (iVar4 != 0x197) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_backend.c",0xb3,"ec_group_explicit_todata");
        ERR_set_error(0x10,0x67,0);
        return 0;
      }
    }
    lVar5 = OSSL_PARAM_locate_const(param_3,"p");
    lVar6 = OSSL_PARAM_locate_const(param_3,"a");
    lVar7 = OSSL_PARAM_locate_const(param_3,"b");
    if (lVar7 != 0 || ((lVar5 != 0 || lVar6 != 0) || param_2 != 0)) {
      pBVar9 = BN_CTX_get(param_6);
      pBVar10 = BN_CTX_get(param_6);
      pBVar11 = BN_CTX_get(param_6);
      if (pBVar11 == (BIGNUM *)0x0) {
        ERR_new();
        uVar14 = 0xc1;
LAB_004def02:
        ERR_set_debug("../crypto/ec/ec_backend.c",uVar14,"ec_group_explicit_todata");
        ERR_set_error(0x10,0xc0100,0);
        return 0;
      }
      iVar4 = EC_GROUP_get_curve(param_1,pBVar9,pBVar10,pBVar11,param_6);
      if (iVar4 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_backend.c",0xc6,"ec_group_explicit_todata");
        ERR_set_error(0x10,0x8d,0);
        return 0;
      }
      iVar4 = ossl_param_build_set_bn(param_2,param_3,"p",pBVar9);
      if (((iVar4 == 0) ||
          (iVar4 = ossl_param_build_set_bn(param_2,param_3,"a",pBVar10), iVar4 == 0)) ||
         (iVar4 = ossl_param_build_set_bn(param_2,param_3,"b",pBVar11), iVar4 == 0)) {
        ERR_new();
        uVar14 = 0xcc;
        goto LAB_004def02;
      }
    }
    lVar5 = OSSL_PARAM_locate_const(param_3,"order");
    if (lVar5 == 0 && param_2 == 0) {
LAB_004ded41:
      lVar5 = OSSL_PARAM_locate_const(param_3,"field-type");
      if ((lVar5 == 0 && param_2 == 0) ||
         (iVar4 = ossl_param_build_set_utf8_string(param_2,param_3,"field-type",local_48),
         iVar4 != 0)) {
        lVar5 = OSSL_PARAM_locate_const(param_3,"generator");
        if (lVar5 != 0 || param_2 != 0) {
          pEVar8 = EC_GROUP_get0_generator(param_1);
          pVar1 = EC_GROUP_get_point_conversion_form(param_1);
          if (pEVar8 == (EC_POINT *)0x0) {
            ERR_new();
            uVar14 = 0xf1;
LAB_004df05d:
            ERR_set_debug("../crypto/ec/ec_backend.c",uVar14,"ec_group_explicit_todata");
            ERR_set_error(0x10,0xad,0);
            return 0;
          }
          lVar5 = EC_POINT_point2buf(param_1,pEVar8,pVar1,param_7,param_6);
          if (lVar5 == 0) {
            ERR_new();
            uVar14 = 0xf6;
            goto LAB_004df05d;
          }
          iVar4 = ossl_param_build_set_octet_string(param_2,param_3,"generator",*param_7);
          if (iVar4 == 0) {
            ERR_new();
            uVar14 = 0xfc;
            goto LAB_004df023;
          }
        }
        lVar5 = OSSL_PARAM_locate_const(param_3,"cofactor");
        if (((lVar5 == 0 && param_2 == 0) || (lVar5 = EC_GROUP_get0_cofactor(param_1), lVar5 == 0))
           || (iVar4 = ossl_param_build_set_bn(param_2,param_3,"cofactor",lVar5), iVar4 != 0)) {
          lVar5 = OSSL_PARAM_locate_const(param_3,"seed");
          if (lVar5 != 0 || param_2 != 0) {
            puVar12 = EC_GROUP_get0_seed(param_1);
            sVar13 = EC_GROUP_get_seed_len(param_1);
            if (((puVar12 != (uchar *)0x0) && (sVar13 != 0)) &&
               (iVar4 = ossl_param_build_set_octet_string(param_2,param_3,"seed",puVar12,sVar13),
               iVar4 == 0)) {
              ERR_new();
              uVar14 = 0x117;
              goto LAB_004df023;
            }
          }
          if (iVar2 != 0) goto LAB_004debdc;
          goto LAB_004dec02;
        }
        ERR_new();
        uVar14 = 0x108;
      }
      else {
        ERR_new();
        uVar14 = 0xe5;
      }
    }
    else {
      lVar5 = EC_GROUP_get0_order(param_1);
      if (lVar5 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_backend.c",0xd6,"ec_group_explicit_todata");
        ERR_set_error(0x10,0x7a,0);
        return 0;
      }
      iVar4 = ossl_param_build_set_bn(param_2,param_3,"order");
      if (iVar4 != 0) goto LAB_004ded41;
      ERR_new();
      uVar14 = 0xdb;
    }
LAB_004df023:
    ERR_set_debug("../crypto/ec/ec_backend.c",uVar14,"ec_group_explicit_todata");
    ERR_set_error(0x10,0xc0100,0);
    uVar14 = 0;
  }
  else {
LAB_004debdc:
    lVar5 = OSSL_EC_curve_nid2name(iVar2);
    if ((lVar5 == 0) ||
       (iVar2 = ossl_param_build_set_utf8_string(param_2,param_3,"group",lVar5), iVar2 == 0)) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_backend.c",0x154,"ossl_ec_group_todata");
      ERR_set_error(0x10,0x8d,0);
      return 0;
    }
LAB_004dec02:
    uVar14 = 1;
  }
  return uVar14;
}

