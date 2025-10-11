
int a2i_ASN1_STRING(BIO *bp,ASN1_STRING *bs,char *buf,int size)

{
  int iVar1;
  int iVar2;
  uchar *ptr;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uchar *ptr_00;
  byte *pbVar6;
  byte *pbVar7;
  char cVar8;
  long local_60;
  int local_58;
  int local_48;
  
  iVar1 = BIO_gets(bp,buf,size);
  if (iVar1 < 1) {
    iVar3 = 0;
    ptr = (uchar *)0x0;
LAB_0061f086:
    bs->length = iVar3;
    bs->data = ptr;
    iVar1 = 1;
  }
  else {
    local_48 = 0;
    local_58 = 0;
    ptr_00 = (uchar *)0x0;
    do {
      local_60 = (long)iVar1;
      pcVar5 = buf + local_60 + -1;
      cVar8 = *pcVar5;
      if (cVar8 == '\n') {
        *pcVar5 = '\0';
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) break;
        pcVar5 = buf + local_60 + -2;
        cVar8 = *pcVar5;
        local_60 = local_60 + -1;
      }
      if (cVar8 == '\r') {
        *pcVar5 = '\0';
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) break;
        local_60 = (long)iVar1;
        cVar8 = buf[local_60 + -1];
      }
      iVar3 = iVar1 + -1;
      if (iVar3 == 0) {
        buf[1] = '\0';
        break;
      }
      pcVar5 = buf + iVar3;
      do {
        iVar2 = ossl_ctype_check((int)*pcVar5,0x10);
        if (iVar2 == 0) {
          *pcVar5 = '\0';
          iVar1 = iVar3;
          if (iVar3 == 1) goto LAB_0061efec;
          goto LAB_0061ee34;
        }
        pcVar5 = pcVar5 + -1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      buf[local_60] = '\0';
LAB_0061ee34:
      uVar4 = iVar1 - (uint)(cVar8 == '\\');
      if ((uVar4 & 1) != 0) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/f_string.c",0x5e,"a2i_ASN1_STRING");
        ERR_set_error(0xd,0x91,0);
        CRYPTO_free(ptr_00);
        return 0;
      }
      iVar1 = (int)uVar4 >> 1;
      iVar3 = local_58 + iVar1;
      ptr = ptr_00;
      if (local_48 < iVar3) {
        ptr = (uchar *)CRYPTO_realloc(ptr_00,local_58 + iVar1 * 2,"../crypto/asn1/f_string.c",100);
        if (ptr == (uchar *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/asn1/f_string.c",0x66,"a2i_ASN1_STRING");
          ERR_set_error(0xd,0xc0100,0);
          CRYPTO_free(ptr_00);
          return 0;
        }
        local_48 = iVar3 + iVar1;
      }
      if (iVar1 != 0) {
        pcVar5 = buf;
        pbVar7 = ptr + local_58;
        do {
          iVar2 = OPENSSL_hexchar2int(*pcVar5);
          if (iVar2 < 0) {
LAB_0061eec8:
            ERR_new();
            ERR_set_debug("../crypto/asn1/f_string.c",0x71,"a2i_ASN1_STRING");
            ERR_set_error(0xd,0x8d,0);
            CRYPTO_free(ptr);
            return 0;
          }
          *pbVar7 = *pbVar7 << 4 | (byte)iVar2;
          iVar2 = OPENSSL_hexchar2int(pcVar5[1]);
          if (iVar2 < 0) goto LAB_0061eec8;
          pbVar6 = pbVar7 + 1;
          pcVar5 = pcVar5 + 2;
          *pbVar7 = *pbVar7 << 4 | (byte)iVar2;
          pbVar7 = pbVar6;
        } while (ptr + (long)local_58 + 1 + (ulong)(iVar1 - 1) != pbVar6);
      }
      if (cVar8 != '\\') goto LAB_0061f086;
      iVar1 = BIO_gets(bp,buf,size);
      ptr_00 = ptr;
      local_58 = iVar3;
    } while (0 < iVar1);
LAB_0061efec:
    ERR_new();
    ERR_set_debug("../crypto/asn1/f_string.c",0x84,"a2i_ASN1_STRING");
    ERR_set_error(0xd,0x96,0);
    CRYPTO_free(ptr_00);
    iVar1 = 0;
  }
  return iVar1;
}

