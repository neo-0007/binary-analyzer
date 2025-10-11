
undefined4
ec_pkey_export_to(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  EC_KEY *key;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  EC_GROUP *pEVar4;
  long lVar5;
  BN_CTX *ctx;
  BIGNUM *pBVar6;
  EC_POINT *pEVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  void *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  if ((param_1 != 0) && (key = *(EC_KEY **)(param_1 + 0x20), key != (EC_KEY *)0x0)) {
    pEVar4 = EC_KEY_get0_group(key);
    if (pEVar4 != (EC_GROUP *)0x0) {
      lVar5 = OSSL_PARAM_BLD_new();
      if (lVar5 != 0) {
        ctx = (BN_CTX *)BN_CTX_new_ex(param_4);
        if (ctx == (BN_CTX *)0x0) {
LAB_004dac70:
          uVar3 = 0;
          uVar9 = 0;
        }
        else {
          BN_CTX_start(ctx);
          iVar1 = ossl_ec_group_todata(pEVar4,lVar5,0,param_4,param_5,ctx);
          if (iVar1 == 0) goto LAB_004dac70;
          pBVar6 = EC_KEY_get0_private_key(key);
          pEVar7 = EC_KEY_get0_public_key(key);
          if (pEVar7 != (EC_POINT *)0x0) {
            lVar8 = EC_POINT_point2buf(pEVar4,pEVar7,2,&local_50,ctx);
            if (lVar8 != 0) {
              uVar10 = 6;
              iVar1 = OSSL_PARAM_BLD_push_octet_string(lVar5,&DAT_007da6af,local_50,lVar8);
              if (iVar1 != 0) goto LAB_004dabc5;
            }
            goto LAB_004dac70;
          }
          uVar10 = 4;
LAB_004dabc5:
          if (pBVar6 != (BIGNUM *)0x0) {
            iVar1 = EC_GROUP_order_bits(pEVar4);
            if (0 < iVar1) {
              iVar1 = OSSL_PARAM_BLD_push_BN_pad(lVar5,&DAT_007c4ad5,pBVar6,(long)(iVar1 + 7 >> 3));
              if (iVar1 != 0) {
                uVar2 = EC_KEY_get_flags(key);
                iVar1 = OSSL_PARAM_BLD_push_int(lVar5,"use-cofactor-flag",uVar2 >> 0xc & 1);
                if (iVar1 != 0) {
                  uVar10 = uVar10 | 0x81;
                  goto LAB_004dac21;
                }
              }
            }
            goto LAB_004dac70;
          }
LAB_004dac21:
          uVar9 = OSSL_PARAM_BLD_to_param(lVar5);
          uVar3 = (*param_3)(param_2,uVar10,uVar9);
        }
        OSSL_PARAM_BLD_free(lVar5);
        OSSL_PARAM_free(uVar9);
        CRYPTO_free(local_50);
        CRYPTO_free(local_48);
        BN_CTX_end(ctx);
        BN_CTX_free(ctx);
        goto LAB_004dac4b;
      }
    }
  }
  uVar3 = 0;
LAB_004dac4b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

