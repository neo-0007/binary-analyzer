
BIGNUM * BN_CTX_get(BN_CTX *ctx)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  BIGNUM *pBVar4;
  long lVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  
  if (*(int *)(ctx + 0x34) != 0) {
    return (BIGNUM *)0x0;
  }
  if (*(int *)(ctx + 0x38) != 0) {
    return (BIGNUM *)0x0;
  }
  uVar1 = *(uint *)(ctx + 0x3c);
  uVar2 = *(uint *)(ctx + 0x18);
  if (uVar2 == *(uint *)(ctx + 0x1c)) {
    pBVar4 = (BIGNUM *)CRYPTO_malloc(400,"../crypto/bn/bn_ctx.c",0x145);
    if (pBVar4 == (BIGNUM *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/bn/bn_ctx.c",0x146,"BN_POOL_get");
      ERR_set_error(3,0xc0100,0);
      goto LAB_004af2e7;
    }
    pBVar6 = pBVar4;
    do {
      while (bn_init(pBVar6), (uVar1 & 8) == 0) {
        pBVar6 = pBVar6 + 1;
        if (pBVar6 == pBVar4 + 0x10) goto LAB_004af29c;
      }
      pBVar7 = pBVar6 + 1;
      BN_set_flags(pBVar6,8);
      pBVar6 = pBVar7;
    } while (pBVar7 != pBVar4 + 0x10);
LAB_004af29c:
    puVar3 = *(ulong **)(ctx + 0x10);
    lVar5 = *(long *)ctx;
    pBVar4[0x10].top = 0;
    pBVar4[0x10].dmax = 0;
    pBVar4[0x10].d = puVar3;
    if (lVar5 == 0) {
      *(BIGNUM **)(ctx + 0x10) = pBVar4;
      *(BIGNUM **)(ctx + 8) = pBVar4;
      *(BIGNUM **)ctx = pBVar4;
    }
    else {
      puVar3[0x31] = (ulong)pBVar4;
      *(BIGNUM **)(ctx + 0x10) = pBVar4;
      *(BIGNUM **)(ctx + 8) = pBVar4;
    }
    *(int *)(ctx + 0x1c) = *(int *)(ctx + 0x1c) + 0x10;
    *(int *)(ctx + 0x18) = *(int *)(ctx + 0x18) + 1;
  }
  else {
    if (uVar2 == 0) {
      lVar5 = *(long *)ctx;
      *(long *)(ctx + 8) = lVar5;
    }
    else {
      lVar5 = *(long *)(ctx + 8);
      if ((uVar2 & 0xf) == 0) {
        lVar5 = *(long *)(lVar5 + 0x188);
        *(long *)(ctx + 8) = lVar5;
      }
    }
    *(uint *)(ctx + 0x18) = uVar2 + 1;
    pBVar4 = (BIGNUM *)(lVar5 + (ulong)(uVar2 & 0xf) * 0x18);
    if (pBVar4 == (BIGNUM *)0x0) {
LAB_004af2e7:
      *(undefined4 *)(ctx + 0x38) = 1;
      ERR_new();
      ERR_set_debug("../crypto/bn/bn_ctx.c",0xe3,"BN_CTX_get");
      ERR_set_error(3,0x6d,0);
      return (BIGNUM *)0x0;
    }
  }
  BN_zero_ex(pBVar4);
  pBVar4->flags = pBVar4->flags & 0xfffffffb;
  *(int *)(ctx + 0x30) = *(int *)(ctx + 0x30) + 1;
  return pBVar4;
}

