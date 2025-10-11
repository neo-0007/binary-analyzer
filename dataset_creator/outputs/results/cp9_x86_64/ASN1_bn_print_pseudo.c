
int ASN1_bn_print(BIO *bp,char *number,BIGNUM *num,uchar *buf,int off)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  uchar *puVar7;
  uchar *puVar8;
  char *pcVar9;
  
  uVar4 = 1;
  if (num != (BIGNUM *)0x0) {
    pcVar9 = "-";
    iVar3 = BN_is_negative(num);
    if (iVar3 == 0) {
      pcVar9 = "";
    }
    uVar4 = BIO_indent(bp,off,0x80);
    if (uVar4 != 0) {
      iVar3 = BN_is_zero(num);
      if (iVar3 == 0) {
        iVar3 = BN_num_bits(num);
        if (iVar3 < 0x41) {
          puVar6 = (undefined8 *)bn_get_words();
          uVar2 = *puVar6;
          puVar6 = (undefined8 *)bn_get_words(num);
          iVar3 = BIO_printf(bp,"%s %s%lu (%s0x%lx)\n",number,pcVar9,*puVar6,pcVar9,uVar2);
          uVar4 = (uint)(0 < iVar3);
        }
        else {
          iVar5 = BN_num_bits(num);
          iVar3 = iVar5 + 0xe;
          if (-1 < iVar5 + 7) {
            iVar3 = iVar5 + 7;
          }
          iVar3 = (iVar3 >> 3) + 1;
          puVar7 = (uchar *)CRYPTO_malloc(iVar3,"../crypto/asn1/t_pkey.c",0x49);
          uVar4 = 0;
          if (puVar7 != (uchar *)0x0) {
            cVar1 = *pcVar9;
            *puVar7 = '\0';
            pcVar9 = " (Negative)";
            if (cVar1 != '-') {
              pcVar9 = "";
            }
            iVar5 = BIO_printf(bp,"%s%s\n",number,pcVar9);
            if (0 < iVar5) {
              iVar5 = BN_bn2bin(num,puVar7 + 1);
              puVar8 = puVar7 + 1;
              if ((char)puVar7[1] < '\0') {
                iVar5 = iVar5 + 1;
                puVar8 = puVar7;
              }
              iVar5 = ASN1_buf_print(bp,puVar8,(long)iVar5,off + 4);
              uVar4 = (uint)(iVar5 != 0);
            }
          }
          CRYPTO_clear_free(puVar7,(long)iVar3,"../crypto/asn1/t_pkey.c",0x5b);
        }
      }
      else {
        iVar3 = BIO_printf(bp,"%s 0\n",number);
        uVar4 = (uint)(0 < iVar3);
      }
    }
  }
  return uVar4;
}

