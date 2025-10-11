
undefined4 ossl_dh_compute_key(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  BN_CTX *ctx;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar4;
  BN_MONT_CTX *pBVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar1 = BN_num_bits(*(BIGNUM **)(param_3 + 8));
  if (iVar1 < 0x2711) {
    if ((*(BIGNUM **)(param_3 + 0x10) == (BIGNUM *)0x0) ||
       (iVar1 = BN_num_bits(*(BIGNUM **)(param_3 + 0x10)), iVar1 < 0x2711)) {
      iVar1 = BN_num_bits(*(BIGNUM **)(param_3 + 8));
      if (iVar1 < 0x200) {
        ERR_new();
        ERR_set_debug("../crypto/dh/dh_key.c",0x3b,"ossl_dh_compute_key");
        ERR_set_error(5,0x7e,0);
        return 0;
      }
      ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_3 + 0xb0));
      if (ctx == (BN_CTX *)0x0) {
        a_00 = (BIGNUM *)0x0;
        uVar3 = 0xffffffff;
        goto LAB_004c87d3;
      }
      BN_CTX_start(ctx);
      a = BN_CTX_get(ctx);
      a_00 = BN_CTX_get(ctx);
      if (a_00 == (BIGNUM *)0x0) {
LAB_004c8900:
        uVar3 = 0xffffffff;
      }
      else {
        lVar6 = *(long *)(param_3 + 0x78);
        if (lVar6 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/dh/dh_key.c",0x49,"ossl_dh_compute_key");
          uVar3 = 0xffffffff;
          ERR_set_error(5,100,0);
          goto LAB_004c87d3;
        }
        pBVar4 = *(BIGNUM **)(param_3 + 8);
        if ((*(byte *)(param_3 + 0x80) & 1) != 0) {
          pBVar5 = BN_MONT_CTX_set_locked
                             ((BN_MONT_CTX **)(param_3 + 0x88),(int)*(undefined8 *)(param_3 + 0xc0),
                              pBVar4,ctx);
          BN_set_flags(*(undefined8 *)(param_3 + 0x78),4);
          if (pBVar5 == (BN_MONT_CTX *)0x0) goto LAB_004c8900;
          lVar6 = *(long *)(param_3 + 0x78);
          pBVar4 = *(BIGNUM **)(param_3 + 8);
        }
        iVar1 = (**(code **)(*(long *)(param_3 + 0xb8) + 0x18))
                          (param_3,a_00,param_2,lVar6,pBVar4,ctx);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/dh/dh_key.c",0x58,"ossl_dh_compute_key");
          uVar3 = 0xffffffff;
          ERR_set_error(5,0x80003,0);
        }
        else {
          pBVar4 = BN_copy(a,*(BIGNUM **)(param_3 + 8));
          if ((pBVar4 != (BIGNUM *)0x0) && (iVar1 = BN_sub_word(a,1), iVar1 != 0)) {
            pBVar4 = BN_value_one();
            iVar1 = BN_cmp(a_00,pBVar4);
            if ((0 < iVar1) && (iVar1 = BN_cmp(a_00,a), iVar1 != 0)) {
              iVar2 = BN_num_bits(*(BIGNUM **)(param_3 + 8));
              iVar1 = iVar2 + 0xe;
              if (-1 < iVar2 + 7) {
                iVar1 = iVar2 + 7;
              }
              uVar3 = BN_bn2binpad(a_00,param_1,iVar1 >> 3);
              goto LAB_004c87d3;
            }
          }
          ERR_new();
          ERR_set_debug("../crypto/dh/dh_key.c",0x61,"ossl_dh_compute_key");
          uVar3 = 0xffffffff;
          ERR_set_error(5,0x80,0);
        }
      }
      goto LAB_004c87d3;
    }
    ERR_new();
    ERR_set_debug("../crypto/dh/dh_key.c",0x36,"ossl_dh_compute_key");
    uVar7 = 0x82;
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/dh/dh_key.c",0x30,"ossl_dh_compute_key");
    uVar7 = 0x67;
  }
  uVar3 = 0xffffffff;
  a_00 = (BIGNUM *)0x0;
  ERR_set_error(5,uVar7,0);
  ctx = (BN_CTX *)0x0;
LAB_004c87d3:
  BN_clear(a_00);
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  return uVar3;
}

