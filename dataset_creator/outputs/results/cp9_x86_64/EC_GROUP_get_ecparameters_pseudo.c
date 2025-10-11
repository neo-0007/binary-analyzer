
undefined4 * EC_GROUP_get_ecparameters(EC_GROUP *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  point_conversion_form_t pVar5;
  ASN1_OBJECT *pAVar6;
  int *piVar7;
  ASN1_NULL *pAVar8;
  undefined4 *puVar9;
  BIGNUM *pBVar10;
  void *data;
  EC_POINT *pEVar11;
  long lVar12;
  ASN1_INTEGER *pAVar13;
  undefined4 *puVar14;
  ASN1_STRING *pAVar15;
  ASN1_INTEGER *pAVar16;
  ulong uVar17;
  void *data_00;
  undefined8 uVar18;
  long in_FS_OFFSET;
  BIGNUM *local_78;
  void *local_70;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (void *)0x0;
  puVar9 = param_2;
  if ((param_2 == (undefined4 *)0x0) &&
     (puVar9 = (undefined4 *)ECPARAMETERS_new(), puVar9 == (undefined4 *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_asn1.c",0x18c,"EC_GROUP_get_ecparameters");
    ERR_set_error(0x10,0xc0100,0);
    puVar14 = puVar9;
  }
  else {
    *puVar9 = 1;
    puVar1 = *(undefined8 **)(puVar9 + 2);
    if ((param_1 == (EC_GROUP *)0x0) || (puVar1 == (undefined8 *)0x0)) {
LAB_004dbed7:
      ERR_new();
      uVar18 = 0x197;
LAB_004dbee8:
      ERR_set_debug("../crypto/ec/ec_asn1.c",uVar18,"EC_GROUP_get_ecparameters");
      ERR_set_error(0x10,0x80010,0);
    }
    else {
      ASN1_OBJECT_free((ASN1_OBJECT *)*puVar1);
      ASN1_TYPE_free((ASN1_TYPE *)puVar1[1]);
      iVar3 = EC_GROUP_get_field_type(param_1);
      pAVar6 = OBJ_nid2obj(iVar3);
      *puVar1 = pAVar6;
      if (pAVar6 == (ASN1_OBJECT *)0x0) {
        ERR_new();
        uVar18 = 0xca;
LAB_004dc531:
        ERR_set_debug("../crypto/ec/ec_asn1.c",uVar18,"ec_asn1_group2fieldid");
        uVar18 = 0x80008;
LAB_004dbfb7:
        ERR_set_error(0x10,uVar18,0);
LAB_004dbfc3:
        BN_free((BIGNUM *)0x0);
        goto LAB_004dbed7;
      }
      if (iVar3 != 0x196) {
        if (iVar3 != 0x197) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_asn1.c",0x12a,"ec_asn1_group2fieldid");
          uVar18 = 0x83;
          goto LAB_004dbfb7;
        }
        piVar7 = (int *)X9_62_CHARACTERISTIC_TWO_new();
        puVar1[1] = piVar7;
        if (piVar7 == (int *)0x0) {
          ERR_new();
          uVar18 = 0xed;
          goto LAB_004dc611;
        }
        iVar3 = EC_GROUP_get_degree(param_1);
        *piVar7 = iVar3;
        iVar3 = EC_GROUP_get_basis_type(param_1);
        if (iVar3 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_asn1.c",0xf6,"ec_asn1_group2fieldid");
          uVar18 = 0x80010;
          goto LAB_004dbfb7;
        }
        pAVar6 = OBJ_nid2obj(iVar3);
        *(ASN1_OBJECT **)(piVar7 + 2) = pAVar6;
        if (pAVar6 == (ASN1_OBJECT *)0x0) {
          ERR_new();
          uVar18 = 0xfb;
          goto LAB_004dc531;
        }
        if (iVar3 == 0x2aa) {
          iVar3 = EC_GROUP_get_trinomial_basis(param_1,&local_4c);
          if (iVar3 != 0) {
            pAVar16 = ASN1_INTEGER_new();
            *(ASN1_INTEGER **)(piVar7 + 4) = pAVar16;
            if (pAVar16 == (ASN1_INTEGER *)0x0) {
              ERR_new();
              uVar18 = 0x107;
              goto LAB_004dc809;
            }
            iVar3 = ASN1_INTEGER_set(pAVar16,local_4c);
            if (iVar3 != 0) goto LAB_004dbeba;
            ERR_new();
            ERR_set_debug("../crypto/ec/ec_asn1.c",0x10b,"ec_asn1_group2fieldid");
            ERR_set_error(0x10,0x8000d,0);
          }
        }
        else {
          if (iVar3 != 0x2ab) {
            pAVar8 = ASN1_NULL_new();
            *(ASN1_NULL **)(piVar7 + 4) = pAVar8;
            if (pAVar8 != (ASN1_NULL *)0x0) {
LAB_004dbeba:
              BN_free((BIGNUM *)0x0);
              goto LAB_004dc01a;
            }
            ERR_new();
            uVar18 = 0x123;
            goto LAB_004dc611;
          }
          iVar3 = EC_GROUP_get_pentanomial_basis(param_1,&local_54,&local_50,&local_4c);
          if (iVar3 != 0) {
            puVar14 = (undefined4 *)X9_62_PENTANOMIAL_new();
            *(undefined4 **)(piVar7 + 4) = puVar14;
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = local_54;
              puVar14[1] = local_50;
              puVar14[2] = local_4c;
              BN_free((BIGNUM *)0x0);
              goto LAB_004dc01a;
            }
            ERR_new();
            uVar18 = 0x116;
LAB_004dc809:
            ERR_set_debug("../crypto/ec/ec_asn1.c",uVar18,"ec_asn1_group2fieldid");
            ERR_set_error(0x10,0xc0100,0);
          }
        }
        goto LAB_004dbfc3;
      }
      pBVar10 = BN_new();
      if (pBVar10 == (BIGNUM *)0x0) {
        ERR_new();
        uVar18 = 0xd0;
LAB_004dc611:
        ERR_set_debug("../crypto/ec/ec_asn1.c",uVar18,"ec_asn1_group2fieldid");
        uVar18 = 0xc0100;
        goto LAB_004dbfb7;
      }
      iVar3 = EC_GROUP_get_curve(param_1,pBVar10,0,0);
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_asn1.c",0xd5,"ec_asn1_group2fieldid");
        uVar18 = 0x80010;
LAB_004dc307:
        ERR_set_error(0x10,uVar18,0);
        BN_free(pBVar10);
        goto LAB_004dbed7;
      }
      pAVar16 = BN_to_ASN1_INTEGER(pBVar10,(ASN1_INTEGER *)0x0);
      puVar1[1] = pAVar16;
      if (pAVar16 == (ASN1_INTEGER *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_asn1.c",0xdb,"ec_asn1_group2fieldid");
        uVar18 = 0x8000d;
        goto LAB_004dc307;
      }
      BN_free(pBVar10);
LAB_004dc01a:
      plVar2 = *(long **)(puVar9 + 4);
      if (((plVar2 == (long *)0x0) || (*plVar2 == 0)) || (plVar2[1] == 0)) {
LAB_004dc387:
        ERR_new();
        uVar18 = 0x19d;
        goto LAB_004dbee8;
      }
      pBVar10 = BN_new();
      if ((pBVar10 == (BIGNUM *)0x0) || (local_78 = BN_new(), local_78 == (BIGNUM *)0x0)) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_asn1.c",0x140,"ec_asn1_group2curve");
        ERR_set_error(0x10,0xc0100,0);
        local_78 = (BIGNUM *)0x0;
        data = (void *)0x0;
        local_70 = (void *)0x0;
LAB_004dc3e7:
        CRYPTO_free(data);
        CRYPTO_free(local_70);
        BN_free(pBVar10);
        BN_free(local_78);
        goto LAB_004dc387;
      }
      iVar3 = EC_GROUP_get_curve(param_1,0,pBVar10,local_78);
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_asn1.c",0x146,"ec_asn1_group2curve");
        ERR_set_error(0x10,0x80010,0);
        data = (void *)0x0;
        local_70 = (void *)0x0;
        goto LAB_004dc3e7;
      }
      iVar3 = EC_GROUP_get_degree(param_1);
      uVar17 = (long)iVar3 + 7U >> 3;
      iVar3 = (int)uVar17;
      data = CRYPTO_malloc(iVar3,"../crypto/ec/ec_asn1.c",0x150);
      if ((data == (void *)0x0) ||
         (local_70 = CRYPTO_malloc(iVar3,"../crypto/ec/ec_asn1.c",0x151), local_70 == (void *)0x0))
      {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_asn1.c",0x152,"ec_asn1_group2curve");
        ERR_set_error(0x10,0xc0100,0);
        local_70 = (void *)0x0;
        goto LAB_004dc3e7;
      }
      iVar4 = BN_bn2binpad(pBVar10,data,uVar17 & 0xffffffff);
      if ((iVar4 < 0) || (iVar4 = BN_bn2binpad(local_78,local_70), iVar4 < 0)) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_asn1.c",0x157,"ec_asn1_group2curve");
        ERR_set_error(0x10,0x80003,0);
        goto LAB_004dc3e7;
      }
      iVar4 = ASN1_OCTET_STRING_set((ASN1_STRING *)*plVar2,data,iVar3);
      if ((iVar4 == 0) ||
         (iVar3 = ASN1_OCTET_STRING_set((ASN1_STRING *)plVar2[1],local_70,iVar3), iVar3 == 0)) {
        ERR_new();
        uVar18 = 0x15e;
LAB_004dc726:
        ERR_set_debug("../crypto/ec/ec_asn1.c",uVar18,"ec_asn1_group2curve");
        ERR_set_error(0x10,0x8000d,0);
        goto LAB_004dc3e7;
      }
      data_00 = *(void **)(param_1 + 0x30);
      pAVar15 = (ASN1_STRING *)plVar2[2];
      if (data_00 == (void *)0x0) {
        ASN1_BIT_STRING_free(pAVar15);
        plVar2[2] = 0;
      }
      else {
        if (pAVar15 == (ASN1_STRING *)0x0) {
          pAVar15 = ASN1_BIT_STRING_new();
          plVar2[2] = (long)pAVar15;
          if (pAVar15 == (ASN1_BIT_STRING *)0x0) {
            ERR_new();
            ERR_set_debug("../crypto/ec/ec_asn1.c",0x166,"ec_asn1_group2curve");
            ERR_set_error(0x10,0xc0100,0);
            goto LAB_004dc3e7;
          }
          data_00 = *(void **)(param_1 + 0x30);
        }
        iVar3 = *(int *)(param_1 + 0x38);
        pAVar15->flags = pAVar15->flags & 0xfffffffffffffff0U | 8;
        iVar3 = ASN1_BIT_STRING_set(pAVar15,data_00,iVar3);
        if (iVar3 == 0) {
          ERR_new();
          uVar18 = 0x16d;
          goto LAB_004dc726;
        }
      }
      CRYPTO_free(data);
      CRYPTO_free(local_70);
      BN_free(pBVar10);
      BN_free(local_78);
      pEVar11 = EC_GROUP_get0_generator(param_1);
      if (pEVar11 != (EC_POINT *)0x0) {
        pVar5 = EC_GROUP_get_point_conversion_form(param_1);
        lVar12 = EC_POINT_point2buf(param_1,pEVar11,pVar5,&local_48,0);
        if (lVar12 == 0) {
          ERR_new();
          uVar18 = 0x1ab;
        }
        else {
          pAVar15 = *(ASN1_STRING **)(puVar9 + 6);
          if (pAVar15 == (ASN1_STRING *)0x0) {
            pAVar15 = ASN1_OCTET_STRING_new();
            *(ASN1_STRING **)(puVar9 + 6) = pAVar15;
            if (pAVar15 == (ASN1_OCTET_STRING *)0x0) {
              CRYPTO_free(local_48);
              ERR_new();
              ERR_set_debug("../crypto/ec/ec_asn1.c",0x1b0,"EC_GROUP_get_ecparameters");
              ERR_set_error(0x10,0xc0100,0);
              goto LAB_004dbf03;
            }
          }
          ASN1_STRING_set0(pAVar15,local_48,(int)lVar12);
          pBVar10 = (BIGNUM *)EC_GROUP_get0_order(param_1);
          if (pBVar10 != (BIGNUM *)0x0) {
            pAVar16 = *(ASN1_INTEGER **)(puVar9 + 8);
            pAVar13 = BN_to_ASN1_INTEGER(pBVar10,pAVar16);
            *(ASN1_INTEGER **)(puVar9 + 8) = pAVar13;
            if (pAVar13 == (ASN1_INTEGER *)0x0) {
              *(ASN1_INTEGER **)(puVar9 + 8) = pAVar16;
              ERR_new();
              uVar18 = 0x1be;
            }
            else {
              pBVar10 = (BIGNUM *)EC_GROUP_get0_cofactor(param_1);
              if (pBVar10 == (BIGNUM *)0x0) goto LAB_004dbf0b;
              pAVar16 = *(ASN1_INTEGER **)(puVar9 + 10);
              pAVar13 = BN_to_ASN1_INTEGER(pBVar10,pAVar16);
              *(ASN1_INTEGER **)(puVar9 + 10) = pAVar13;
              if (pAVar13 != (ASN1_INTEGER *)0x0) goto LAB_004dbf0b;
              *(ASN1_INTEGER **)(puVar9 + 10) = pAVar16;
              ERR_new();
              uVar18 = 0x1c8;
            }
            ERR_set_debug("../crypto/ec/ec_asn1.c",uVar18,"EC_GROUP_get_ecparameters");
            ERR_set_error(0x10,0x8000d,0);
            goto LAB_004dbf03;
          }
          ERR_new();
          uVar18 = 0x1b8;
        }
        goto LAB_004dbee8;
      }
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_asn1.c",0x1a3,"EC_GROUP_get_ecparameters");
      ERR_set_error(0x10,0x71,0);
    }
LAB_004dbf03:
    puVar14 = puVar9;
    if (param_2 != (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
      goto LAB_004dbf0b;
    }
  }
  puVar9 = (undefined4 *)0x0;
  ECPARAMETERS_free(puVar14);
LAB_004dbf0b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return puVar9;
}

