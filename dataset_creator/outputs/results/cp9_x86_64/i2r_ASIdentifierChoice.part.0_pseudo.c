
undefined4
i2r_ASIdentifierChoice_part_0(BIO *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  
  BIO_printf(param_1,"%*s%s:\n",param_3,&DAT_008343a2,param_4);
  iVar1 = (int)param_3;
  if (*param_2 == 0) {
    uVar5 = 1;
    BIO_printf(param_1,"%*sinherit\n",(ulong)(iVar1 + 2),&DAT_008343a2);
  }
  else if (*param_2 == 1) {
    iVar6 = 0;
    while( true ) {
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 2));
      if (iVar2 <= iVar6) break;
      piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_2 + 2),iVar6);
      if (*piVar3 == 0) {
        pcVar4 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,*(ASN1_INTEGER **)(piVar3 + 2));
        if (pcVar4 == (char *)0x0) goto LAB_00607068;
        BIO_printf(param_1,"%*s%s\n",(ulong)(iVar1 + 2),&DAT_008343a2,pcVar4);
        CRYPTO_free(pcVar4);
      }
      else {
        if (*piVar3 != 1) goto LAB_00607068;
        pcVar4 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,
                                  (ASN1_INTEGER *)**(undefined8 **)(piVar3 + 2));
        if (pcVar4 == (char *)0x0) goto LAB_00607068;
        BIO_printf(param_1,"%*s%s-",(ulong)(iVar1 + 2),&DAT_008343a2,pcVar4);
        CRYPTO_free(pcVar4);
        pcVar4 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,
                                  *(ASN1_INTEGER **)(*(long *)(piVar3 + 2) + 8));
        if (pcVar4 == (char *)0x0) goto LAB_00607068;
        BIO_printf(param_1,"%s\n",pcVar4);
        CRYPTO_free(pcVar4);
      }
      iVar6 = iVar6 + 1;
    }
    uVar5 = 1;
  }
  else {
LAB_00607068:
    uVar5 = 0;
  }
  return uVar5;
}

