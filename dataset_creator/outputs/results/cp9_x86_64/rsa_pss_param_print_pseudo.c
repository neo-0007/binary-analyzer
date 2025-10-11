
uint rsa_pss_param_print(BIO *param_1,int param_2,long *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  X509_ALGOR *a;
  char *pcVar3;
  
  iVar1 = BIO_indent(param_1,param_4,0x80);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      if (param_3 == (long *)0x0) {
        pcVar3 = "(INVALID PSS PARAMETERS)\n";
LAB_00552547:
        iVar1 = BIO_puts(param_1,pcVar3);
        return (uint)(0 < iVar1);
      }
      iVar1 = BIO_puts(param_1,"\n");
    }
    else {
      pcVar3 = "No PSS parameter restrictions\n";
      if (param_3 == (long *)0x0) goto LAB_00552547;
      iVar1 = BIO_puts(param_1,"PSS parameter restrictions:");
      if (iVar1 < 1) {
        return 0;
      }
      param_4 = param_4 + 2;
      iVar1 = BIO_puts(param_1,"\n");
    }
    if (((0 < iVar1) && (iVar1 = BIO_indent(param_1,param_4,0x80), iVar1 != 0)) &&
       (iVar1 = BIO_puts(param_1,"Hash Algorithm: "), 0 < iVar1)) {
      if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
        iVar1 = BIO_puts(param_1,"sha1 (default)");
      }
      else {
        iVar1 = i2a_ASN1_OBJECT(param_1,*(ASN1_OBJECT **)*param_3);
      }
      if (((0 < iVar1) && (iVar1 = BIO_puts(param_1,"\n"), 0 < iVar1)) &&
         ((iVar1 = BIO_indent(param_1,param_4,0x80), iVar1 != 0 &&
          (iVar1 = BIO_puts(param_1,"Mask Algorithm: "), 0 < iVar1)))) {
        if ((undefined8 *)param_3[1] == (undefined8 *)0x0) {
          iVar1 = BIO_puts(param_1,"mgf1 with sha1 (default)");
joined_r0x005525ac:
          if (0 < iVar1) {
            a = (X509_ALGOR *)0x0;
LAB_0055241a:
            BIO_puts(param_1,"\n");
            uVar2 = BIO_indent(param_1,param_4,0x80);
            if (uVar2 != 0) {
              pcVar3 = "Minimum";
              if (param_2 == 0) {
                pcVar3 = "";
              }
              iVar1 = BIO_printf(param_1,"%s Salt Length: 0x",pcVar3);
              uVar2 = 0;
              if (0 < iVar1) {
                if ((ASN1_INTEGER *)param_3[2] == (ASN1_INTEGER *)0x0) {
                  iVar1 = BIO_puts(param_1,"14 (default)");
                }
                else {
                  iVar1 = i2a_ASN1_INTEGER(param_1,(ASN1_INTEGER *)param_3[2]);
                }
                uVar2 = 0;
                if (0 < iVar1) {
                  BIO_puts(param_1,"\n");
                  uVar2 = BIO_indent(param_1,param_4,0x80);
                  if (uVar2 != 0) {
                    uVar2 = 0;
                    iVar1 = BIO_puts(param_1,"Trailer Field: 0x");
                    if (0 < iVar1) {
                      if ((ASN1_INTEGER *)param_3[3] == (ASN1_INTEGER *)0x0) {
                        iVar1 = BIO_puts(param_1,"01 (default)");
                      }
                      else {
                        iVar1 = i2a_ASN1_INTEGER(param_1,(ASN1_INTEGER *)param_3[3]);
                      }
                      if (0 < iVar1) {
                        uVar2 = 1;
                        BIO_puts(param_1,"\n");
                      }
                    }
                  }
                }
              }
            }
            goto LAB_005522f7;
          }
        }
        else {
          iVar1 = i2a_ASN1_OBJECT(param_1,*(ASN1_OBJECT **)param_3[1]);
          if ((0 < iVar1) && (iVar1 = BIO_puts(param_1," with "), 0 < iVar1)) {
            a = (X509_ALGOR *)ossl_x509_algor_mgf1_decode(param_3[1]);
            if (a == (X509_ALGOR *)0x0) {
              iVar1 = BIO_puts(param_1,"INVALID");
              goto joined_r0x005525ac;
            }
            iVar1 = i2a_ASN1_OBJECT(param_1,a->algorithm);
            uVar2 = 0;
            if (iVar1 < 1) goto LAB_005522f7;
            goto LAB_0055241a;
          }
        }
      }
    }
  }
  a = (X509_ALGOR *)0x0;
  uVar2 = 0;
LAB_005522f7:
  X509_ALGOR_free(a);
  return uVar2;
}

