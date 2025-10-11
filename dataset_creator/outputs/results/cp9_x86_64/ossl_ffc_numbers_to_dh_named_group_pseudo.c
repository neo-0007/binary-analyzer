
undefined1 * ossl_ffc_numbers_to_dh_named_group(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *b;
  
  b = ossl_bignum_ffdhe2048_p;
  lVar3 = 0;
  puVar2 = (undefined8 *)(dh_named_groups + 0x20);
  do {
    iVar1 = BN_cmp(param_1,(BIGNUM *)b);
    if (iVar1 == 0) {
      iVar1 = BN_cmp(param_3,(BIGNUM *)puVar2[1]);
      if (iVar1 == 0) {
        if (param_2 == (BIGNUM *)0x0) {
LAB_00533e62:
          return dh_named_groups + lVar3 * 0x30;
        }
        iVar1 = BN_cmp(param_2,(BIGNUM *)*puVar2);
        if (iVar1 == 0) goto LAB_00533e62;
      }
    }
    lVar3 = lVar3 + 1;
    if (lVar3 == 0xe) {
      return (undefined1 *)0x0;
    }
    b = (undefined1 *)puVar2[5];
    puVar2 = puVar2 + 6;
  } while( true );
}

