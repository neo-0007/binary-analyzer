
void BN_set_negative(BIGNUM *b,int n)

{
  int iVar1;
  
  if (n == 0) {
    b->neg = 0;
    return;
  }
  iVar1 = BN_is_zero();
  b->neg = (uint)(iVar1 == 0);
  return;
}

