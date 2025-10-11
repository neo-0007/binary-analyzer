
int BN_rshift(BIGNUM *r,BIGNUM *a,int n)

{
  int iVar1;
  
  if (-1 < n) {
    iVar1 = bn_rshift_fixed_top();
    bn_correct_top(r);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/bn/bn_shift.c",0x9b,"BN_rshift");
  ERR_set_error(3,0x77,0);
  return 0;
}

