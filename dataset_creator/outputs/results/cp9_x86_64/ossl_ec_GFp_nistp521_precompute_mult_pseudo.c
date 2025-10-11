
int ossl_ec_GFp_nistp521_precompute_mult(EC_GROUP *param_1,BN_CTX *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  BIGNUM *ret;
  BIGNUM *ret_00;
  undefined8 *ptr;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  byte bVar9;
  undefined8 *local_530;
  BN_CTX *local_528;
  EC_POINT *local_520;
  int local_508;
  undefined1 local_4c8 [1160];
  long local_40;
  
  bVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EC_pre_comp_free();
  local_528 = (BN_CTX *)0x0;
  if ((param_2 == (BN_CTX *)0x0) &&
     (param_2 = BN_CTX_new(), local_528 = param_2, param_2 == (BN_CTX *)0x0)) {
    iVar2 = 0;
    goto LAB_004fd48a;
  }
  BN_CTX_start(param_2);
  ret = BN_CTX_get(param_2);
  ret_00 = BN_CTX_get(param_2);
  if (((ret_00 == (BIGNUM *)0x0) || (*(long *)(param_1 + 8) == 0)) ||
     (local_520 = EC_POINT_new(param_1), local_520 == (EC_POINT *)0x0)) {
    local_520 = (EC_POINT *)0x0;
    iVar2 = 0;
    local_530 = (undefined8 *)0x0;
  }
  else {
    BN_bin2bn("",0x42,ret);
    BN_bin2bn(&DAT_007f69a8,0x42,ret_00);
    iVar2 = EC_POINT_set_affine_coordinates(param_1,local_520,ret,ret_00,param_2);
    local_530 = (undefined8 *)0x0;
    if (iVar2 != 0) {
      ptr = (undefined8 *)CRYPTO_zalloc(0xd90,"../crypto/ec/ecp_nistp521.c",0x6cf);
      local_530 = ptr;
      if (ptr == (undefined8 *)0x0) {
        ERR_new();
        iVar2 = 0;
        ERR_set_debug("../crypto/ec/ecp_nistp521.c",0x6d2,"nistp521_pre_comp_new");
        ERR_set_error(0x10,0xc0100,0);
      }
      else {
        LOCK();
        *(undefined4 *)(ptr + 0x1b0) = 1;
        UNLOCK();
        lVar3 = CRYPTO_THREAD_lock_new();
        ptr[0x1b1] = lVar3;
        if (lVar3 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ecp_nistp521.c",0x6da,"nistp521_pre_comp_new");
          ERR_set_error(0x10,0xc0100,0);
          iVar2 = 0;
          CRYPTO_free(ptr);
          local_530 = (undefined8 *)0x0;
        }
        else {
          iVar2 = EC_POINT_cmp(param_1,local_520,*(EC_POINT **)(param_1 + 8),param_2);
          if (iVar2 == 0) {
            *ptr = gmul;
            ptr[0x1af] = DAT_007f6898;
            lVar3 = (long)ptr - (long)((ulong)(ptr + 1) & 0xfffffffffffffff8);
            puVar8 = (undefined8 *)((long)&gmul - lVar3);
            puVar6 = (undefined8 *)((ulong)(ptr + 1) & 0xfffffffffffffff8);
            for (uVar4 = (ulong)((int)lVar3 + 0xd80U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar6 = *puVar8;
              puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
              puVar6 = puVar6 + (ulong)bVar9 * -2 + 1;
            }
LAB_004fd420:
            iVar2 = 1;
            *(undefined4 *)(param_1 + 0x98) = 3;
            local_530 = (undefined8 *)0x0;
            *(undefined8 **)(param_1 + 0xa0) = ptr;
          }
          else {
            puVar8 = ptr + 0x1b;
            iVar2 = BN_to_felem(puVar8,*(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
            if (iVar2 != 0) {
              iVar2 = BN_to_felem(ptr + 0x24,*(undefined8 *)(*(long *)(param_1 + 8) + 0x18));
              if (iVar2 != 0) {
                iVar2 = BN_to_felem(ptr + 0x2d,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20));
                if (iVar2 != 0) {
                  local_508 = 3;
                  iVar2 = 1;
                  do {
                    lVar3 = (long)iVar2;
                    iVar5 = 0x81;
                    puVar6 = ptr + lVar3 * 0x1b + lVar3 * 0x1b;
                    puVar1 = ptr + (long)(iVar2 * 2) * 0x1b + 0x12;
                    puVar7 = ptr + (long)(iVar2 * 2) * 0x1b + 9;
                    point_double(puVar6,puVar7,puVar1,ptr + lVar3 * 0x1b,ptr + lVar3 * 0x1b + 9,
                                 ptr + lVar3 * 0x1b + 0x12);
                    do {
                      point_double(puVar6,puVar7,puVar1,puVar6,puVar7,puVar1);
                      iVar5 = iVar5 + -1;
                    } while (iVar5 != 0);
                    iVar2 = iVar2 * 2;
                    local_508 = local_508 + -1;
                  } while (local_508 != 0);
                  *ptr = 0;
                  ptr[0x1a] = 0;
                  puVar6 = (undefined8 *)((ulong)(ptr + 1) & 0xfffffffffffffff8);
                  for (uVar4 = (ulong)(((int)ptr -
                                       (int)(undefined8 *)((ulong)(ptr + 1) & 0xfffffffffffffff8)) +
                                       0xd8U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
                    *puVar6 = 0;
                    puVar6 = puVar6 + (ulong)bVar9 * -2 + 1;
                  }
                  point_add(ptr + 0xa2,ptr + 0xab,ptr + 0xb4,ptr + 0x6c,ptr + 0x75,ptr + 0x7e,0,
                            ptr + 0x36,ptr + 0x3f,ptr + 0x48);
                  point_add(ptr + 0x10e,ptr + 0x117,ptr + 0x120);
                  point_add(ptr + 0x144,ptr + 0x14d,ptr + 0x156,ptr + 0xd8,ptr + 0xe1,ptr + 0xea,0,
                            ptr + 0x6c,ptr + 0x75,ptr + 0x7e);
                  point_add(ptr + 0x17a,ptr + 0x183,ptr + 0x18c,ptr + 0x144,ptr + 0x14d,ptr + 0x156,
                            0,ptr + 0x36,ptr + 0x3f,ptr + 0x48);
                  puVar6 = ptr + 0x51;
                  do {
                    puVar7 = puVar6 + 0x36;
                    point_add(puVar6,puVar6 + 9,puVar6 + 0x12,puVar6 + -0x1b,puVar6 + -0x12,
                              puVar6 + -9,0,puVar8,ptr + 0x24,ptr + 0x2d);
                    puVar6 = puVar7;
                  } while (ptr + 0x1cb != puVar7);
                  ossl_ec_GFp_nistp_points_make_affine_internal
                            (0xf,puVar8,0x48,local_4c8,felem_one,felem_is_zero_int,felem_assign,
                             felem_square_reduce,felem_mul_reduce,felem_inv,felem_contract);
                  goto LAB_004fd420;
                }
              }
            }
          }
        }
      }
    }
  }
  BN_CTX_end(param_2);
  EC_POINT_free(local_520);
  BN_CTX_free(local_528);
  EC_nistp521_pre_comp_free(local_530);
LAB_004fd48a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar2;
}

