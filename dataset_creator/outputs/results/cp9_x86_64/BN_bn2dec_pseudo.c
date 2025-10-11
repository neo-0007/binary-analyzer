
char * BN_bn2dec(BIGNUM *a)

{
  int iVar1;
  int iVar2;
  ulong *ptr;
  char *ptr_00;
  BIGNUM *a_00;
  ulong uVar3;
  int num;
  ulong *puVar4;
  char *local_40;
  
  iVar1 = BN_num_bits(a);
  iVar1 = (iVar1 * 3) / 10 + (iVar1 * 3) / 1000;
  num = iVar1 + 5;
  iVar1 = (iVar1 + 2) / 0x13 + 1;
  ptr = (ulong *)CRYPTO_malloc(iVar1 * 8,"../crypto/bn/bn_conv.c",0x47);
  ptr_00 = (char *)CRYPTO_malloc(num,"../crypto/bn/bn_conv.c",0x48);
  if ((ptr_00 == (char *)0x0) || (ptr == (ulong *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/bn/bn_conv.c",0x4a,__func___1);
    ERR_set_error(3,0xc0100,0);
  }
  else {
    a_00 = BN_dup(a);
    if (a_00 != (BIGNUM *)0x0) {
      iVar2 = BN_is_zero(a_00);
      if (iVar2 != 0) {
        ptr_00[0] = '0';
        ptr_00[1] = '\0';
LAB_004ae79a:
        CRYPTO_free(ptr);
        BN_free(a_00);
        return ptr_00;
      }
      iVar2 = BN_is_negative(a_00);
      puVar4 = ptr;
      local_40 = ptr_00;
      if (iVar2 != 0) {
        local_40 = ptr_00 + 1;
        *ptr_00 = '-';
      }
      while (iVar2 = BN_is_zero(a_00), iVar2 == 0) {
        if ((long)iVar1 <= (long)puVar4 - (long)ptr >> 3) goto LAB_004ae910;
        uVar3 = BN_div_word(a_00,10000000000000000000);
        *puVar4 = uVar3;
        if (uVar3 == 0xffffffffffffffff) goto LAB_004ae910;
        puVar4 = puVar4 + 1;
      }
      iVar1 = BIO_snprintf(local_40,(long)num - ((long)local_40 - (long)ptr_00),"%lu",puVar4[-1]);
      if (-1 < iVar1) {
        local_40 = local_40 + iVar1;
        while (puVar4 = puVar4 + -1, ptr != puVar4) {
          iVar1 = BIO_snprintf(local_40,(long)num - ((long)local_40 - (long)ptr_00),"%019lu",
                               puVar4[-1]);
          if (iVar1 < 0) goto LAB_004ae910;
          local_40 = local_40 + iVar1;
        }
        goto LAB_004ae79a;
      }
LAB_004ae910:
      CRYPTO_free(ptr);
      BN_free(a_00);
      goto LAB_004ae80b;
    }
  }
  CRYPTO_free(ptr);
  BN_free((BIGNUM *)0x0);
LAB_004ae80b:
  CRYPTO_free(ptr_00);
  return (char *)0x0;
}

