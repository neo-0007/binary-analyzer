
int BN_sub_word(BIGNUM *a,ulong w)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  if (w == 0) {
    return 1;
  }
  iVar1 = BN_is_zero();
  if (iVar1 == 0) {
    if (a->neg == 0) {
      puVar3 = a->d;
      iVar1 = a->top;
      uVar4 = *puVar3;
      iVar6 = 0;
      if (iVar1 == 1) {
        if (uVar4 < w) {
          *puVar3 = w - uVar4;
          a->neg = 1;
          return 1;
        }
      }
      else {
        puVar2 = puVar3;
        iVar5 = 0;
        if (uVar4 < w) {
          do {
            uVar4 = uVar4 - w;
            puVar3 = puVar2 + 1;
            iVar6 = iVar5 + 1;
            w = 1;
            *puVar2 = uVar4;
            uVar4 = *puVar3;
            puVar2 = puVar3;
            iVar5 = iVar6;
          } while (uVar4 == 0);
        }
      }
      *puVar3 = uVar4 - w;
      if ((uVar4 - w == 0) && (iVar1 + -1 == iVar6)) {
        a->top = iVar6;
      }
      iVar1 = 1;
    }
    else {
      a->neg = 0;
      iVar1 = BN_add_word(a,w);
      a->neg = 1;
    }
  }
  else {
    iVar1 = BN_set_word(a,w);
    if (iVar1 != 0) {
      BN_set_negative(a,1);
    }
  }
  return iVar1;
}

