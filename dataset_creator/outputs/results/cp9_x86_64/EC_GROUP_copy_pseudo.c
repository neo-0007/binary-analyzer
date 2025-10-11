
int EC_GROUP_copy(EC_GROUP *dst,EC_GROUP *src)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  BN_MONT_CTX *pBVar4;
  void *__dest;
  BIGNUM *pBVar5;
  BN_MONT_CTX *mont;
  EC_POINT *point;
  EC_POINT *src_00;
  
  if (*(long *)(*(long *)dst + 0x20) == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0xa4,"EC_GROUP_copy");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if (*(long *)dst != *(long *)src) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_lib.c",0xa8,"EC_GROUP_copy");
      ERR_set_error(0x10,0x65,0);
      return 0;
    }
    if (dst == src) {
      return 1;
    }
    *(undefined8 *)(dst + 0xa8) = *(undefined8 *)(src + 0xa8);
    *(undefined4 *)(dst + 0x20) = *(undefined4 *)(src + 0x20);
    *(undefined4 *)(dst + 0x98) = *(undefined4 *)(src + 0x98);
    switch(*(undefined4 *)(src + 0x98)) {
    case 0:
      *(undefined8 *)(dst + 0xa0) = 0;
      break;
    case 1:
      uVar3 = EC_nistp224_pre_comp_dup(*(undefined8 *)(src + 0xa0));
      *(undefined8 *)(dst + 0xa0) = uVar3;
      break;
    case 2:
      uVar3 = EC_nistp256_pre_comp_dup(*(undefined8 *)(src + 0xa0));
      *(undefined8 *)(dst + 0xa0) = uVar3;
      break;
    case 3:
      uVar3 = EC_nistp521_pre_comp_dup(*(undefined8 *)(src + 0xa0));
      *(undefined8 *)(dst + 0xa0) = uVar3;
      break;
    case 4:
      uVar3 = EC_nistz256_pre_comp_dup(*(undefined8 *)(src + 0xa0));
      *(undefined8 *)(dst + 0xa0) = uVar3;
      break;
    case 5:
      uVar3 = EC_ec_pre_comp_dup(*(undefined8 *)(src + 0xa0));
      *(undefined8 *)(dst + 0xa0) = uVar3;
    }
    pBVar4 = *(BN_MONT_CTX **)(src + 0x90);
    mont = *(BN_MONT_CTX **)(dst + 0x90);
    if (pBVar4 == (BN_MONT_CTX *)0x0) {
      BN_MONT_CTX_free(mont);
      *(undefined8 *)(dst + 0x90) = 0;
    }
    else {
      if (mont == (BN_MONT_CTX *)0x0) {
        mont = BN_MONT_CTX_new();
        *(BN_MONT_CTX **)(dst + 0x90) = mont;
        if (mont == (BN_MONT_CTX *)0x0) {
          return 0;
        }
        pBVar4 = *(BN_MONT_CTX **)(src + 0x90);
      }
      pBVar4 = BN_MONT_CTX_copy(mont,pBVar4);
      if (pBVar4 == (BN_MONT_CTX *)0x0) {
        return 0;
      }
    }
    src_00 = *(EC_POINT **)(src + 8);
    point = *(EC_POINT **)(dst + 8);
    if (src_00 == (EC_POINT *)0x0) {
      EC_POINT_clear_free(point);
      *(undefined8 *)(dst + 8) = 0;
    }
    else {
      if (point == (EC_POINT *)0x0) {
        point = EC_POINT_new(dst);
        *(EC_POINT **)(dst + 8) = point;
        if (point == (EC_POINT *)0x0) {
          return 0;
        }
        src_00 = *(EC_POINT **)(src + 8);
      }
      iVar2 = EC_POINT_copy(point,src_00);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (((**(byte **)src & 2) != 0) ||
       ((pBVar5 = BN_copy(*(BIGNUM **)(dst + 0x10),*(BIGNUM **)(src + 0x10)),
        pBVar5 != (BIGNUM *)0x0 &&
        (pBVar5 = BN_copy(*(BIGNUM **)(dst + 0x18),*(BIGNUM **)(src + 0x18)),
        pBVar5 != (BIGNUM *)0x0)))) {
      lVar1 = *(long *)(src + 0x30);
      *(undefined4 *)(dst + 0x24) = *(undefined4 *)(src + 0x24);
      *(undefined4 *)(dst + 0x2c) = *(undefined4 *)(src + 0x2c);
      *(undefined4 *)(dst + 0x28) = *(undefined4 *)(src + 0x28);
      if (lVar1 == 0) {
        CRYPTO_free(*(void **)(dst + 0x30));
        uVar3 = 0;
        *(undefined8 *)(dst + 0x30) = 0;
      }
      else {
        CRYPTO_free(*(void **)(dst + 0x30));
        __dest = CRYPTO_malloc((int)*(undefined8 *)(src + 0x38),"../crypto/ec/ec_lib.c",0xfa);
        *(void **)(dst + 0x30) = __dest;
        if (__dest == (void *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_lib.c",0xfb,"EC_GROUP_copy");
          ERR_set_error(0x10,0xc0100,0);
          return 0;
        }
        memcpy(__dest,*(void **)(src + 0x30),*(size_t *)(src + 0x38));
        uVar3 = *(undefined8 *)(src + 0x38);
      }
      *(undefined8 *)(dst + 0x38) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x004e38bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(*(long *)dst + 0x20))(dst,src);
      return iVar2;
    }
  }
  return 0;
}

