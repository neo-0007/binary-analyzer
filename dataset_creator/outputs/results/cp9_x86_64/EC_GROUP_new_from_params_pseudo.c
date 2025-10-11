
/* WARNING: Removing unreachable block (ram,0x004e601f) */

EC_GROUP * EC_GROUP_new_from_params(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte *buf;
  int iVar1;
  int iVar2;
  long lVar3;
  EC_GROUP *group;
  BN_CTX *ctx;
  EC_GROUP *group_00;
  size_t sVar4;
  EC_POINT *p;
  EC_POINT *generator;
  BIGNUM *order;
  uchar *puVar5;
  EC_GROUP *group_01;
  EC_GROUP *group_02;
  undefined8 uVar6;
  long in_FS_OFFSET;
  BIGNUM *local_70;
  BIGNUM *local_68;
  BIGNUM *local_60;
  BIGNUM *local_58;
  BIGNUM *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (BIGNUM *)0x0;
  local_68 = (BIGNUM *)0x0;
  local_60 = (BIGNUM *)0x0;
  local_58 = (BIGNUM *)0x0;
  local_50 = (BIGNUM *)0x0;
  lVar3 = OSSL_PARAM_locate_const(param_1,"group");
  if (lVar3 != 0) {
    local_48 = 0;
    if (*(int *)(lVar3 + 8) == 4) {
      local_48 = *(long *)(lVar3 + 0x10);
      if (local_48 != 0) goto LAB_004e5688;
    }
    else if ((*(int *)(lVar3 + 8) == 6) &&
            (iVar1 = OSSL_PARAM_get_utf8_ptr(lVar3,&local_48), iVar1 != 0)) {
LAB_004e5688:
      iVar1 = ossl_ec_curve_name2nid(local_48);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_lib.c",0x5d3,"group_new_from_name");
        ERR_set_error(0x10,0x8d,0);
        group = (EC_GROUP *)0x0;
        goto LAB_004e56cb;
      }
      group = (EC_GROUP *)EC_GROUP_new_by_curve_name_ex(param_2,param_3);
      if ((group == (EC_GROUP *)0x0) ||
         (iVar1 = ossl_ec_group_set_params(group,param_1), iVar1 != 0)) goto LAB_004e56cb;
      EC_GROUP_free(group);
    }
    group = (EC_GROUP *)0x0;
    goto LAB_004e56cb;
  }
  ctx = (BN_CTX *)BN_CTX_new_ex(param_2);
  group = (EC_GROUP *)0x0;
  if (ctx == (BN_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x61d,"EC_GROUP_new_from_params");
    ERR_set_error(0x10,0xc0100,0);
    goto LAB_004e56cb;
  }
  BN_CTX_start(ctx);
  local_70 = BN_CTX_get(ctx);
  local_68 = BN_CTX_get(ctx);
  local_60 = BN_CTX_get(ctx);
  local_58 = BN_CTX_get(ctx);
  if (local_58 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x627,"EC_GROUP_new_from_params");
    ERR_set_error(0x10,0xc0100,0);
    p = (EC_POINT *)0x0;
    group_00 = (EC_GROUP *)0x0;
    goto LAB_004e57a6;
  }
  lVar3 = OSSL_PARAM_locate_const(param_1,"field-type");
  if ((lVar3 == 0) || (*(int *)(lVar3 + 8) != 4)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x62d,"EC_GROUP_new_from_params");
    uVar6 = 0x67;
LAB_004e5795:
    group_00 = (EC_GROUP *)0x0;
    ERR_set_error(0x10,uVar6,0);
    p = (EC_POINT *)0x0;
LAB_004e57a6:
    EC_GROUP_free(group_00);
    group_00 = group;
  }
  else {
    iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar3 + 0x10),"prime-field");
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar3 + 0x10),"characteristic-two-field");
      if (iVar1 != 0) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_lib.c",0x637,"EC_GROUP_new_from_params");
        uVar6 = 0x83;
        goto LAB_004e5795;
      }
    }
    uVar6 = OSSL_PARAM_locate_const(param_1,"a");
    iVar2 = OSSL_PARAM_get_BN(uVar6,&local_68);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_lib.c",0x63d,"EC_GROUP_new_from_params");
      uVar6 = 0xa8;
      goto LAB_004e5795;
    }
    uVar6 = OSSL_PARAM_locate_const(param_1,"b");
    iVar2 = OSSL_PARAM_get_BN(uVar6,&local_60);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_lib.c",0x642,"EC_GROUP_new_from_params");
      uVar6 = 0xa9;
      goto LAB_004e5795;
    }
    uVar6 = OSSL_PARAM_locate_const(param_1,"p");
    iVar2 = OSSL_PARAM_get_BN(uVar6,&local_70);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_lib.c",0x649,"EC_GROUP_new_from_params");
      uVar6 = 0xac;
      goto LAB_004e5795;
    }
    if (iVar1 != 0) {
      iVar1 = BN_is_negative();
      if ((iVar1 == 0) && (iVar1 = BN_is_zero(local_70), iVar1 == 0)) {
        iVar1 = BN_num_bits(local_70);
        if (iVar1 < 0x296) {
          group_00 = EC_GROUP_new_curve_GFp(local_70,local_68,local_60,ctx);
          if (group_00 == (EC_GROUP *)0x0) goto LAB_004e5b6a;
          goto LAB_004e58f6;
        }
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_lib.c",0x654,"EC_GROUP_new_from_params");
        uVar6 = 0x8f;
      }
      else {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_lib.c",0x64f,"EC_GROUP_new_from_params");
        uVar6 = 0xac;
      }
      goto LAB_004e5795;
    }
    group_00 = (EC_GROUP *)EC_GROUP_new_curve_GF2m(local_70,local_68,local_60,0);
    if (group_00 == (EC_GROUP *)0x0) {
LAB_004e5b6a:
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_lib.c",0x66c,"EC_GROUP_new_from_params");
      uVar6 = 0x80010;
      goto LAB_004e5795;
    }
    iVar1 = EC_GROUP_get_degree(group_00);
    if (0x295 < iVar1) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_lib.c",0x664,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0x8f,0);
      p = (EC_POINT *)0x0;
      goto LAB_004e57a6;
    }
LAB_004e58f6:
    lVar3 = OSSL_PARAM_locate_const(param_1,"seed");
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) == 5) {
        sVar4 = EC_GROUP_set_seed(group_00,*(uchar **)(lVar3 + 0x10),*(size_t *)(lVar3 + 0x18));
        if (sVar4 != 0) goto LAB_004e5b93;
        p = (EC_POINT *)0x0;
      }
      else {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_lib.c",0x674,"EC_GROUP_new_from_params");
        ERR_set_error(0x10,0xaf,0);
        p = (EC_POINT *)0x0;
      }
      goto LAB_004e57a6;
    }
LAB_004e5b93:
    lVar3 = OSSL_PARAM_locate_const(param_1,"generator");
    if ((lVar3 == 0) || (*(int *)(lVar3 + 8) != 5)) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_lib.c",0x67f,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0xad,0);
      p = (EC_POINT *)0x0;
      goto LAB_004e57a6;
    }
    buf = *(byte **)(lVar3 + 0x10);
    p = EC_POINT_new(group_00);
    if (p == (EC_POINT *)0x0) goto LAB_004e57a6;
    EC_GROUP_set_point_conversion_form(group_00,*buf & 0xfffffffe);
    iVar2 = EC_POINT_oct2point(group_00,p,buf,*(size_t *)(lVar3 + 0x18),ctx);
    if (iVar2 == 0) {
      ERR_new();
      uVar6 = 0x688;
LAB_004e5f53:
      ERR_set_debug("../crypto/ec/ec_lib.c",uVar6,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0xad,0);
      goto LAB_004e57a6;
    }
    uVar6 = OSSL_PARAM_locate_const(param_1,"order");
    iVar2 = OSSL_PARAM_get_BN(uVar6,&local_58);
    if ((((iVar2 == 0) || (iVar2 = BN_is_negative(local_58), iVar2 != 0)) ||
        (iVar2 = BN_is_zero(local_58), iVar2 != 0)) ||
       (iVar2 = BN_num_bits(local_58), iVar1 + 1 < iVar2)) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_lib.c",0x691,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0x7a,0);
      goto LAB_004e57a6;
    }
    lVar3 = OSSL_PARAM_locate_const(param_1,"cofactor");
    if ((lVar3 != 0) &&
       ((local_50 = BN_CTX_get(ctx), local_50 == (BIGNUM *)0x0 ||
        (iVar1 = OSSL_PARAM_get_BN(lVar3,&local_50), iVar1 == 0)))) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_lib.c",0x69a,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0xab,0);
      goto LAB_004e57a6;
    }
    iVar1 = EC_GROUP_set_generator(group_00,p,local_58,local_50);
    if (iVar1 == 0) {
      ERR_new();
      uVar6 = 0x6a1;
      goto LAB_004e5f53;
    }
    generator = EC_GROUP_get0_generator(group_00);
    order = (BIGNUM *)EC_GROUP_get0_order(group_00);
    puVar5 = EC_GROUP_get0_seed(group_00);
    group_01 = EC_GROUP_dup(group_00);
    if (((group_01 == (EC_GROUP *)0x0) ||
        (sVar4 = EC_GROUP_set_seed(group_01,(uchar *)0x0,0), sVar4 != 1)) ||
       (iVar1 = EC_GROUP_set_generator(group_01,generator,order,(BIGNUM *)0x0), iVar1 == 0)) {
LAB_004e6087:
      group_02 = (EC_GROUP *)0x0;
LAB_004e608a:
      EC_GROUP_free(group_01);
      EC_GROUP_free(group_02);
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_lib.c",0x6a7,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0xae,0);
      goto LAB_004e57a6;
    }
    iVar1 = ossl_ec_curve_nid_from_params(group_01,ctx);
    if (iVar1 != 0) {
      if (iVar1 == 0x2e9) {
        iVar1 = 0x2c9;
      }
      group_02 = (EC_GROUP *)EC_GROUP_new_by_curve_name_ex(param_2,param_3,iVar1);
      if (group_02 == (EC_GROUP *)0x0) goto LAB_004e6087;
      EC_GROUP_set_asn1_flag(group_02,0);
      if ((puVar5 != (uchar *)0x0) ||
         (sVar4 = EC_GROUP_set_seed(group_02,(uchar *)0x0,0), sVar4 == 1)) {
        EC_GROUP_free(group_01);
        if (group_02 == group_00) goto LAB_004e5f8e;
        EC_GROUP_free(group_00);
        group_00 = group_02;
        goto LAB_004e57b8;
      }
      goto LAB_004e608a;
    }
    EC_GROUP_free(group_01);
LAB_004e5f8e:
    lVar3 = OSSL_PARAM_locate_const(param_1);
    if ((lVar3 != 0) && (iVar1 = ossl_ec_encoding_param2id(lVar3), iVar1 == 0)) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_lib.c",0x6b2,"EC_GROUP_new_from_params");
      ERR_set_error(0x10,0x66,0);
      goto LAB_004e57a6;
    }
    EC_GROUP_set_asn1_flag(group_00,0);
  }
LAB_004e57b8:
  EC_POINT_free(p);
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  group = group_00;
LAB_004e56cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return group;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

