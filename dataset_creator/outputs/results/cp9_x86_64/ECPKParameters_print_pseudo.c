
int ECPKParameters_print(BIO *bp,EC_GROUP *x,int off)

{
  int iVar1;
  int iVar2;
  point_conversion_form_t pVar3;
  BN_CTX *c;
  BIGNUM *num;
  BIGNUM *num_00;
  char *pcVar4;
  long lVar5;
  EC_POINT *pEVar6;
  BIGNUM *num_01;
  BIGNUM *num_02;
  uchar *puVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  BIGNUM *local_80;
  size_t local_58;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (x == (EC_GROUP *)0x0) {
    local_80 = (BIGNUM *)0x0;
    num_00 = (BIGNUM *)0x0;
    c = (BN_CTX *)0x0;
    lVar5 = 0;
    uVar8 = 0xc0102;
    num = (BIGNUM *)0x0;
    goto LAB_004eb549;
  }
  c = BN_CTX_new();
  if (c == (BN_CTX *)0x0) {
LAB_004eb532:
    num_00 = (BIGNUM *)0x0;
    num = (BIGNUM *)0x0;
    lVar5 = 0;
    uVar8 = 0xc0100;
    local_80 = (BIGNUM *)0x0;
  }
  else {
    iVar1 = EC_GROUP_get_asn1_flag(x);
    if (iVar1 == 0) {
      iVar1 = EC_GROUP_get_field_type(x);
      num = BN_new();
      if (num == (BIGNUM *)0x0) goto LAB_004eb532;
      num_00 = BN_new();
      if (num_00 == (BIGNUM *)0x0) {
        local_80 = (BIGNUM *)0x0;
        lVar5 = 0;
        uVar8 = 0xc0100;
      }
      else {
        local_80 = BN_new();
        if (local_80 == (BIGNUM *)0x0) {
          lVar5 = 0;
          uVar8 = 0xc0100;
        }
        else {
          iVar2 = EC_GROUP_get_curve(x,num,num_00,local_80,c);
          if ((iVar2 != 0) && (pEVar6 = EC_GROUP_get0_generator(x), pEVar6 != (EC_POINT *)0x0)) {
            num_01 = (BIGNUM *)EC_GROUP_get0_order(x);
            num_02 = (BIGNUM *)EC_GROUP_get0_cofactor(x);
            if (num_01 != (BIGNUM *)0x0) {
              pVar3 = EC_GROUP_get_point_conversion_form(x);
              lVar5 = EC_POINT_point2buf(x,pEVar6,pVar3,&local_48,c);
              if (lVar5 == 0) {
                uVar8 = 0x80010;
                goto LAB_004eb549;
              }
              puVar7 = EC_GROUP_get0_seed(x);
              local_58 = 0;
              if (puVar7 != (uchar *)0x0) {
                local_58 = EC_GROUP_get_seed_len(x);
              }
              iVar2 = BIO_indent(bp,off,0x80);
              if (iVar2 != 0) {
                pcVar4 = OBJ_nid2sn(iVar1);
                iVar2 = BIO_printf(bp,"Field Type: %s\n",pcVar4);
                if (0 < iVar2) {
                  if (iVar1 == 0x197) {
                    iVar1 = EC_GROUP_get_basis_type(x);
                    if ((iVar1 != 0) && (iVar2 = BIO_indent(bp,off,0x80), iVar2 != 0)) {
                      pcVar4 = OBJ_nid2sn(iVar1);
                      iVar1 = BIO_printf(bp,"Basis Type: %s\n",pcVar4);
                      if (0 < iVar1) {
                        iVar1 = ASN1_bn_print(bp,"Polynomial:",num,(uchar *)0x0,off);
                        goto joined_r0x004eb9ed;
                      }
                    }
                  }
                  else {
                    iVar1 = ASN1_bn_print(bp,"Prime:",num,(uchar *)0x0,off);
joined_r0x004eb9ed:
                    if (((iVar1 != 0) &&
                        (iVar1 = ASN1_bn_print(bp,"A:   ",num_00,(uchar *)0x0,off), iVar1 != 0)) &&
                       (iVar1 = ASN1_bn_print(bp,"B:   ",local_80,(uchar *)0x0,off), iVar1 != 0)) {
                      pcVar4 = "Generator (compressed):";
                      if ((pVar3 != POINT_CONVERSION_COMPRESSED) &&
                         (pcVar4 = "Generator (uncompressed):",
                         pVar3 != POINT_CONVERSION_UNCOMPRESSED)) {
                        pcVar4 = "Generator (hybrid):";
                      }
                      if (((local_48 == 0) ||
                          (iVar1 = print_bin(bp,pcVar4,local_48,lVar5,off), iVar1 != 0)) &&
                         ((iVar1 = ASN1_bn_print(bp,"Order: ",num_01,(uchar *)0x0,off), iVar1 != 0
                          && ((num_02 == (BIGNUM *)0x0 ||
                              (iVar1 = ASN1_bn_print(bp,"Cofactor: ",num_02,(uchar *)0x0,off),
                              iVar1 != 0)))))) {
                        if (puVar7 == (uchar *)0x0) {
                          iVar1 = 1;
                          goto LAB_004eb57d;
                        }
                        iVar1 = print_bin(bp,"Seed:",puVar7,local_58,off);
                        if (iVar1 != 0) goto LAB_004eb97e;
                      }
                    }
                  }
                }
              }
LAB_004eb700:
              uVar8 = 0x80020;
              goto LAB_004eb549;
            }
          }
          lVar5 = 0;
          uVar8 = 0x80010;
        }
      }
    }
    else {
      iVar1 = BIO_indent(bp,off,0x80);
      if ((iVar1 != 0) && (iVar1 = EC_GROUP_get_curve_name(x), iVar1 != 0)) {
        pcVar4 = OBJ_nid2sn(iVar1);
        iVar2 = BIO_printf(bp,"ASN1 OID: %s",pcVar4);
        if ((0 < iVar2) && (iVar2 = BIO_printf(bp,"\n"), 0 < iVar2)) {
          lVar5 = EC_curve_nid2nist(iVar1);
          if (lVar5 == 0) {
            local_80 = (BIGNUM *)0x0;
            num_00 = (BIGNUM *)0x0;
            lVar5 = 0;
            iVar1 = 1;
            num = (BIGNUM *)0x0;
            goto LAB_004eb57d;
          }
          iVar1 = BIO_indent(bp,off,0x80);
          if (iVar1 != 0) {
            iVar1 = BIO_printf(bp,"NIST CURVE: %s\n",lVar5);
            lVar5 = 0;
            num_00 = (BIGNUM *)0x0;
            num = (BIGNUM *)0x0;
            local_80 = (BIGNUM *)0x0;
            if (iVar1 < 1) goto LAB_004eb700;
LAB_004eb97e:
            iVar1 = 1;
            goto LAB_004eb57d;
          }
        }
      }
      lVar5 = 0;
      num_00 = (BIGNUM *)0x0;
      num = (BIGNUM *)0x0;
      uVar8 = 0x80020;
      local_80 = (BIGNUM *)0x0;
    }
  }
LAB_004eb549:
  ERR_new();
  ERR_set_debug("../crypto/ec/eck_prn.c",0xd8,"ECPKParameters_print");
  iVar1 = 0;
  ERR_set_error(0x10,uVar8,0);
LAB_004eb57d:
  BN_free(num);
  BN_free(num_00);
  BN_free(local_80);
  CRYPTO_clear_free(local_48,lVar5,"../crypto/ec/eck_prn.c",0xdc);
  BN_CTX_free(c);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

