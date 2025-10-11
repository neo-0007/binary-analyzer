
int ossl_ec_GFp_nistp224_precompute_mult(EC_GROUP *param_1,BN_CTX *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  BIGNUM *ret;
  BIGNUM *ret_00;
  EC_POINT *a;
  undefined8 *ptr;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  byte bVar10;
  BN_CTX *local_4c0;
  int local_4b8;
  int local_498;
  undefined1 local_448 [1032];
  long local_40;
  
  bVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EC_pre_comp_free();
  local_4c0 = (BN_CTX *)0x0;
  if ((param_2 == (BN_CTX *)0x0) &&
     (param_2 = BN_CTX_new(), local_4c0 = param_2, param_2 == (BN_CTX *)0x0)) {
    iVar2 = 0;
    goto LAB_004f011a;
  }
  BN_CTX_start(param_2);
  ret = BN_CTX_get(param_2);
  ret_00 = BN_CTX_get(param_2);
  if (((ret_00 == (BIGNUM *)0x0) || (*(long *)(param_1 + 8) == 0)) ||
     (a = EC_POINT_new(param_1), a == (EC_POINT *)0x0)) {
    a = (EC_POINT *)0x0;
    ptr = (undefined8 *)0x0;
    iVar2 = 0;
  }
  else {
    ptr = (undefined8 *)0x0;
    BN_bin2bn(&DAT_007f4c14,0x1c,ret);
    BN_bin2bn(&DAT_007f4c30,0x1c,ret_00);
    iVar2 = EC_POINT_set_affine_coordinates(param_1,a,ret,ret_00,param_2);
    if (iVar2 != 0) {
      ptr = (undefined8 *)CRYPTO_zalloc(0xc10,"../crypto/ec/ecp_nistp224.c",0x4d7);
      if (ptr == (undefined8 *)0x0) {
        ERR_new();
        iVar2 = 0;
        ERR_set_debug("../crypto/ec/ecp_nistp224.c",0x4da,"nistp224_pre_comp_new");
        ERR_set_error(0x10,0xc0100,0);
      }
      else {
        LOCK();
        *(undefined4 *)(ptr + 0x180) = 1;
        UNLOCK();
        lVar3 = CRYPTO_THREAD_lock_new();
        ptr[0x181] = lVar3;
        if (lVar3 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ecp_nistp224.c",0x4e2,"nistp224_pre_comp_new");
          ERR_set_error(0x10,0xc0100,0);
          CRYPTO_free(ptr);
          ptr = (undefined8 *)0x0;
          iVar2 = 0;
        }
        else {
          iVar2 = EC_POINT_cmp(param_1,a,*(EC_POINT **)(param_1 + 8),param_2);
          if (iVar2 == 0) {
            *ptr = gmul;
            ptr[0x17f] = DAT_007f4bb8;
            lVar3 = (long)ptr - (long)((ulong)(ptr + 1) & 0xfffffffffffffff8);
            puVar6 = (undefined8 *)((long)&gmul - lVar3);
            puVar8 = (undefined8 *)((ulong)(ptr + 1) & 0xfffffffffffffff8);
            for (uVar4 = (ulong)((int)lVar3 + 0xc00U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + (ulong)bVar10 * -2 + 1;
              puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
            }
          }
          else {
            iVar2 = BN_to_felem(ptr + 0xc,*(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
            if (((iVar2 == 0) ||
                (iVar2 = BN_to_felem(ptr + 0x10,*(undefined8 *)(*(long *)(param_1 + 8) + 0x18)),
                iVar2 == 0)) ||
               (iVar2 = BN_to_felem(ptr + 0x14,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20)),
               iVar2 == 0)) goto LAB_004f00f8;
            local_498 = 4;
            local_4b8 = 1;
            do {
              lVar3 = (long)local_4b8;
              iVar2 = 0x1b;
              puVar6 = ptr + lVar3 * 0xc + 200;
              puVar8 = ptr + lVar3 * 0xc + 0xc4;
              puVar9 = ptr + lVar3 * 0xc + 0xc0;
              point_double(puVar9,puVar8,puVar6,ptr + lVar3 * 0xc,ptr + lVar3 * 0xc + 4,
                           ptr + lVar3 * 0xc + 8);
              do {
                point_double(puVar9,puVar8,puVar6,puVar9,puVar8,puVar6);
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
              if (local_4b8 == 8) break;
              puVar5 = ptr + lVar3 * 0xc + lVar3 * 0xc;
              iVar2 = 0x1b;
              puVar1 = ptr + (long)(local_4b8 * 2) * 0xc + 8;
              puVar7 = ptr + (long)(local_4b8 * 2) * 0xc + 4;
              point_double(puVar5,puVar7,puVar1,puVar9,puVar8,puVar6);
              do {
                point_double(puVar5,puVar7,puVar1,puVar5,puVar7,puVar1);
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
              local_4b8 = local_4b8 << 1;
              local_498 = local_498 + -1;
            } while (local_498 != 0);
            puVar6 = ptr + 0xcc;
            do {
              puVar6[-0xcc] = 0;
              puVar8 = puVar6 + -0xac;
              puVar9 = puVar6 + -0xb0;
              puVar6[-0xc1] = 0;
              puVar1 = puVar6 + -0xb4;
              puVar7 = (undefined8 *)((ulong)(puVar6 + -0xcb) & 0xfffffffffffffff8);
              for (uVar4 = (ulong)(((int)puVar6 -
                                   (int)(undefined8 *)((ulong)(puVar6 + -0xcb) & 0xfffffffffffffff8)
                                   ) - 0x600U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar7 = 0;
                puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
              }
              point_add(puVar6 + -0x84,puVar6 + -0x80,puVar6 + -0x7c,puVar6 + -0x9c,puVar6 + -0x98,
                        puVar6 + -0x94,0,puVar1,puVar9,puVar8);
              point_add(puVar6 + -0x54,puVar6 + -0x50,puVar6 + -0x4c,puVar6 + -0x6c,puVar6 + -0x68,
                        puVar6 + -100,0,puVar1,puVar9,puVar8);
              point_add(puVar6 + -0x3c,puVar6 + -0x38,puVar6 + -0x34,puVar6 + -0x6c,puVar6 + -0x68,
                        puVar6 + -100,0,puVar6 + -0x9c,puVar6 + -0x98,puVar6 + -0x94);
              point_add(puVar6 + -0x24,puVar6 + -0x20,puVar6 + -0x1c,puVar6 + -0x3c,puVar6 + -0x38,
                        puVar6 + -0x34,0,puVar1,puVar9,puVar8);
              puVar8 = puVar6 + -0xa8;
              do {
                puVar9 = puVar8 + 0x18;
                point_add(puVar8,puVar8 + 4,puVar8 + 8,puVar8 + -0xc,puVar8 + -8,puVar8 + -4,0,
                          puVar6 + -0xc0,puVar6 + -0xbc,puVar6 + -0xb8);
                puVar8 = puVar9;
              } while (puVar6 != puVar9);
              puVar6 = puVar6 + 0xc0;
            } while (ptr + 0x24c != puVar6);
            ossl_ec_GFp_nistp_points_make_affine_internal
                      (0x1f,ptr + 0xc,0x20,local_448,felem_one,felem_is_zero_int,felem_assign,
                       felem_square_reduce,felem_mul_reduce,felem_inv,felem_contract);
          }
          *(undefined8 **)(param_1 + 0xa0) = ptr;
          iVar2 = 1;
          ptr = (undefined8 *)0x0;
          *(undefined4 *)(param_1 + 0x98) = 1;
        }
      }
    }
  }
LAB_004f00f8:
  BN_CTX_end(param_2);
  EC_POINT_free(a);
  BN_CTX_free(local_4c0);
  EC_nistp224_pre_comp_free(ptr);
LAB_004f011a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar2;
}

