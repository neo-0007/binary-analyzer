
undefined8 do_dh_print(BIO *param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  BIGNUM *num;
  char *pcVar3;
  undefined8 uVar4;
  BIGNUM *num_00;
  
  lVar1 = *(long *)(param_2 + 8);
  if (param_4 == 2) {
    num_00 = *(BIGNUM **)(param_2 + 0x78);
    num = *(BIGNUM **)(param_2 + 0x70);
    if (((lVar1 == 0) || (num_00 == (BIGNUM *)0x0)) || (num == (BIGNUM *)0x0)) goto LAB_004c5b16;
    pcVar3 = "DH Private-Key";
LAB_004c5a6d:
    iVar2 = BIO_indent(param_1,param_3,0x80);
    if (iVar2 != 0) {
      DH_bits(param_2);
      iVar2 = BIO_printf(param_1,"%s: (%d bit)\n",pcVar3);
      if (0 < iVar2) {
        param_3 = param_3 + 4;
        iVar2 = ASN1_bn_print(param_1,"private-key:",num_00,(uchar *)0x0,param_3);
        if ((((iVar2 != 0) &&
             (iVar2 = ASN1_bn_print(param_1,"public-key:",num,(uchar *)0x0,param_3), iVar2 != 0)) &&
            (iVar2 = ossl_ffc_params_print(param_1,param_2 + 8,param_3), iVar2 != 0)) &&
           ((*(int *)(param_2 + 0x68) == 0 ||
            ((iVar2 = BIO_indent(param_1,param_3,0x80), iVar2 != 0 &&
             (iVar2 = BIO_printf(param_1,"recommended-private-length: %d bits\n",
                                 (ulong)*(uint *)(param_2 + 0x68)), 0 < iVar2)))))) {
          return 1;
        }
      }
    }
    uVar4 = 0x80007;
  }
  else {
    if (param_4 == 0) {
      if (lVar1 != 0) {
        num = (BIGNUM *)0x0;
LAB_004c5a63:
        num_00 = (BIGNUM *)0x0;
        pcVar3 = "DH Parameters";
        goto LAB_004c5a6d;
      }
    }
    else {
      num = *(BIGNUM **)(param_2 + 0x70);
      if (lVar1 != 0) {
        if ((num == (BIGNUM *)0x0) && (uVar4 = 0xc0102, 0 < param_4)) goto LAB_004c5a8a;
        num_00 = (BIGNUM *)0x0;
        pcVar3 = "DH Public-Key";
        if (param_4 == 1) goto LAB_004c5a6d;
        goto LAB_004c5a63;
      }
    }
LAB_004c5b16:
    uVar4 = 0xc0102;
  }
LAB_004c5a8a:
  ERR_new();
  ERR_set_debug("../crypto/dh/dh_ameth.c",0x125,"do_dh_print");
  ERR_set_error(5,uVar4,0);
  return 0;
}

