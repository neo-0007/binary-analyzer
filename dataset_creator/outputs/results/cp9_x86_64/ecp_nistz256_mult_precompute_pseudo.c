
int ecp_nistz256_mult_precompute(EC_GROUP *param_1,BN_CTX *param_2)

{
  BN_CTX *pBVar1;
  int iVar2;
  int iVar3;
  EC_POINT *src;
  undefined8 *ptr;
  long lVar4;
  EC_POINT *dst;
  long lVar5;
  long in_FS_OFFSET;
  BN_CTX *local_d0;
  EC_POINT *local_c8;
  void *local_c0;
  int local_b4;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EC_pre_comp_free();
  src = EC_GROUP_get0_generator(param_1);
  if (src == (EC_POINT *)0x0) {
    ERR_new();
    iVar2 = 0;
    ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x344,"ecp_nistz256_mult_precompute");
    ERR_set_error(0x10,0x71,0);
  }
  else {
    iVar2 = ecp_nistz256_is_affine_G(src);
    if (iVar2 == 0) {
      iVar2 = 0;
      if (param_1 != (EC_GROUP *)0x0) {
        ptr = (undefined8 *)CRYPTO_zalloc(0x30,"../crypto/ec/ecp_nistz256.c",0x4ca);
        if (ptr == (undefined8 *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x4cd,"ecp_nistz256_pre_comp_new");
          ERR_set_error(0x10,0xc0100,0);
        }
        else {
          *ptr = param_1;
          ptr[1] = 6;
          LOCK();
          *(undefined4 *)(ptr + 4) = 1;
          UNLOCK();
          lVar4 = CRYPTO_THREAD_lock_new();
          ptr[5] = lVar4;
          if (lVar4 == 0) {
            ERR_new();
            ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x4d7,"ecp_nistz256_pre_comp_new");
            ERR_set_error(0x10,0xc0100,0);
            CRYPTO_free(ptr);
          }
          else {
            local_d0 = (BN_CTX *)0x0;
            pBVar1 = local_d0;
            if ((param_2 == (BN_CTX *)0x0) &&
               (param_2 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8)), pBVar1 = param_2
               , param_2 == (BN_CTX *)0x0)) {
              local_c0 = (void *)0x0;
              dst = (EC_POINT *)0x0;
              local_c8 = (EC_POINT *)0x0;
            }
            else {
              local_d0 = pBVar1;
              BN_CTX_start(param_2);
              lVar4 = EC_GROUP_get0_order(param_1);
              if (lVar4 == 0) {
                local_c0 = (void *)0x0;
                local_c8 = (EC_POINT *)0x0;
                dst = (EC_POINT *)0x0;
              }
              else {
                iVar3 = BN_is_zero(lVar4);
                if (iVar3 == 0) {
                  local_c0 = CRYPTO_malloc(0x25040,"../crypto/ec/ecp_nistz256.c",0x367);
                  if (local_c0 == (void *)0x0) {
                    ERR_new();
                    iVar2 = 0;
                    dst = (EC_POINT *)0x0;
                    ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x368,"ecp_nistz256_mult_precompute"
                                 );
                    ERR_set_error(0x10,0xc0100,0);
                    local_c8 = (EC_POINT *)0x0;
                  }
                  else {
                    dst = EC_POINT_new(param_1);
                    local_c8 = EC_POINT_new(param_1);
                    if ((dst == (EC_POINT *)0x0) || (local_c8 == (EC_POINT *)0x0)) {
LAB_004ffc05:
                      iVar2 = 0;
                    }
                    else {
                      iVar2 = EC_POINT_copy(local_c8,src);
                      if (iVar2 != 0) {
                        local_b4 = 0;
                        lVar4 = ((ulong)local_c0 & 0xffffffffffffffc0) + 0x40;
                        do {
                          iVar2 = EC_POINT_copy(dst,local_c8);
                          lVar5 = lVar4;
                          if (iVar2 == 0) goto LAB_004ffb35;
                          do {
                            if ((*(code **)(*(long *)param_1 + 0xd0) == (code *)0x0) ||
                               (iVar2 = (**(code **)(*(long *)param_1 + 0xd0))(param_1,dst,param_2),
                               iVar2 == 0)) goto LAB_004ffc05;
                            iVar2 = bn_copy_words(local_88,*(undefined8 *)(dst + 0x10),4);
                            if ((iVar2 == 0) ||
                               (iVar2 = bn_copy_words(local_68,*(undefined8 *)(dst + 0x18),4),
                               iVar2 == 0)) {
                              ERR_new();
                              ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x388,
                                            "ecp_nistz256_mult_precompute");
                              ERR_set_error(0x10,0x92,0);
                              goto LAB_004ffc05;
                            }
                            iVar2 = 7;
                            ecp_nistz256_scatter_w7(lVar5,local_88,local_b4);
                            do {
                              iVar3 = EC_POINT_dbl(param_1,dst,dst,param_2);
                              if (iVar3 == 0) goto LAB_004ffc05;
                              iVar2 = iVar2 + -1;
                            } while (iVar2 != 0);
                            lVar5 = lVar5 + 0x1000;
                          } while (lVar5 != ((ulong)local_c0 & 0xffffffffffffffc0) + 0x25040);
                          iVar2 = EC_POINT_add(param_1,local_c8,local_c8,src,param_2);
                          if (iVar2 == 0) goto LAB_004ffb35;
                          local_b4 = local_b4 + 1;
                        } while (local_b4 != 0x40);
                        iVar2 = 1;
                        ptr[2] = lVar4;
                        *ptr = param_1;
                        ptr[1] = 7;
                        ptr[3] = local_c0;
                        local_c0 = (void *)0x0;
                        *(undefined8 **)(param_1 + 0xa0) = ptr;
                        ptr = (undefined8 *)0x0;
                        *(undefined4 *)(param_1 + 0x98) = 4;
                      }
                    }
                  }
                }
                else {
                  ERR_new();
                  dst = (EC_POINT *)0x0;
                  ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x360,"ecp_nistz256_mult_precompute");
                  ERR_set_error(0x10,0x72,0);
                  local_c0 = (void *)0x0;
                  local_c8 = (EC_POINT *)0x0;
                }
              }
            }
LAB_004ffb35:
            BN_CTX_end(param_2);
            BN_CTX_free(local_d0);
            EC_nistz256_pre_comp_free(ptr);
            CRYPTO_free(local_c0);
            EC_POINT_free(dst);
            EC_POINT_free(local_c8);
          }
        }
      }
    }
    else {
      iVar2 = 1;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar2;
}

