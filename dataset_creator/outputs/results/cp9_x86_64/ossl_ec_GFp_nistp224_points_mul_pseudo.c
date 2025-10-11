
int ossl_ec_GFp_nistp224_points_mul
              (EC_GROUP *param_1,undefined8 param_2,BIGNUM *param_3,ulong param_4,long param_5,
              long param_6,BN_CTX *param_7)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *r;
  long lVar7;
  long lVar8;
  EC_POINT *pEVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  BIGNUM *a;
  uint uVar13;
  uint uVar14;
  long in_FS_OFFSET;
  void *local_1b8;
  ulong local_1b0;
  void *local_1a8;
  EC_POINT *local_180;
  void *local_178;
  undefined8 *local_150;
  int local_138;
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BN_CTX_start(param_7);
  pBVar4 = BN_CTX_get(param_7);
  pBVar5 = BN_CTX_get(param_7);
  pBVar6 = BN_CTX_get(param_7);
  r = BN_CTX_get(param_7);
  if (r == (BIGNUM *)0x0) {
LAB_004ef040:
    local_180 = (EC_POINT *)0x0;
    iVar3 = 0;
    local_178 = (void *)0x0;
    local_1a8 = (void *)0x0;
    local_1b8 = (void *)0x0;
  }
  else {
    local_1b0 = param_4;
    if (param_3 == (BIGNUM *)0x0) {
      local_180 = (EC_POINT *)0x0;
      local_150 = (undefined8 *)0x0;
LAB_004ef15c:
      bVar2 = false;
      if (local_1b0 != 0) {
LAB_004ef173:
        if (local_1b0 < 3) {
          local_1b8 = (void *)CRYPTO_zalloc(local_1b0 * 0x1c,"../crypto/ec/ecp_nistp224.c",0x5cc);
          local_1a8 = (void *)CRYPTO_zalloc(local_1b0 * 0x660,"../crypto/ec/ecp_nistp224.c",0x5cd);
          if ((local_1a8 != (void *)0x0) && (local_1b8 != (void *)0x0)) {
            local_138 = 0;
            local_178 = (void *)0x0;
            goto LAB_004ef3ef;
          }
          local_178 = (void *)0x0;
        }
        else {
          local_1b8 = (void *)CRYPTO_zalloc(local_1b0 * 0x1c,"../crypto/ec/ecp_nistp224.c",0x5cc);
          local_1a8 = (void *)CRYPTO_zalloc(local_1b0 * 0x660,"../crypto/ec/ecp_nistp224.c",0x5cd);
          local_178 = CRYPTO_malloc(((int)(local_1b0 << 4) + (int)local_1b0) * 0x20 + 0x20,
                                    "../crypto/ec/ecp_nistp224.c",0x5d0);
          if (((local_1b8 != (void *)0x0) && (local_1a8 != (void *)0x0)) &&
             (local_178 != (void *)0x0)) {
            local_138 = 1;
LAB_004ef3ef:
            uVar1 = 0;
            uVar12 = 0;
            do {
              if (uVar12 == param_4) {
                pEVar9 = EC_GROUP_get0_generator(param_1);
                a = param_3;
              }
              else {
                pEVar9 = *(EC_POINT **)(param_5 + uVar12 * 8);
                a = *(BIGNUM **)(param_6 + uVar12 * 8);
              }
              if ((a != (BIGNUM *)0x0) && (pEVar9 != (EC_POINT *)0x0)) {
                iVar3 = BN_num_bits(a);
                if ((iVar3 < 0xe1) && (iVar3 = BN_is_negative(a), iVar3 == 0)) {
                  iVar3 = BN_bn2lebinpad(a,(void *)((long)local_1b8 + uVar12 * 0x1c),0x1c);
                }
                else {
                  iVar3 = BN_nnmod(r,a,*(BIGNUM **)(param_1 + 0x10),param_7);
                  if (iVar3 == 0) {
                    ERR_new();
                    uVar10 = 0x5ee;
                    goto LAB_004ef7b9;
                  }
                  iVar3 = BN_bn2lebinpad(r,(void *)((long)local_1b8 + uVar12 * 0x1c),0x1c);
                }
                if (iVar3 < 0) {
                  ERR_new();
                  uVar10 = 0x5f8;
                  goto LAB_004ef371;
                }
                iVar3 = BN_to_felem(&local_c8,*(undefined8 *)(pEVar9 + 0x10));
                if (((iVar3 == 0) ||
                    (iVar3 = BN_to_felem(&local_a8,*(undefined8 *)(pEVar9 + 0x18)), iVar3 == 0)) ||
                   (iVar3 = BN_to_felem(&local_88,*(undefined8 *)(pEVar9 + 0x20)), iVar3 == 0))
                goto LAB_004ef06e;
                *(undefined8 *)((long)local_1a8 + uVar12 * 0x660 + 0x60) = local_c8;
                *(undefined8 *)((long)local_1a8 + uVar12 * 0x660 + 0x68) = local_c0;
                *(undefined8 *)((long)local_1a8 + uVar12 * 0x660 + 0x70) = local_b8;
                *(undefined8 *)((long)local_1a8 + uVar12 * 0x660 + 0x78) = local_b0;
                *(undefined8 *)((long)local_1a8 + uVar12 * 0x660 + 0x80) = local_a8;
                *(undefined8 *)((long)local_1a8 + uVar12 * 0x660 + 0x88) = local_a0;
                *(undefined8 *)((long)local_1a8 + uVar12 * 0x660 + 0x90) = local_98;
                *(undefined8 *)((long)local_1a8 + uVar12 * 0x660 + 0x98) = local_90;
                *(undefined8 *)((long)local_1a8 + uVar12 * 0x660 + 0xa0) = local_88;
                *(undefined8 *)((long)local_1a8 + uVar12 * 0x660 + 0xa8) = local_80;
                *(undefined8 *)((long)local_1a8 + uVar12 * 0x660 + 0xb0) = local_78;
                *(undefined8 *)((long)local_1a8 + uVar12 * 0x660 + 0xb8) = local_70;
                lVar7 = (long)local_1a8 + uVar12 * 0x660 + 0xc0;
                uVar13 = 2;
                do {
                  while( true ) {
                    if ((uVar13 & 1) != 0) break;
                    uVar14 = uVar13 + 1;
                    lVar8 = (long)((int)uVar13 >> 1) * 0x60;
                    point_double(lVar7,lVar7 + 0x20,lVar7 + 0x40,
                                 (long)local_1a8 + lVar8 + uVar12 * 0x660,
                                 (long)local_1a8 + lVar8 + uVar12 * 0x660 + 0x20,
                                 (long)local_1a8 + lVar8 + uVar12 * 0x660 + 0x40);
                    lVar7 = lVar7 + 0x60;
                    uVar13 = uVar14;
                    if (uVar14 == 0x11) goto LAB_004ef650;
                  }
                  uVar13 = uVar13 + 1;
                  point_add(lVar7,lVar7 + 0x20,lVar7 + 0x40,(long)local_1a8 + uVar12 * 0x660 + 0x60,
                            (long)local_1a8 + uVar12 * 0x660 + 0x80,
                            (long)local_1a8 + uVar12 * 0x660 + 0xa0,0,lVar7 + -0x60,lVar7 + -0x40,
                            lVar7 + -0x20);
                  lVar7 = lVar7 + 0x60;
                } while (uVar13 != 0x11);
              }
LAB_004ef650:
              uVar1 = uVar1 + 1;
              uVar12 = (ulong)uVar1;
            } while (uVar12 < local_1b0);
            if (local_138 != 0) {
              ossl_ec_GFp_nistp_points_make_affine_internal
                        (local_1b0 * 0x11,local_1a8,0x20,local_178,felem_one,felem_is_zero_int,
                         felem_assign,felem_square_reduce,felem_mul_reduce,felem_inv,felem_contract)
              ;
            }
            if ((param_3 != (BIGNUM *)0x0) && (bVar2)) goto LAB_004eef83;
            goto LAB_004ef26d;
          }
        }
        ERR_new();
        iVar3 = 0;
        ERR_set_debug("../crypto/ec/ecp_nistp224.c",0x5d3,"ossl_ec_GFp_nistp224_points_mul");
        ERR_set_error(0x10,0xc0100,0);
        goto LAB_004ef06e;
      }
      local_178 = (void *)0x0;
      local_1a8 = (void *)0x0;
      local_1b8 = (void *)0x0;
      local_138 = 0;
LAB_004ef26d:
      puVar11 = (undefined1 *)0x0;
      local_150 = (undefined8 *)0x0;
    }
    else {
      local_150 = &gmul;
      if (*(undefined8 **)(param_1 + 0xa0) != (undefined8 *)0x0) {
        local_150 = *(undefined8 **)(param_1 + 0xa0);
      }
      local_180 = EC_POINT_new(param_1);
      if (local_180 == (EC_POINT *)0x0) goto LAB_004ef040;
      lVar7 = felem_to_BN(pBVar4,local_150 + 0xc);
      if (((lVar7 == 0) || (lVar7 = felem_to_BN(pBVar5,local_150 + 0x10), lVar7 == 0)) ||
         (lVar7 = felem_to_BN(pBVar6,local_150 + 0x14), lVar7 == 0)) {
        ERR_new();
        iVar3 = 0;
        ERR_set_debug("../crypto/ec/ecp_nistp224.c",0x5b2,"ossl_ec_GFp_nistp224_points_mul");
        ERR_set_error(0x10,0x80003,0);
        local_178 = (void *)0x0;
        local_1a8 = (void *)0x0;
        local_1b8 = (void *)0x0;
        goto LAB_004ef06e;
      }
      iVar3 = ossl_ec_GFp_simple_set_Jprojective_coordinates_GFp
                        (param_1,local_180,pBVar4,pBVar5,pBVar6,param_7);
      if (iVar3 == 0) {
        local_178 = (void *)0x0;
        local_1a8 = (void *)0x0;
        local_1b8 = (void *)0x0;
        iVar3 = 0;
        goto LAB_004ef06e;
      }
      iVar3 = EC_POINT_cmp(param_1,local_180,*(EC_POINT **)(param_1 + 8),param_7);
      if (iVar3 != 0) {
        local_1b0 = param_4 + 1;
        goto LAB_004ef15c;
      }
      if (param_4 != 0) {
        bVar2 = true;
        goto LAB_004ef173;
      }
      local_1b0 = 0;
      local_178 = (void *)0x0;
      local_1a8 = (void *)0x0;
      local_1b8 = (void *)0x0;
      local_138 = 0;
LAB_004eef83:
      local_58 = 0;
      puVar11 = local_68;
      local_50 = 0;
      local_68 = (undefined1  [16])0x0;
      iVar3 = BN_num_bits(param_3);
      if ((iVar3 < 0xe1) && (iVar3 = BN_is_negative(param_3), iVar3 == 0)) {
        BN_bn2lebinpad(param_3,puVar11,0x1c);
      }
      else {
        iVar3 = BN_nnmod(r,param_3,*(BIGNUM **)(param_1 + 0x10),param_7);
        if (iVar3 == 0) {
          ERR_new();
          uVar10 = 0x622;
LAB_004ef7b9:
          iVar3 = 0;
          ERR_set_debug("../crypto/ec/ecp_nistp224.c",uVar10,"ossl_ec_GFp_nistp224_points_mul");
          ERR_set_error(0x10,0x80003,0);
          goto LAB_004ef06e;
        }
        BN_bn2lebinpad(r,puVar11,0x1c);
      }
    }
    batch_mul(&local_c8,&local_a8,&local_88,local_1b8,local_1b0 & 0xffffffff,puVar11,local_138,
              local_1a8,local_150);
    felem_contract(local_128,&local_c8);
    felem_contract(local_108,&local_a8);
    felem_contract(local_e8,&local_88);
    lVar7 = felem_to_BN(pBVar4,local_128);
    if (((lVar7 == 0) || (lVar7 = felem_to_BN(pBVar5,local_108), lVar7 == 0)) ||
       (lVar7 = felem_to_BN(pBVar6,local_e8), lVar7 == 0)) {
      ERR_new();
      uVar10 = 0x63a;
LAB_004ef371:
      iVar3 = 0;
      ERR_set_debug("../crypto/ec/ecp_nistp224.c",uVar10,"ossl_ec_GFp_nistp224_points_mul");
      ERR_set_error(0x10,0x80003,0);
    }
    else {
      iVar3 = ossl_ec_GFp_simple_set_Jprojective_coordinates_GFp
                        (param_1,param_2,pBVar4,pBVar5,pBVar6,param_7);
    }
  }
LAB_004ef06e:
  BN_CTX_end(param_7);
  EC_POINT_free(local_180);
  CRYPTO_free(local_1b8);
  CRYPTO_free(local_1a8);
  CRYPTO_free(local_178);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

