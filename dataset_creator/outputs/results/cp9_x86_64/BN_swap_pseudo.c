
void BN_swap(BIGNUM *a,BIGNUM *b)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = a->flags;
  puVar4 = a->d;
  iVar2 = a->neg;
  uVar3 = b->flags;
  iVar5 = a->top;
  iVar6 = a->dmax;
  a->d = b->d;
  a->top = b->top;
  a->dmax = b->dmax;
  a->neg = b->neg;
  b->top = iVar5;
  b->dmax = iVar6;
  b->neg = iVar2;
  b->d = puVar4;
  a->flags = uVar1 & 1 | uVar3 & 0xe;
  b->flags = uVar3 & 1 | uVar1 & 0xe;
  return;
}

