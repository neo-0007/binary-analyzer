
int bn_i2c(undefined8 *param_1,uchar *param_2)

{
  BIGNUM *a;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  a = (BIGNUM *)*param_1;
  if (a == (BIGNUM *)0x0) {
    return -1;
  }
  uVar1 = BN_num_bits(a);
  if ((uVar1 & 7) == 0) {
    iVar4 = 1;
    if (param_2 == (uchar *)0x0) goto LAB_005a9e7c;
    *param_2 = '\0';
    param_2 = param_2 + 1;
    iVar3 = 1;
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    if (param_2 == (uchar *)0x0) goto LAB_005a9e7c;
  }
  iVar4 = iVar3;
  BN_bn2bin(a,param_2);
LAB_005a9e7c:
  iVar2 = BN_num_bits(a);
  iVar3 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar3 = iVar2 + 7;
  }
  return (iVar3 >> 3) + iVar4;
}

