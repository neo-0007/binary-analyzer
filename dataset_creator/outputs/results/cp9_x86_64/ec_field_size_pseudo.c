
long ec_field_size(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  long lVar3;
  
  a = BN_new();
  a_00 = BN_new();
  a_01 = BN_new();
  if ((a != (BIGNUM *)0x0 && a_00 != (BIGNUM *)0x0) && (a_01 != (BIGNUM *)0x0)) {
    iVar1 = EC_GROUP_get_curve(param_1,a,a_00,a_01,0);
    if (iVar1 != 0) {
      iVar2 = BN_num_bits(a);
      iVar1 = iVar2 + 0xe;
      if (-1 < iVar2 + 7) {
        iVar1 = iVar2 + 7;
      }
      lVar3 = (long)(iVar1 >> 3);
      goto LAB_0057b373;
    }
  }
  lVar3 = 0;
LAB_0057b373:
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  return lVar3;
}

