
BIGNUM * bn_expand2(BIGNUM *a,int words)

{
  int iVar1;
  ulong *__dest;
  
  if (a->dmax < words) {
    if (words < 0x800000) {
      iVar1 = BN_get_flags(a,2);
      if (iVar1 == 0) {
        iVar1 = BN_get_flags(a,8);
        if (iVar1 == 0) {
          __dest = (ulong *)CRYPTO_zalloc((long)words << 3,"../crypto/bn/bn_lib.c",0x119);
        }
        else {
          __dest = (ulong *)CRYPTO_secure_zalloc((long)words << 3,"../crypto/bn/bn_lib.c",0x117);
        }
        if (__dest != (ulong *)0x0) {
          if (0 < a->top) {
            memcpy(__dest,a->d,(long)a->top << 3);
          }
          if (a->d != (ulong *)0x0) {
            bn_free_d(a,1);
          }
          a->d = __dest;
          a->dmax = words;
          return a;
        }
        ERR_new();
        a = (BIGNUM *)0x0;
        ERR_set_debug("../crypto/bn/bn_lib.c",0x11b,"bn_expand_internal");
        ERR_set_error(3,0xc0100,0);
      }
      else {
        ERR_new();
        a = (BIGNUM *)0x0;
        ERR_set_debug("../crypto/bn/bn_lib.c",0x113,"bn_expand_internal");
        ERR_set_error(3,0x69,0);
      }
    }
    else {
      ERR_new();
      a = (BIGNUM *)0x0;
      ERR_set_debug("../crypto/bn/bn_lib.c",0x10f,"bn_expand_internal");
      ERR_set_error(3,0x72,0);
    }
  }
  return a;
}

