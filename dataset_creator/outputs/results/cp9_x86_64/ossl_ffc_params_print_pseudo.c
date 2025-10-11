
bool ossl_ffc_params_print(BIO *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  
  iVar1 = ASN1_bn_print(param_1,"prime P:",(BIGNUM *)*param_2,(uchar *)0x0,param_3);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = ASN1_bn_print(param_1,"generator G:",(BIGNUM *)param_2[2],(uchar *)0x0,param_3);
  if (iVar1 == 0) {
    return false;
  }
  if (((BIGNUM *)param_2[1] != (BIGNUM *)0x0) &&
     (iVar1 = ASN1_bn_print(param_1,"subgroup order Q:",(BIGNUM *)param_2[1],(uchar *)0x0,param_3),
     iVar1 == 0)) {
    return false;
  }
  if (((BIGNUM *)param_2[3] != (BIGNUM *)0x0) &&
     (iVar1 = ASN1_bn_print(param_1,"subgroup factor:",(BIGNUM *)param_2[3],(uchar *)0x0,param_3),
     iVar1 == 0)) {
    return false;
  }
  if (param_2[4] != 0) {
    iVar1 = BIO_indent(param_1,param_3,0x80);
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = BIO_puts(param_1,"seed:");
    if (iVar1 < 1) {
      return false;
    }
    uVar4 = 0;
    while (uVar2 = param_2[5], uVar4 < uVar2) {
      if (uVar4 * -0x1111111111111111 < 0x1111111111111112) {
        iVar1 = BIO_puts(param_1,"\n");
        if (iVar1 < 1) {
          return false;
        }
        iVar1 = BIO_indent(param_1,param_3 + 4,0x80);
        if (iVar1 == 0) {
          return false;
        }
        uVar2 = param_2[5];
      }
      pcVar3 = ":";
      if (uVar4 + 1 == uVar2) {
        pcVar3 = "";
      }
      iVar1 = BIO_printf(param_1,"%02x%s",(ulong)*(byte *)(param_2[4] + uVar4),pcVar3);
      uVar4 = uVar4 + 1;
      if (iVar1 < 1) {
        return false;
      }
    }
    iVar1 = BIO_write(param_1,&DAT_0081a1ca,1);
    if (iVar1 < 1) {
      return false;
    }
  }
  if (*(int *)(param_2 + 6) == -1) {
    return true;
  }
  iVar1 = BIO_indent(param_1,param_3,0x80);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = BIO_printf(param_1,"counter: %d\n",(ulong)*(uint *)(param_2 + 6));
  return 0 < iVar1;
}

