
int BN_add_word(BIGNUM *a,ulong w)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  
  if (w != 0) {
    iVar2 = BN_is_zero();
    if (iVar2 != 0) {
      iVar2 = BN_set_word(a,w);
      return iVar2;
    }
    if (a->neg != 0) {
      a->neg = 0;
      iVar2 = BN_sub_word(a,w);
      iVar3 = BN_is_zero(a);
      if (iVar3 == 0) {
        a->neg = (uint)(a->neg == 0);
        return iVar2;
      }
      return iVar2;
    }
    iVar2 = a->top;
    lVar4 = 0;
    do {
      if (iVar2 <= (int)lVar4) {
        if (iVar2 != (int)lVar4) {
          return 1;
        }
        lVar4 = bn_wexpand(a,iVar2 + 1);
        if (lVar4 != 0) {
          a->top = a->top + 1;
          a->d[iVar2] = w;
          return 1;
        }
        return 0;
      }
      puVar1 = a->d + lVar4;
      bVar5 = CARRY8(w,*puVar1);
      *puVar1 = w + *puVar1;
      lVar4 = lVar4 + 1;
      w = 1;
    } while (bVar5);
  }
  return 1;
}

