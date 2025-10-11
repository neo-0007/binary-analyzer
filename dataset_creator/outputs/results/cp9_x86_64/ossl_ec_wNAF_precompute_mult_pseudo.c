
undefined4 ossl_ec_wNAF_precompute_mult(EC_GROUP *param_1,BN_CTX *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  EC_POINT *pEVar4;
  BIGNUM *a;
  ulong uVar5;
  undefined8 *ptr;
  EC_POINT *pEVar6;
  byte bVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 local_94;
  EC_POINT *local_90;
  BN_CTX *local_88;
  ulong local_80;
  long local_68;
  long local_60;
  
  EC_pre_comp_free();
  if (param_1 == (EC_GROUP *)0x0) {
    return 0;
  }
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x40,"../crypto/ec/ec_mult.c",0x3a);
  if (puVar2 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_mult.c",0x3c,"ec_pre_comp_new");
    ERR_set_error(0x10,0xc0100,0);
    return 0;
  }
  *puVar2 = param_1;
  puVar2[1] = 8;
  puVar2[3] = 4;
  LOCK();
  *(undefined4 *)(puVar2 + 6) = 1;
  UNLOCK();
  lVar3 = CRYPTO_THREAD_lock_new();
  puVar2[7] = lVar3;
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_mult.c",0x47,"ec_pre_comp_new");
    ERR_set_error(0x10,0xc0100,0);
    CRYPTO_free(puVar2);
    return 0;
  }
  pEVar4 = EC_GROUP_get0_generator(param_1);
  if (pEVar4 == (EC_POINT *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_mult.c",0x353,"ossl_ec_wNAF_precompute_mult");
    ERR_set_error(0x10,0x71,0);
  }
  else {
    local_88 = (BN_CTX *)0x0;
    if ((param_2 != (BN_CTX *)0x0) ||
       (param_2 = BN_CTX_new(), local_88 = param_2, param_2 != (BN_CTX *)0x0)) {
      BN_CTX_start(param_2);
      a = (BIGNUM *)EC_GROUP_get0_order(param_1);
      if (a == (BIGNUM *)0x0) {
        local_90 = (EC_POINT *)0x0;
        local_94 = 0;
        pEVar6 = (EC_POINT *)0x0;
      }
      else {
        iVar1 = BN_is_zero(a);
        if (iVar1 == 0) {
          iVar1 = BN_num_bits(a);
          uVar5 = (ulong)iVar1;
          if (uVar5 < 2000) {
            local_68 = (-(ulong)(uVar5 < 800) & 0xfffffffffffffff8) + 0x10;
            bVar7 = 4 - (uVar5 < 800);
            local_60 = 5 - (ulong)(uVar5 < 800);
          }
          else {
            local_68 = 0x20;
            bVar7 = 5;
            local_60 = 6;
          }
          uVar5 = uVar5 + 7 >> 3;
          lVar3 = uVar5 << (bVar7 & 0x3f);
          ptr = (undefined8 *)CRYPTO_malloc((int)lVar3 * 8 + 8,"../crypto/ec/ec_mult.c",0x37f);
          local_94 = 0;
          if (ptr != (undefined8 *)0x0) {
            ptr[lVar3] = 0;
            lVar9 = 0;
            if (lVar3 != 0) {
              do {
                pEVar6 = EC_POINT_new(param_1);
                ptr[lVar9] = pEVar6;
                if (pEVar6 == (EC_POINT *)0x0) {
                  ERR_new();
                  uVar8 = 0x389;
                  pEVar6 = (EC_POINT *)0x0;
                  goto LAB_004e7e28;
                }
                lVar9 = lVar9 + 1;
              } while (lVar3 != lVar9);
            }
            pEVar6 = EC_POINT_new(param_1);
            if ((pEVar6 == (EC_POINT *)0x0) ||
               (local_90 = EC_POINT_new(param_1), local_90 == (EC_POINT *)0x0)) {
              ERR_new();
              uVar8 = 0x390;
LAB_004e7e28:
              ERR_set_debug("../crypto/ec/ec_mult.c",uVar8,"ossl_ec_wNAF_precompute_mult");
              ERR_set_error(0x10,0xc0100,0);
              local_90 = (EC_POINT *)0x0;
            }
            else {
              iVar1 = EC_POINT_copy(local_90,pEVar4);
              if (iVar1 != 0) {
                if (uVar5 != 0) {
                  local_80 = 0;
                  puVar10 = ptr;
                  do {
                    iVar1 = EC_POINT_dbl(param_1,pEVar6,local_90,param_2);
                    if (iVar1 == 0) goto LAB_004e7e4c;
                    iVar1 = EC_POINT_copy((EC_POINT *)*puVar10,local_90);
                    if (iVar1 == 0) goto LAB_004e7e4c;
                    puVar11 = puVar10 + local_68;
                    puVar10 = puVar10 + 1;
                    do {
                      iVar1 = EC_POINT_add(param_1,(EC_POINT *)*puVar10,pEVar6,
                                           (EC_POINT *)puVar10[-1],param_2);
                      if (iVar1 == 0) goto LAB_004e7e4c;
                      puVar10 = puVar10 + 1;
                    } while (puVar11 != puVar10);
                    if (local_80 < uVar5 - 1) {
                      iVar1 = EC_POINT_dbl(param_1,local_90,pEVar6,param_2);
                      if (iVar1 == 0) goto LAB_004e7e4c;
                      lVar9 = 6;
                      do {
                        iVar1 = EC_POINT_dbl(param_1,local_90,local_90,param_2);
                        if (iVar1 == 0) goto LAB_004e7e4c;
                        lVar9 = lVar9 + -1;
                      } while (lVar9 != 0);
                    }
                    local_80 = local_80 + 1;
                  } while (uVar5 != local_80);
                }
                if ((*(code **)(*(long *)param_1 + 0xd8) != (code *)0x0) &&
                   (iVar1 = (**(code **)(*(long *)param_1 + 0xd8))(param_1,lVar3,ptr,param_2),
                   iVar1 != 0)) {
                  *puVar2 = param_1;
                  puVar2[4] = ptr;
                  puVar2[2] = uVar5;
                  puVar2[1] = 8;
                  puVar2[3] = local_60;
                  puVar2[5] = lVar3;
                  local_94 = 1;
                  *(undefined8 **)(param_1 + 0xa0) = puVar2;
                  puVar2 = (undefined8 *)0x0;
                  *(undefined4 *)(param_1 + 0x98) = 5;
                  goto LAB_004e7ed1;
                }
              }
            }
LAB_004e7e4c:
            BN_CTX_end(param_2);
            BN_CTX_free(local_88);
            EC_ec_pre_comp_free(puVar2);
            pEVar4 = (EC_POINT *)*ptr;
            puVar2 = ptr;
            while (pEVar4 != (EC_POINT *)0x0) {
              EC_POINT_free(pEVar4);
              puVar10 = puVar2 + 1;
              puVar2 = puVar2 + 1;
              pEVar4 = (EC_POINT *)*puVar10;
            }
            CRYPTO_free(ptr);
            goto LAB_004e7e9a;
          }
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_mult.c",0x381,"ossl_ec_wNAF_precompute_mult");
          ERR_set_error(0x10,0xc0100,0);
          local_90 = (EC_POINT *)0x0;
          pEVar6 = (EC_POINT *)0x0;
        }
        else {
          ERR_new();
          pEVar6 = (EC_POINT *)0x0;
          ERR_set_debug("../crypto/ec/ec_mult.c",0x365,"ossl_ec_wNAF_precompute_mult");
          ERR_set_error(0x10,0x72,0);
          local_94 = 0;
          local_90 = (EC_POINT *)0x0;
        }
      }
LAB_004e7ed1:
      BN_CTX_end(param_2);
      BN_CTX_free(local_88);
      EC_ec_pre_comp_free(puVar2);
      goto LAB_004e7e9a;
    }
  }
  pEVar6 = (EC_POINT *)0x0;
  BN_CTX_free((BN_CTX *)0x0);
  EC_ec_pre_comp_free(puVar2);
  local_94 = 0;
  local_90 = (EC_POINT *)0x0;
LAB_004e7e9a:
  EC_POINT_free(pEVar6);
  EC_POINT_free(local_90);
  return local_94;
}

