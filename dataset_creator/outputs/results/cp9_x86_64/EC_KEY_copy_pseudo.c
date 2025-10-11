
EC_KEY * EC_KEY_copy(EC_KEY *dst,EC_KEY *src)

{
  code *pcVar1;
  int iVar2;
  EC_GROUP *dst_00;
  EC_POINT *dst_01;
  BIGNUM *pBVar3;
  long lVar4;
  BIGNUM *a;
  long lVar5;
  ENGINE *e;
  
  if ((dst == (EC_KEY *)0x0) || (src == (EC_KEY *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_key.c",0x6c,"EC_KEY_copy");
    ERR_set_error(0x10,0xc0102,0);
  }
  else {
    if (*(long *)src != *(long *)dst) {
      pcVar1 = *(code **)(*(long *)dst + 0x18);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)();
      }
      if ((*(long **)(dst + 0x18) != (long *)0x0) &&
         (pcVar1 = *(code **)(**(long **)(dst + 0x18) + 0x168), pcVar1 != (code *)0x0)) {
        (*pcVar1)(dst);
      }
      iVar2 = ENGINE_finish(*(ENGINE **)(dst + 8));
      if (iVar2 == 0) {
        return (EC_KEY *)0x0;
      }
      *(undefined8 *)(dst + 8) = 0;
    }
    lVar5 = *(long *)(src + 0x18);
    *(undefined8 *)(dst + 0x58) = *(undefined8 *)(src + 0x58);
    if (lVar5 != 0) {
      EC_GROUP_free(*(EC_GROUP **)(dst + 0x18));
      dst_00 = (EC_GROUP *)
               ossl_ec_group_new_ex
                         (*(undefined8 *)(src + 0x58),*(undefined8 *)(src + 0x60),
                          **(undefined8 **)(src + 0x18));
      *(EC_GROUP **)(dst + 0x18) = dst_00;
      if (dst_00 == (EC_GROUP *)0x0) {
        return (EC_KEY *)0x0;
      }
      iVar2 = EC_GROUP_copy(dst_00,*(EC_GROUP **)(src + 0x18));
      if (iVar2 == 0) {
        return (EC_KEY *)0x0;
      }
      if (*(long *)(src + 0x20) != 0) {
        EC_POINT_free(*(EC_POINT **)(dst + 0x20));
        dst_01 = EC_POINT_new(*(EC_GROUP **)(src + 0x18));
        *(EC_POINT **)(dst + 0x20) = dst_01;
        if (dst_01 == (EC_POINT *)0x0) {
          return (EC_KEY *)0x0;
        }
        iVar2 = EC_POINT_copy(dst_01,*(EC_POINT **)(src + 0x20));
        if (iVar2 == 0) {
          return (EC_KEY *)0x0;
        }
      }
      pBVar3 = *(BIGNUM **)(src + 0x28);
      if (pBVar3 != (BIGNUM *)0x0) {
        a = *(BIGNUM **)(dst + 0x28);
        if (a == (BIGNUM *)0x0) {
          a = BN_new();
          *(BIGNUM **)(dst + 0x28) = a;
          if (a == (BIGNUM *)0x0) {
            return (EC_KEY *)0x0;
          }
          pBVar3 = *(BIGNUM **)(src + 0x28);
        }
        pBVar3 = BN_copy(a,pBVar3);
        if (pBVar3 == (BIGNUM *)0x0) {
          return (EC_KEY *)0x0;
        }
        if ((*(code **)(**(long **)(src + 0x18) + 0x160) != (code *)0x0) &&
           (iVar2 = (**(code **)(**(long **)(src + 0x18) + 0x160))(dst,src), iVar2 == 0)) {
          return (EC_KEY *)0x0;
        }
      }
    }
    *(undefined4 *)(dst + 0x30) = *(undefined4 *)(src + 0x30);
    *(undefined4 *)(dst + 0x34) = *(undefined4 *)(src + 0x34);
    *(undefined4 *)(dst + 0x10) = *(undefined4 *)(src + 0x10);
    *(undefined4 *)(dst + 0x3c) = *(undefined4 *)(src + 0x3c);
    iVar2 = CRYPTO_dup_ex_data(8,(CRYPTO_EX_DATA *)(dst + 0x40),(CRYPTO_EX_DATA *)(src + 0x40));
    if (iVar2 != 0) {
      lVar5 = *(long *)src;
      lVar4 = *(long *)dst;
      if (lVar5 != lVar4) {
        e = *(ENGINE **)(src + 8);
        if (e != (ENGINE *)0x0) {
          iVar2 = ENGINE_init(e);
          if (iVar2 == 0) {
            return (EC_KEY *)0x0;
          }
          e = *(ENGINE **)(src + 8);
          lVar5 = *(long *)src;
        }
        *(ENGINE **)(dst + 8) = e;
        *(long *)dst = lVar5;
        lVar4 = *(long *)src;
      }
      if ((*(code **)(lVar4 + 0x20) == (code *)0x0) ||
         (iVar2 = (**(code **)(lVar4 + 0x20))(dst,src), iVar2 != 0)) {
        *(long *)(dst + 0x68) = *(long *)(dst + 0x68) + 1;
        return dst;
      }
    }
  }
  return (EC_KEY *)0x0;
}

