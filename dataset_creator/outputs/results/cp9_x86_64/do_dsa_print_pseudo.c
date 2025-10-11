
bool do_dsa_print(BIO *param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  BIGNUM *num;
  ulong uVar3;
  BIGNUM *num_00;
  
  uVar3 = 0;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = DSA_bits(param_2);
    uVar3 = (ulong)uVar1;
  }
  if (param_4 == 2) {
    num = *(BIGNUM **)(param_2 + 0x70);
    num_00 = *(BIGNUM **)(param_2 + 0x68);
    if (num != (BIGNUM *)0x0) {
      iVar2 = BIO_indent(param_1,param_3,0x80);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = BIO_printf(param_1,"%s: (%d bit)\n","Private-Key");
      if (iVar2 < 1) {
        return false;
      }
      goto LAB_004ca9c8;
    }
  }
  else {
    num_00 = (BIGNUM *)0x0;
    if (param_4 != 0) {
      num_00 = *(BIGNUM **)(param_2 + 0x68);
    }
  }
  iVar2 = BIO_printf(param_1,"Public-Key: (%d bit)\n",uVar3);
  if (iVar2 < 1) {
    return false;
  }
  num = (BIGNUM *)0x0;
LAB_004ca9c8:
  iVar2 = ASN1_bn_print(param_1,"priv:",num,(uchar *)0x0,param_3);
  if ((iVar2 != 0) &&
     (iVar2 = ASN1_bn_print(param_1,"pub: ",num_00,(uchar *)0x0,param_3), iVar2 != 0)) {
    iVar2 = ossl_ffc_params_print(param_1,param_2 + 8,param_3);
    return iVar2 != 0;
  }
  return false;
}

