
int BN_bn2bin(BIGNUM *a,uchar *to)

{
  int iVar1;
  
  iVar1 = bn2binpad(a,to,0xffffffff,0);
  return iVar1;
}

