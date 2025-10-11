
int ossl_rsa_multip_calc_product(long param_1)

{
  int iVar1;
  int iVar2;
  BN_CTX *ctx;
  undefined8 *puVar3;
  BIGNUM *r;
  int iVar4;
  BIGNUM *a;
  BIGNUM *b;
  
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x88));
  if (0 < iVar1) {
    ctx = BN_CTX_new();
    if (ctx != (BN_CTX *)0x0) {
      a = *(BIGNUM **)(param_1 + 0x40);
      b = *(BIGNUM **)(param_1 + 0x48);
      iVar4 = 0;
      do {
        puVar3 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x88),iVar4);
        r = (BIGNUM *)puVar3[3];
        if (r == (BIGNUM *)0x0) {
          r = (BIGNUM *)BN_secure_new();
          puVar3[3] = r;
          if (r == (BIGNUM *)0x0) {
            iVar2 = 0;
            goto LAB_00558ab5;
          }
        }
        iVar2 = BN_mul(r,a,b,ctx);
        if (iVar2 == 0) goto LAB_00558ab5;
        a = (BIGNUM *)puVar3[3];
        b = (BIGNUM *)*puVar3;
        iVar4 = iVar4 + 1;
      } while (iVar4 != iVar1);
      iVar2 = 1;
      goto LAB_00558ab5;
    }
  }
  iVar2 = 0;
  ctx = (BN_CTX *)0x0;
LAB_00558ab5:
  BN_CTX_free(ctx);
  return iVar2;
}

