
EC_GROUP * EC_GROUP_new_from_ecparameters(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  ASN1_INTEGER *ai;
  int *piVar4;
  int iVar5;
  int iVar6;
  BIGNUM *a;
  BIGNUM *pBVar7;
  BIGNUM *a_00;
  void *__dest;
  EC_POINT *p;
  BIGNUM *cofactor;
  BN_CTX *c;
  EC_GROUP *group;
  size_t sVar8;
  long lVar9;
  undefined8 uVar10;
  EC_GROUP *local_50;
  EC_GROUP *local_48;
  
  plVar1 = *(long **)(param_1 + 8);
  if (((plVar1 == (long *)0x0) || (*plVar1 == 0)) || (plVar1[1] == 0)) {
    ERR_new();
    uVar10 = 0x217;
LAB_004dce31:
    c = (BN_CTX *)0x0;
    pBVar7 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    ERR_set_debug("../crypto/ec/ec_asn1.c",uVar10,"EC_GROUP_new_from_ecparameters");
    a_00 = (BIGNUM *)0x0;
    group = (EC_GROUP *)0x0;
    ERR_set_error(0x10,0x73,0);
    p = (EC_POINT *)0x0;
    local_50 = (EC_GROUP *)0x0;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (((puVar2 == (undefined8 *)0x0) || (piVar3 = (int *)*puVar2, piVar3 == (int *)0x0)) ||
       ((*(uchar **)(piVar3 + 2) == (uchar *)0x0 ||
        ((puVar2[1] == 0 || (*(long *)(puVar2[1] + 8) == 0)))))) {
      ERR_new();
      uVar10 = 0x224;
      goto LAB_004dce31;
    }
    a = BN_bin2bn(*(uchar **)(piVar3 + 2),*piVar3,(BIGNUM *)0x0);
    if (a == (BIGNUM *)0x0) {
      ERR_new();
      c = (BN_CTX *)0x0;
      pBVar7 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      group = (EC_GROUP *)0x0;
      ERR_set_debug("../crypto/ec/ec_asn1.c",0x229,"EC_GROUP_new_from_ecparameters");
      ERR_set_error(0x10,0x80003,0);
      p = (EC_POINT *)0x0;
      local_50 = (EC_GROUP *)0x0;
      goto LAB_004dce64;
    }
    piVar3 = *(int **)(*(long *)(param_1 + 0x10) + 8);
    pBVar7 = BN_bin2bn(*(uchar **)(piVar3 + 2),*piVar3,(BIGNUM *)0x0);
    if (pBVar7 == (BIGNUM *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_asn1.c",0x22e,"EC_GROUP_new_from_ecparameters");
      uVar10 = 0x80003;
LAB_004dd024:
      c = (BN_CTX *)0x0;
      a_00 = (BIGNUM *)0x0;
      ERR_set_error(0x10,uVar10,0);
      group = (EC_GROUP *)0x0;
      p = (EC_POINT *)0x0;
      local_50 = (EC_GROUP *)0x0;
    }
    else {
      iVar5 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(param_1 + 8));
      if (iVar5 != 0x197) {
        if (iVar5 != 0x196) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_asn1.c",0x2a7,"EC_GROUP_new_from_ecparameters");
          uVar10 = 0x67;
          goto LAB_004dd024;
        }
        ai = *(ASN1_INTEGER **)(*(long *)(param_1 + 8) + 8);
        if (ai == (ASN1_INTEGER *)0x0) {
          c = (BN_CTX *)0x0;
          a_00 = (BIGNUM *)0x0;
          group = (EC_GROUP *)0x0;
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_asn1.c",0x290,"EC_GROUP_new_from_ecparameters");
          ERR_set_error(0x10,0x73,0);
          p = (EC_POINT *)0x0;
          local_50 = (EC_GROUP *)0x0;
          goto LAB_004dce64;
        }
        a_00 = ASN1_INTEGER_to_BN(ai,(BIGNUM *)0x0);
        if (a_00 == (BIGNUM *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_asn1.c",0x295,"EC_GROUP_new_from_ecparameters");
          uVar10 = 0x8000d;
        }
        else {
          iVar5 = BN_is_negative(a_00);
          if ((iVar5 == 0) && (iVar5 = BN_is_zero(a_00), iVar5 == 0)) {
            iVar5 = BN_num_bits(a_00);
            if (iVar5 < 0x296) {
              local_50 = EC_GROUP_new_curve_GFp(a_00,a,pBVar7,(BN_CTX *)0x0);
LAB_004dcb3d:
              if (local_50 == (EC_GROUP *)0x0) {
                ERR_new();
                ERR_set_debug("../crypto/ec/ec_asn1.c",0x2ac,"EC_GROUP_new_from_ecparameters");
                uVar10 = 0x80010;
                goto LAB_004dd2a2;
              }
              if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
                CRYPTO_free(*(void **)(local_50 + 0x30));
                __dest = CRYPTO_malloc(**(int **)(*(long *)(param_1 + 0x10) + 0x10),
                                       "../crypto/ec/ec_asn1.c",0x2b3);
                *(void **)(local_50 + 0x30) = __dest;
                if (__dest == (void *)0x0) {
                  ERR_new();
                  c = (BN_CTX *)0x0;
                  ERR_set_debug("../crypto/ec/ec_asn1.c",0x2b4,"EC_GROUP_new_from_ecparameters");
                  ERR_set_error(0x10,0xc0100,0);
                  p = (EC_POINT *)0x0;
                  group = (EC_GROUP *)0x0;
                  goto LAB_004dce64;
                }
                piVar3 = *(int **)(*(long *)(param_1 + 0x10) + 0x10);
                memcpy(__dest,*(void **)(piVar3 + 2),(long)*piVar3);
                *(long *)(local_50 + 0x38) = (long)**(int **)(*(long *)(param_1 + 0x10) + 0x10);
              }
              if ((((*(long *)(param_1 + 0x20) == 0) ||
                   (piVar3 = *(int **)(param_1 + 0x18), piVar3 == (int *)0x0)) ||
                  (*(long *)(piVar3 + 2) == 0)) || (*piVar3 == 0)) {
                ERR_new();
                uVar10 = 0x2c0;
                goto LAB_004dd28f;
              }
              p = EC_POINT_new(local_50);
              if (p == (EC_POINT *)0x0) {
                c = (BN_CTX *)0x0;
                group = (EC_GROUP *)0x0;
                goto LAB_004dce64;
              }
              EC_GROUP_set_point_conversion_form
                        (local_50,**(byte **)(*(long *)(param_1 + 0x18) + 8) & 0xfffffffe);
              iVar6 = EC_POINT_oct2point(local_50,p,*(uchar **)(*(int **)(param_1 + 0x18) + 2),
                                         (long)**(int **)(param_1 + 0x18),(BN_CTX *)0x0);
              if (iVar6 == 0) {
                ERR_new();
                uVar10 = 0x2ce;
LAB_004dd477:
                ERR_set_debug("../crypto/ec/ec_asn1.c",uVar10,"EC_GROUP_new_from_ecparameters");
                uVar10 = 0x80010;
              }
              else {
                a = ASN1_INTEGER_to_BN(*(ASN1_INTEGER **)(param_1 + 0x20),a);
                if (a == (BIGNUM *)0x0) {
                  ERR_new();
                  ERR_set_debug("../crypto/ec/ec_asn1.c",0x2d4,"EC_GROUP_new_from_ecparameters");
                  uVar10 = 0x8000d;
                }
                else {
                  iVar6 = BN_is_negative(a);
                  if ((iVar6 == 0) && (iVar6 = BN_is_zero(a), iVar6 == 0)) {
                    iVar6 = BN_num_bits(a);
                    if (iVar6 <= iVar5 + 1) {
                      if (*(ASN1_INTEGER **)(param_1 + 0x28) == (ASN1_INTEGER *)0x0) {
                        cofactor = (BIGNUM *)0x0;
                        BN_free(pBVar7);
                      }
                      else {
                        cofactor = ASN1_INTEGER_to_BN(*(ASN1_INTEGER **)(param_1 + 0x28),pBVar7);
                        if (cofactor == (BIGNUM *)0x0) {
                          ERR_new();
                          ERR_set_debug("../crypto/ec/ec_asn1.c",0x2e5,
                                        "EC_GROUP_new_from_ecparameters");
                          uVar10 = 0x8000d;
                          pBVar7 = cofactor;
                          goto LAB_004dd445;
                        }
                      }
                      iVar5 = EC_GROUP_set_generator(local_50,p,a,cofactor);
                      pBVar7 = cofactor;
                      if (iVar5 == 0) {
                        ERR_new();
                        uVar10 = 0x2ea;
                        goto LAB_004dd477;
                      }
                      c = BN_CTX_new();
                      if (c == (BN_CTX *)0x0) {
                        ERR_new();
                        group = (EC_GROUP *)0x0;
                        ERR_set_debug("../crypto/ec/ec_asn1.c",0x2fb,
                                      "EC_GROUP_new_from_ecparameters");
                        ERR_set_error(0x10,0x80003,0);
                      }
                      else {
                        group = EC_GROUP_dup(local_50);
                        if (((group == (EC_GROUP *)0x0) ||
                            (sVar8 = EC_GROUP_set_seed(group,(uchar *)0x0,0), sVar8 != 1)) ||
                           (iVar5 = EC_GROUP_set_generator(group,p,a,(BIGNUM *)0x0), iVar5 == 0)) {
                          ERR_new();
                          uVar10 = 0x301;
                        }
                        else {
                          iVar5 = ossl_ec_curve_nid_from_params(group);
                          local_48 = local_50;
                          if (iVar5 == 0) goto LAB_004dce7f;
                          if (iVar5 == 0x2e9) {
                            iVar5 = 0x2c9;
                          }
                          local_48 = EC_GROUP_new_by_curve_name(iVar5);
                          if (local_48 != (EC_GROUP *)0x0) {
                            EC_GROUP_free(local_50);
                            EC_GROUP_set_asn1_flag(local_48,0);
                            if ((*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) ||
                               (sVar8 = EC_GROUP_set_seed(local_48,(uchar *)0x0,0),
                               local_50 = local_48, sVar8 == 1)) goto LAB_004dce7f;
                            goto LAB_004dce64;
                          }
                          ERR_new();
                          uVar10 = 0x31a;
                        }
                        ERR_set_debug("../crypto/ec/ec_asn1.c",uVar10,
                                      "EC_GROUP_new_from_ecparameters");
                        ERR_set_error(0x10,0x80010,0);
                      }
                      goto LAB_004dce64;
                    }
                    ERR_new();
                    ERR_set_debug("../crypto/ec/ec_asn1.c",0x2dc,"EC_GROUP_new_from_ecparameters");
                    uVar10 = 0x7a;
                  }
                  else {
                    ERR_new();
                    ERR_set_debug("../crypto/ec/ec_asn1.c",0x2d8,"EC_GROUP_new_from_ecparameters");
                    uVar10 = 0x7a;
                  }
                }
              }
LAB_004dd445:
              c = (BN_CTX *)0x0;
              group = (EC_GROUP *)0x0;
              ERR_set_error(0x10,uVar10,0);
              goto LAB_004dce64;
            }
            ERR_new();
            ERR_set_debug("../crypto/ec/ec_asn1.c",0x2a0,"EC_GROUP_new_from_ecparameters");
            uVar10 = 0x8f;
          }
          else {
            ERR_new();
            ERR_set_debug("../crypto/ec/ec_asn1.c",0x29a,"EC_GROUP_new_from_ecparameters");
            uVar10 = 0x67;
          }
        }
        goto LAB_004dcf60;
      }
      piVar3 = *(int **)(*(long *)(param_1 + 8) + 8);
      iVar5 = *piVar3;
      if (0x295 < iVar5) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_asn1.c",0x242,"EC_GROUP_new_from_ecparameters");
        uVar10 = 0x8f;
        goto LAB_004dd024;
      }
      a_00 = BN_new();
      if (a_00 == (BIGNUM *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_asn1.c",0x247,"EC_GROUP_new_from_ecparameters");
        uVar10 = 0xc0100;
LAB_004dcf60:
        ERR_set_error(0x10,uVar10,0);
      }
      else {
        iVar6 = OBJ_obj2nid(*(ASN1_OBJECT **)(piVar3 + 2));
        if (iVar6 != 0x2aa) {
          if (iVar6 == 0x2ab) {
            piVar4 = *(int **)(piVar3 + 4);
            if (piVar4 == (int *)0x0) {
              ERR_new();
              uVar10 = 0x269;
              local_50 = (EC_GROUP *)0x0;
              goto LAB_004dd28f;
            }
            if ((((piVar4[2] < *piVar3) && (piVar4[1] < piVar4[2])) && (0 < *piVar4)) &&
               (*piVar4 < piVar4[1])) {
              iVar6 = BN_set_bit(a_00,*piVar3);
              if (((iVar6 != 0) && (iVar6 = BN_set_bit(a_00,*piVar4), iVar6 != 0)) &&
                 (iVar6 = BN_set_bit(a_00,piVar4[1]), iVar6 != 0)) {
                iVar6 = BN_set_bit(a_00,piVar4[2]);
                goto joined_r0x004dd23c;
              }
              goto LAB_004dcf6c;
            }
            ERR_new();
            ERR_set_debug("../crypto/ec/ec_asn1.c",0x270,"EC_GROUP_new_from_ecparameters");
            uVar10 = 0x84;
          }
          else if (iVar6 == 0x2a9) {
            ERR_new();
            ERR_set_debug("../crypto/ec/ec_asn1.c",0x280,"EC_GROUP_new_from_ecparameters");
            uVar10 = 0x7e;
          }
          else {
            ERR_new();
            ERR_set_debug("../crypto/ec/ec_asn1.c",0x284,"EC_GROUP_new_from_ecparameters");
            uVar10 = 0x73;
          }
          goto LAB_004dcf60;
        }
        if (*(ASN1_INTEGER **)(piVar3 + 4) == (ASN1_INTEGER *)0x0) {
          ERR_new();
          uVar10 = 0x252;
          local_50 = (EC_GROUP *)0x0;
LAB_004dd28f:
          ERR_set_debug("../crypto/ec/ec_asn1.c",uVar10,"EC_GROUP_new_from_ecparameters");
          uVar10 = 0x73;
LAB_004dd2a2:
          c = (BN_CTX *)0x0;
          group = (EC_GROUP *)0x0;
          ERR_set_error(0x10,uVar10,0);
          p = (EC_POINT *)0x0;
          goto LAB_004dce64;
        }
        lVar9 = ASN1_INTEGER_get(*(ASN1_INTEGER **)(piVar3 + 4));
        if ((lVar9 < 1) || (*piVar3 <= lVar9)) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_asn1.c",0x259,"EC_GROUP_new_from_ecparameters");
          uVar10 = 0x89;
          goto LAB_004dcf60;
        }
        iVar6 = BN_set_bit(a_00,*piVar3);
        if (iVar6 != 0) {
          iVar6 = BN_set_bit(a_00,(int)lVar9);
joined_r0x004dd23c:
          if ((iVar6 != 0) && (iVar6 = BN_set_bit(a_00,0), iVar6 != 0)) {
            local_50 = (EC_GROUP *)EC_GROUP_new_curve_GF2m(a_00,a,pBVar7,0);
            goto LAB_004dcb3d;
          }
        }
      }
LAB_004dcf6c:
      c = (BN_CTX *)0x0;
      p = (EC_POINT *)0x0;
      group = (EC_GROUP *)0x0;
      local_50 = (EC_GROUP *)0x0;
    }
  }
LAB_004dce64:
  EC_GROUP_free(local_50);
  local_48 = (EC_GROUP *)0x0;
  cofactor = pBVar7;
LAB_004dce7f:
  EC_GROUP_free(group);
  BN_free(a_00);
  BN_free(a);
  BN_free(cofactor);
  EC_POINT_free(p);
  BN_CTX_free(c);
  return local_48;
}

