
RSA * ossl_b2i_RSA_after_header(long *param_1,int param_2,int param_3)

{
  uint *puVar1;
  ulong uVar2;
  int iVar3;
  RSA *r;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  BIGNUM *a_03;
  BIGNUM *a_04;
  BIGNUM *a_05;
  BIGNUM *a_06;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (uint *)*param_1;
  r = RSA_new();
  if ((r == (RSA *)0x0) || (a = BN_new(), a == (BIGNUM *)0x0)) {
    a_05 = (BIGNUM *)0x0;
    a_04 = (BIGNUM *)0x0;
    a_03 = (BIGNUM *)0x0;
    a_02 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_06 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    goto LAB_0054505e;
  }
  iVar3 = BN_set_word(a,(ulong)*puVar1);
  if (iVar3 == 0) {
    a_05 = (BIGNUM *)0x0;
    a_04 = (BIGNUM *)0x0;
    a_03 = (BIGNUM *)0x0;
    a_02 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_06 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    goto LAB_0054505e;
  }
  puVar1 = puVar1 + 1;
  uVar6 = param_2 + 7U >> 3;
  a_00 = (BIGNUM *)BN_lebin2bn(puVar1,uVar6,0);
  if (a_00 == (BIGNUM *)0x0) {
    a_05 = (BIGNUM *)0x0;
    a_04 = (BIGNUM *)0x0;
    a_03 = (BIGNUM *)0x0;
    a_02 = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_06 = (BIGNUM *)0x0;
    goto LAB_0054505e;
  }
  lVar4 = (long)puVar1 + (ulong)uVar6;
  if (param_3 == 0) {
    uVar5 = param_2 + 0xfU >> 4;
    a_01 = (BIGNUM *)BN_lebin2bn(lVar4,uVar5,0);
    if (a_01 == (BIGNUM *)0x0) {
      a_05 = (BIGNUM *)0x0;
      a_04 = (BIGNUM *)0x0;
      a_03 = (BIGNUM *)0x0;
      a_02 = (BIGNUM *)0x0;
      a_06 = (BIGNUM *)0x0;
      goto LAB_0054505e;
    }
    uVar2 = (ulong)uVar5;
    a_02 = (BIGNUM *)BN_lebin2bn(uVar2 + lVar4,uVar2,0);
    if (a_02 == (BIGNUM *)0x0) {
      a_05 = (BIGNUM *)0x0;
      a_04 = (BIGNUM *)0x0;
      a_03 = (BIGNUM *)0x0;
      a_06 = (BIGNUM *)0x0;
      goto LAB_0054505e;
    }
    lVar4 = uVar2 + lVar4 + uVar2;
    a_03 = (BIGNUM *)BN_lebin2bn(lVar4,uVar5,0);
    if (a_03 == (BIGNUM *)0x0) {
      a_05 = (BIGNUM *)0x0;
      a_04 = (BIGNUM *)0x0;
      a_06 = (BIGNUM *)0x0;
      goto LAB_0054505e;
    }
    lVar4 = lVar4 + uVar2;
    a_04 = (BIGNUM *)BN_lebin2bn(lVar4,uVar5,0);
    if (a_04 == (BIGNUM *)0x0) {
      a_05 = (BIGNUM *)0x0;
      a_06 = (BIGNUM *)0x0;
      goto LAB_0054505e;
    }
    lVar4 = lVar4 + uVar2;
    a_05 = (BIGNUM *)BN_lebin2bn(lVar4,uVar5,0);
    if (a_05 == (BIGNUM *)0x0) {
      a_06 = (BIGNUM *)0x0;
      goto LAB_0054505e;
    }
    lVar4 = lVar4 + uVar2;
    a_06 = (BIGNUM *)BN_lebin2bn(lVar4,uVar6,0);
    if ((a_06 == (BIGNUM *)0x0) || (iVar3 = RSA_set0_factors(r,a_01,a_02), iVar3 == 0))
    goto LAB_0054505e;
    iVar3 = RSA_set0_crt_params(r,a_03,a_04,a_05);
    if (iVar3 != 0) {
      lVar4 = lVar4 + (ulong)uVar6;
      goto LAB_00545123;
    }
  }
  else {
    a_06 = (BIGNUM *)0x0;
LAB_00545123:
    iVar3 = RSA_set0_key(r,a_00,a,a_06);
    if (iVar3 != 0) {
      *param_1 = lVar4;
      return r;
    }
    a_05 = (BIGNUM *)0x0;
    a_04 = (BIGNUM *)0x0;
    a_03 = (BIGNUM *)0x0;
  }
  a_02 = (BIGNUM *)0x0;
  a_01 = (BIGNUM *)0x0;
LAB_0054505e:
  ERR_new();
  ERR_set_debug("../crypto/pem/pvkfmt.c",0x1e8,"ossl_b2i_RSA_after_header");
  ERR_set_error(9,0xc0100,0);
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(a_02);
  BN_free(a_03);
  BN_free(a_04);
  BN_free(a_05);
  BN_free(a_06);
  RSA_free(r);
  return (RSA *)0x0;
}

