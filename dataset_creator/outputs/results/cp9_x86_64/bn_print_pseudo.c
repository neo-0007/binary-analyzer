
uint bn_print(BIO *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = BN_print(param_1,(BIGNUM *)*param_2);
  if (uVar1 == 0) {
    return uVar1;
  }
  iVar2 = BIO_puts(param_1,"\n");
  return (uint)(0 < iVar2);
}

