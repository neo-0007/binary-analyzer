
int ossl_ec_GFp_nistp256_precompute_mult(EC_GROUP *param_1,BN_CTX *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  BIGNUM *ret;
  BIGNUM *ret_00;
  EC_POINT *a;
  undefined8 *ptr;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  BN_CTX *c;
  long in_FS_OFFSET;
  byte bVar10;
  int local_580;
  int local_568;
  undefined1 local_508 [64];
  undefined1 local_4c8 [64];
  undefined1 local_488 [64];
  undefined1 local_448 [1032];
  long local_40;
  
  bVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EC_pre_comp_free();
  c = (BN_CTX *)0x0;
  if ((param_2 == (BN_CTX *)0x0) && (param_2 = BN_CTX_new(), c = param_2, param_2 == (BN_CTX *)0x0))
  {
    iVar3 = 0;
    goto LAB_004f85a9;
  }
  BN_CTX_start(param_2);
  ret = BN_CTX_get(param_2);
  ret_00 = BN_CTX_get(param_2);
  if (((ret_00 == (BIGNUM *)0x0) || (*(long *)(param_1 + 8) == 0)) ||
     (a = EC_POINT_new(param_1), a == (EC_POINT *)0x0)) {
    a = (EC_POINT *)0x0;
    ptr = (undefined8 *)0x0;
    iVar3 = 0;
  }
  else {
    BN_bin2bn(nistp256_curve_params + 0x60,0x20,ret);
    BN_bin2bn(nistp256_curve_params + 0x80,0x20,ret_00);
    ptr = (undefined8 *)0x0;
    iVar3 = EC_POINT_set_affine_coordinates(param_1,a,ret,ret_00,param_2);
    if (iVar3 != 0) {
      ptr = (undefined8 *)CRYPTO_zalloc(0xc10,"../crypto/ec/ecp_nistp256.c",0x73a);
      if (ptr == (undefined8 *)0x0) {
        ERR_new();
        iVar3 = 0;
        ERR_set_debug("../crypto/ec/ecp_nistp256.c",0x73d,"nistp256_pre_comp_new");
        ERR_set_error(0x10,0xc0100,0);
      }
      else {
        LOCK();
        *(undefined4 *)(ptr + 0x180) = 1;
        UNLOCK();
        lVar4 = CRYPTO_THREAD_lock_new();
        ptr[0x181] = lVar4;
        if (lVar4 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ecp_nistp256.c",0x745,"nistp256_pre_comp_new");
          ERR_set_error(0x10,0xc0100,0);
          CRYPTO_free(ptr);
          ptr = (undefined8 *)0x0;
          iVar3 = 0;
        }
        else {
          iVar3 = EC_POINT_cmp(param_1,a,*(EC_POINT **)(param_1 + 8),param_2);
          if (iVar3 == 0) {
            *ptr = gmul;
            ptr[0x17f] = DAT_007f5958;
            lVar4 = (long)ptr - (long)((ulong)(ptr + 1) & 0xfffffffffffffff8);
            puVar6 = (undefined8 *)((long)&gmul - lVar4);
            puVar7 = (undefined8 *)((ulong)(ptr + 1) & 0xfffffffffffffff8);
            for (uVar5 = (ulong)((int)lVar4 + 0xc00U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + (ulong)bVar10 * -2 + 1;
              puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
            }
LAB_004f8560:
            *(undefined8 **)(param_1 + 0xa0) = ptr;
            iVar3 = 1;
            ptr = (undefined8 *)0x0;
            *(undefined4 *)(param_1 + 0x98) = 2;
          }
          else {
            iVar3 = BN_to_felem(local_508,*(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
            if (iVar3 != 0) {
              iVar3 = BN_to_felem(local_4c8,*(undefined8 *)(*(long *)(param_1 + 8) + 0x18));
              if (iVar3 != 0) {
                iVar3 = BN_to_felem(local_488,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20));
                if (iVar3 != 0) {
                  felem_shrink(ptr + 0xc,local_508);
                  felem_shrink(ptr + 0x10,local_4c8);
                  felem_shrink(ptr + 0x14,local_488);
                  local_568 = 4;
                  local_580 = 1;
                  do {
                    lVar4 = (long)local_580;
                    iVar3 = 0x1f;
                    puVar6 = ptr + lVar4 * 0xc + 200;
                    puVar7 = ptr + lVar4 * 0xc + 0xc0;
                    puVar9 = ptr + lVar4 * 0xc + 0xc4;
                    point_double_small(puVar7,puVar9,puVar6,ptr + lVar4 * 0xc,ptr + lVar4 * 0xc + 4,
                                       ptr + lVar4 * 0xc + 8);
                    do {
                      point_double_small(puVar7,puVar9,puVar6,puVar7,puVar9,puVar6);
                      iVar3 = iVar3 + -1;
                    } while (iVar3 != 0);
                    if (local_580 == 8) break;
                    puVar8 = ptr + lVar4 * 0xc + lVar4 * 0xc;
                    iVar3 = 0x1f;
                    puVar1 = ptr + (long)(local_580 * 2) * 0xc + 8;
                    puVar2 = ptr + (long)(local_580 * 2) * 0xc + 4;
                    point_double_small(puVar8,puVar2,puVar1,puVar7,puVar9,puVar6);
                    do {
                      point_double_small(puVar8,puVar2,puVar1,puVar8,puVar2,puVar1);
                      iVar3 = iVar3 + -1;
                    } while (iVar3 != 0);
                    local_580 = local_580 << 1;
                    local_568 = local_568 + -1;
                  } while (local_568 != 0);
                  puVar6 = ptr + 0xcc;
                  do {
                    puVar6[-0xcc] = 0;
                    puVar6[-0xc1] = 0;
                    puVar7 = (undefined8 *)((ulong)(puVar6 + -0xcb) & 0xfffffffffffffff8);
                    for (uVar5 = (ulong)(((int)puVar6 -
                                         (int)(undefined8 *)
                                              ((ulong)(puVar6 + -0xcb) & 0xfffffffffffffff8)) -
                                         0x600U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
                      *puVar7 = 0;
                      puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
                    }
                    point_add_small(puVar6 + -0x84,puVar6 + -0x80,puVar6 + -0x7c,puVar6 + -0x9c,
                                    puVar6 + -0x98,puVar6 + -0x94,puVar6 + -0xb4,puVar6 + -0xb0,
                                    puVar6 + -0xac);
                    point_add_small(puVar6 + -0x54,puVar6 + -0x50,puVar6 + -0x4c);
                    point_add_small(puVar6 + -0x3c,puVar6 + -0x38,puVar6 + -0x34,puVar6 + -0x6c,
                                    puVar6 + -0x68,puVar6 + -100,puVar6 + -0x9c,puVar6 + -0x98,
                                    puVar6 + -0x94);
                    point_add_small(puVar6 + -0x24,puVar6 + -0x20,puVar6 + -0x1c,puVar6 + -0x3c,
                                    puVar6 + -0x38,puVar6 + -0x34,puVar6 + -0xb4,puVar6 + -0xb0,
                                    puVar6 + -0xac);
                    puVar7 = puVar6 + -0xa8;
                    do {
                      puVar9 = puVar7 + 0x18;
                      point_add_small(puVar7,puVar7 + 4,puVar7 + 8,puVar7 + -0xc,puVar7 + -8,
                                      puVar7 + -4,puVar6 + -0xc0,puVar6 + -0xbc,puVar6 + -0xb8);
                      puVar7 = puVar9;
                    } while (puVar6 != puVar9);
                    puVar6 = puVar6 + 0xc0;
                  } while (ptr + 0x24c != puVar6);
                  ossl_ec_GFp_nistp_points_make_affine_internal
                            (0x1f,ptr + 0xc,0x20,local_448,smallfelem_one,smallfelem_is_zero_int,
                             smallfelem_assign,smallfelem_square_contract,smallfelem_mul_contract,
                             smallfelem_inv_contract,smallfelem_assign);
                  goto LAB_004f8560;
                }
              }
            }
          }
        }
      }
    }
  }
  BN_CTX_end(param_2);
  EC_POINT_free(a);
  BN_CTX_free(c);
  EC_nistp256_pre_comp_free(ptr);
LAB_004f85a9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

