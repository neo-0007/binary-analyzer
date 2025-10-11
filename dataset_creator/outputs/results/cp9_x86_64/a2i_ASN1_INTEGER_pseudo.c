
int a2i_ASN1_INTEGER(BIO *bp,ASN1_INTEGER *bs,char *buf,int size)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  uint uVar5;
  char cVar6;
  uchar *puVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int local_64;
  long local_60;
  int local_58;
  
  bs->type = 2;
  iVar2 = BIO_gets(bp,buf,size);
  if (iVar2 < 1) {
    puVar7 = (uchar *)0x0;
  }
  else {
    bVar1 = true;
    local_58 = 0;
    local_64 = 0;
    puVar7 = (uchar *)0x0;
    do {
      local_60 = (long)iVar2;
      pcVar8 = buf + local_60 + -1;
      cVar6 = *pcVar8;
      if (cVar6 == '\n') {
        *pcVar8 = '\0';
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) break;
        pcVar8 = buf + local_60 + -2;
        cVar6 = *pcVar8;
        local_60 = local_60 + -1;
      }
      if (cVar6 == '\r') {
        *pcVar8 = '\0';
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) break;
        local_60 = (long)iVar2;
        cVar6 = buf[local_60 + -1];
      }
      iVar11 = 0;
      pcVar8 = buf;
      do {
        iVar3 = ossl_ctype_check((int)*pcVar8,0x10);
        if (iVar3 == 0) goto LAB_005a7b92;
        iVar11 = iVar11 + 1;
        pcVar8 = pcVar8 + 1;
      } while (iVar11 < iVar2);
      pcVar8 = buf + local_60;
      iVar11 = iVar2;
LAB_005a7b92:
      *pcVar8 = '\0';
      if (iVar11 < 2) break;
      pcVar8 = buf;
      if (((bVar1) && (*buf == '0')) && (buf[1] == '0')) {
        pcVar8 = buf + 2;
        iVar11 = iVar11 + -2;
      }
      uVar5 = iVar11 - (uint)(cVar6 == '\\');
      if ((uVar5 & 1) != 0) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/f_int.c",0x67,"a2i_ASN1_INTEGER");
        ERR_set_error(0xd,0x91,0);
        CRYPTO_free(puVar7);
        return 0;
      }
      iVar2 = (int)uVar5 >> 1;
      iVar11 = local_64 + iVar2;
      puVar4 = puVar7;
      if (local_58 < iVar11) {
        puVar4 = (uchar *)CRYPTO_clear_realloc
                                    (puVar7,(long)local_58,(long)(iVar11 + iVar2),
                                     "../crypto/asn1/f_int.c",0x6d);
        local_58 = iVar11 + iVar2;
        if (puVar4 == (uchar *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/asn1/f_int.c",0x6f,"a2i_ASN1_INTEGER");
          ERR_set_error(0xd,0xc0100,0);
          CRYPTO_free(puVar7);
          return 0;
        }
      }
      puVar7 = puVar4;
      if (iVar2 != 0) {
        pbVar10 = puVar4 + local_64;
        do {
          iVar3 = OPENSSL_hexchar2int(*pcVar8);
          if (iVar3 < 0) {
LAB_005a7c47:
            ERR_new();
            ERR_set_debug("../crypto/asn1/f_int.c",0x7a,"a2i_ASN1_INTEGER");
            ERR_set_error(0xd,0x8d,0);
            goto LAB_005a7c7d;
          }
          *pbVar10 = *pbVar10 << 4 | (byte)iVar3;
          iVar3 = OPENSSL_hexchar2int(pcVar8[1]);
          if (iVar3 < 0) goto LAB_005a7c47;
          pbVar9 = pbVar10 + 1;
          pcVar8 = pcVar8 + 2;
          *pbVar10 = *pbVar10 << 4 | (byte)iVar3;
          pbVar10 = pbVar9;
        } while (pbVar9 != puVar4 + (long)local_64 + 1 + (ulong)(iVar2 - 1));
      }
      if (cVar6 != '\\') {
        bs->data = puVar4;
        bs->length = iVar11;
        return 1;
      }
      iVar2 = BIO_gets(bp,buf,size);
      bVar1 = false;
      local_64 = iVar11;
    } while (0 < iVar2);
  }
LAB_005a7c7d:
  ERR_new();
  ERR_set_debug("../crypto/asn1/f_int.c",0x8b,"a2i_ASN1_INTEGER");
  ERR_set_error(0xd,0x96,0);
  CRYPTO_free(puVar7);
  return 0;
}

