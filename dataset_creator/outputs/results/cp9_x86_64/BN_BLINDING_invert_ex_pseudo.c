
int BN_BLINDING_invert_ex(BIGNUM *n,BIGNUM *r,BN_BLINDING *b,BN_CTX *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((r == (BIGNUM *)0x0) && (r = *(BIGNUM **)(b + 8), r == (BIGNUM *)0x0)) {
    ERR_new();
    iVar5 = 0;
    ERR_set_debug("../crypto/bn/bn_blind.c",0xaf,"BN_BLINDING_invert_ex");
    ERR_set_error(3,0x6b,0);
  }
  else {
    lVar3 = *(long *)(b + 0x38);
    if (lVar3 == 0) {
      iVar5 = BN_mod_mul(n,n,r,*(BIGNUM **)(b + 0x18),param_4);
      return iVar5;
    }
    uVar1 = r->top;
    if ((int)uVar1 <= n->dmax) {
      uVar2 = n->top;
      lVar7 = (long)(int)uVar2;
      lVar8 = (long)(int)uVar1;
      if (lVar8 != 0) {
        puVar4 = n->d;
        lVar6 = -lVar7;
        do {
          puVar4[lVar7 + lVar6] = puVar4[lVar7 + lVar6] & lVar6 >> 0x3f;
          lVar6 = lVar6 + 1;
        } while (lVar8 - lVar7 != lVar6);
      }
      n->top = (uVar2 ^ uVar1) & (uint)(lVar8 - lVar7 >> 0x3f) ^ uVar1;
    }
    iVar5 = bn_mul_mont_fixed_top(n,n,r,lVar3);
    bn_correct_top_consttime(n);
  }
  return iVar5;
}

