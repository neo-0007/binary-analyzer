
EC_GROUP * EC_GROUP_new_by_curve_name_ex(undefined8 param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BN_CTX *ctx;
  BIGNUM *b;
  undefined8 uVar5;
  EC_GROUP *group;
  EC_POINT *generator;
  BIGNUM *a;
  BIGNUM *order;
  size_t sVar6;
  ASN1_OBJECT *a_00;
  long lVar7;
  char *pcVar8;
  EC_GROUP *pEVar9;
  int iVar10;
  int *piVar11;
  uchar *puVar12;
  BIGNUM *local_80;
  BIGNUM *local_70;
  BIGNUM *local_68;
  
  if (param_3 < 1) goto LAB_004e0550;
  lVar7 = 0;
  iVar10 = 0x2c0;
  piVar11 = &DAT_0091e6a0;
  while (param_3 != iVar10) {
    lVar7 = lVar7 + 1;
    if (lVar7 == 0x52) goto LAB_004e0550;
    iVar10 = *piVar11;
    piVar11 = piVar11 + 8;
  }
  iVar10 = (&curve_list)[lVar7 * 8];
  piVar11 = (int *)(&PTR__EC_SECG_PRIME_112R1_0091e688)[lVar7 * 4];
  pcVar1 = (code *)(&DAT_0091e690)[lVar7 * 4];
  if (piVar11 == (int *)0x0) {
    uVar5 = 0;
    if (pcVar1 != (code *)0x0) {
      uVar5 = (*pcVar1)();
    }
    pEVar9 = (EC_GROUP *)ossl_ec_group_new_ex(param_1,param_2,uVar5);
  }
  else {
    ctx = (BN_CTX *)BN_CTX_new_ex(param_1);
    if (ctx == (BN_CTX *)0x0) {
      ERR_new();
      a = (BIGNUM *)0x0;
      b = (BIGNUM *)0x0;
      order = (BIGNUM *)0x0;
      group = (EC_GROUP *)0x0;
      ERR_set_debug("../crypto/ec/ec_curve.c",0xc52,"ec_group_new_from_data");
      ERR_set_error(0x10,0xc0100,0);
      generator = (EC_POINT *)0x0;
      local_68 = (BIGNUM *)0x0;
      local_80 = (BIGNUM *)0x0;
      local_70 = (BIGNUM *)0x0;
      goto LAB_004e052f;
    }
    iVar4 = piVar11[1];
    iVar3 = piVar11[2];
    puVar12 = (uchar *)((long)piVar11 + (long)iVar4 + 0x10U);
    local_70 = BN_bin2bn(puVar12,iVar3,(BIGNUM *)0x0);
    if (local_70 == (BIGNUM *)0x0) {
LAB_004e04e0:
      local_80 = (BIGNUM *)0x0;
LAB_004e04e9:
      ERR_new();
      a = (BIGNUM *)0x0;
      b = (BIGNUM *)0x0;
      order = (BIGNUM *)0x0;
      group = (EC_GROUP *)0x0;
      ERR_set_debug("../crypto/ec/ec_curve.c",0xc5f,"ec_group_new_from_data");
      ERR_set_error(0x10,0x80003,0);
      generator = (EC_POINT *)0x0;
      local_68 = (BIGNUM *)0x0;
LAB_004e052f:
      pEVar9 = (EC_GROUP *)0x0;
      EC_GROUP_free(group);
    }
    else {
      puVar12 = puVar12 + iVar3;
      local_80 = BN_bin2bn(puVar12,iVar3,(BIGNUM *)0x0);
      if (local_80 == (BIGNUM *)0x0) goto LAB_004e04e0;
      puVar12 = puVar12 + iVar3;
      b = BN_bin2bn(puVar12,iVar3,(BIGNUM *)0x0);
      if (b == (BIGNUM *)0x0) goto LAB_004e04e9;
      if (pcVar1 == (code *)0x0) {
        if (*piVar11 == 0x196) {
          group = EC_GROUP_new_curve_GFp(local_70,local_80,b,ctx);
          if (group == (EC_GROUP *)0x0) {
            ERR_new();
            uVar5 = 0xc6c;
            goto LAB_004e0681;
          }
        }
        else {
          group = (EC_GROUP *)EC_GROUP_new_curve_GF2m();
          if (group == (EC_GROUP *)0x0) {
            ERR_new();
            uVar5 = 0xc75;
LAB_004e0681:
            order = (BIGNUM *)0x0;
            a = (BIGNUM *)0x0;
            ERR_set_debug("../crypto/ec/ec_curve.c",uVar5,"ec_group_new_from_data");
            ERR_set_error(0x10,0x80010,0);
            generator = (EC_POINT *)0x0;
            local_68 = (BIGNUM *)0x0;
            goto LAB_004e052f;
          }
        }
      }
      else {
        uVar5 = (*pcVar1)();
        group = (EC_GROUP *)ossl_ec_group_new_ex(param_1,param_2,uVar5);
        if ((group == (EC_GROUP *)0x0) ||
           (iVar2 = (**(code **)(*(long *)group + 0x28))(group,local_70,local_80,b,ctx), iVar2 == 0)
           ) {
          ERR_new();
          uVar5 = 0xc67;
          goto LAB_004e0681;
        }
      }
      EC_GROUP_set_curve_name(group,iVar10);
      generator = EC_POINT_new(group);
      if (generator == (EC_POINT *)0x0) {
        order = (BIGNUM *)0x0;
        a = (BIGNUM *)0x0;
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_curve.c",0xc7e,"ec_group_new_from_data");
        ERR_set_error(0x10,0x80010,0);
        local_68 = (BIGNUM *)0x0;
        goto LAB_004e052f;
      }
      puVar12 = puVar12 + iVar3;
      a = BN_bin2bn(puVar12,iVar3,(BIGNUM *)0x0);
      if (a == (BIGNUM *)0x0) {
LAB_004e0720:
        order = (BIGNUM *)0x0;
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_curve.c",0xc84,"ec_group_new_from_data");
        ERR_set_error(0x10,0x80003,0);
        local_68 = (BIGNUM *)0x0;
        goto LAB_004e052f;
      }
      local_68 = BN_bin2bn(puVar12 + iVar3,iVar3,(BIGNUM *)0x0);
      if (local_68 == (BIGNUM *)0x0) goto LAB_004e0720;
      iVar2 = EC_POINT_set_affine_coordinates(group,generator,a,local_68,ctx);
      if (iVar2 == 0) {
        order = (BIGNUM *)0x0;
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_curve.c",0xc88,"ec_group_new_from_data");
        ERR_set_error(0x10,0x80010,0);
        goto LAB_004e052f;
      }
      order = BN_bin2bn(puVar12 + iVar3 + iVar3,iVar3,(BIGNUM *)0x0);
      if ((order == (BIGNUM *)0x0) || (iVar3 = BN_set_word(a,(ulong)(uint)piVar11[3]), iVar3 == 0))
      {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_curve.c",0xc8d,"ec_group_new_from_data");
        ERR_set_error(0x10,0x80003,0);
        goto LAB_004e052f;
      }
      iVar3 = EC_GROUP_set_generator(group,generator,order,a);
      if (iVar3 == 0) {
        ERR_new();
        uVar5 = 0xc91;
LAB_004e0808:
        ERR_set_debug("../crypto/ec/ec_curve.c",uVar5,"ec_group_new_from_data");
        ERR_set_error(0x10,0x80010,0);
        goto LAB_004e052f;
      }
      if ((iVar4 != 0) &&
         (sVar6 = EC_GROUP_set_seed(group,(uchar *)(piVar11 + 4),(long)iVar4), sVar6 == 0)) {
        ERR_new();
        uVar5 = 0xc96;
        goto LAB_004e0808;
      }
      iVar4 = EC_GROUP_get_asn1_flag(group);
      pEVar9 = group;
      if (iVar4 == 1) {
        a_00 = OBJ_nid2obj(iVar10);
        if (a_00 == (ASN1_OBJECT *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_curve.c",0xcac,"ec_group_new_from_data");
          ERR_set_error(0x10,0x80008,0);
          goto LAB_004e052f;
        }
        lVar7 = OBJ_length(a_00);
        if (lVar7 == 0) {
          EC_GROUP_set_asn1_flag(group,0);
        }
        ASN1_OBJECT_free(a_00);
      }
    }
    EC_POINT_free(generator);
    BN_CTX_free(ctx);
    BN_free(local_70);
    BN_free(local_80);
    BN_free(b);
    BN_free(order);
    BN_free(a);
    BN_free(local_68);
  }
  if (pEVar9 != (EC_GROUP *)0x0) {
    return pEVar9;
  }
LAB_004e0550:
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_curve.c",0xcd9,"EC_GROUP_new_by_curve_name_ex");
  pcVar8 = OBJ_nid2sn(param_3);
  ERR_set_error(0x10,0x81,"name=%s",pcVar8);
  return (EC_GROUP *)0x0;
}

