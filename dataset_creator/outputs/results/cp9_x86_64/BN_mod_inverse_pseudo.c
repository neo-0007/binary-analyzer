
/* WARNING: Removing unreachable block (ram,0x005b3910) */

BIGNUM * BN_mod_inverse(BIGNUM *ret,BIGNUM *a,BIGNUM *n,BN_CTX *ctx)

{
  long lVar1;
  BIGNUM *pBVar2;
  BN_CTX *c;
  long in_FS_OFFSET;
  
  c = (BN_CTX *)0x0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ctx == (BN_CTX *)0x0) && (c = (BN_CTX *)BN_CTX_new_ex(0), c == (BN_CTX *)0x0)) {
    ERR_new();
    pBVar2 = (BIGNUM *)0x0;
    ERR_set_debug("../crypto/bn/bn_gcd.c",0x20b,"BN_mod_inverse");
    ERR_set_error(3,0xc0100,0);
  }
  else {
    pBVar2 = (BIGNUM *)int_bn_mod_inverse(ret);
    BN_CTX_free(c);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pBVar2;
}

