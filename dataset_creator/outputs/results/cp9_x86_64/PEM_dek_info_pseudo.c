
void PEM_dek_info(char *buf,char *type,int len,char *str)

{
  int iVar1;
  size_t sVar2;
  byte *pbVar3;
  char *buf_00;
  int iVar4;
  
  sVar2 = strlen(buf);
  iVar4 = 0x400 - (int)sVar2;
  iVar1 = BIO_snprintf(buf + sVar2,(long)iVar4,"DEK-Info: %s,",type);
  if (0 < iVar1) {
    iVar4 = iVar4 - iVar1;
    buf_00 = buf + sVar2 + iVar1;
    if (0 < len) {
      pbVar3 = (byte *)(str + len);
      do {
        iVar1 = BIO_snprintf(buf_00,(long)iVar4,"%02X",(ulong)(byte)*str);
        if (iVar1 < 1) {
          return;
        }
        iVar4 = iVar4 - iVar1;
        str = (char *)((byte *)str + 1);
        buf_00 = buf_00 + iVar1;
      } while ((byte *)str != pbVar3);
    }
    if (1 < iVar4) {
      buf_00[0] = '\n';
      buf_00[1] = '\0';
      return;
    }
  }
  return;
}

