
char * OPENSSL_uni2utf8(uchar *param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uchar *puVar7;
  int iVar8;
  
  if ((param_2 & 1) != 0) {
    return (char *)0x0;
  }
  if (0 < (int)param_2) {
    if (param_2 != 1) {
      iVar8 = 0;
      iVar6 = 0;
      puVar7 = param_1;
      uVar4 = param_2;
      do {
        iVar1 = bmp_to_utf8_part_0(0,puVar7,uVar4);
        if (iVar1 < 0) break;
        iVar5 = iVar6 + 4;
        iVar6 = iVar6 + 2;
        if (iVar1 == 4) {
          iVar6 = iVar5;
        }
        iVar8 = iVar8 + iVar1;
        if ((int)param_2 <= iVar6) goto LAB_005fbbcf;
        uVar4 = param_2 - iVar6;
        puVar7 = param_1 + iVar6;
      } while (uVar4 != 1);
    }
    pcVar2 = OPENSSL_uni2asc(param_1,param_2);
    return pcVar2;
  }
  if (param_2 == 0) {
    iVar8 = 1;
  }
  else {
    iVar8 = 0;
LAB_005fbbcf:
    if ((param_1[(long)(int)param_2 + -2] != '\0') || (param_1[(long)(int)param_2 + -1] != '\0')) {
      iVar8 = iVar8 + 1;
    }
  }
  pcVar2 = (char *)CRYPTO_malloc(iVar8,"../crypto/pkcs12/p12_utl.c",0xcf);
  if (pcVar2 == (char *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/pkcs12/p12_utl.c",0xd0,"OPENSSL_uni2utf8");
    ERR_set_error(0x23,0xc0100,0);
    return (char *)0x0;
  }
  iVar8 = 0;
  iVar6 = 0;
  if ((int)param_2 < 1) {
    pcVar3 = pcVar2;
    if (param_2 == 0) goto LAB_005fbc86;
  }
  else {
    do {
      while( true ) {
        if (param_2 - iVar6 != 1) break;
        iVar1 = -1;
LAB_005fbc40:
        iVar6 = iVar6 + 2;
        iVar8 = iVar8 + iVar1;
        if ((int)param_2 <= iVar6) goto LAB_005fbc74;
      }
      iVar1 = bmp_to_utf8_part_0(pcVar2 + iVar8,param_1 + iVar6);
      if (iVar1 != 4) goto LAB_005fbc40;
      iVar6 = iVar6 + 4;
      iVar8 = iVar8 + 4;
    } while (iVar6 < (int)param_2);
  }
LAB_005fbc74:
  if ((param_1[(long)(int)param_2 + -2] == '\0') && (param_1[(long)(int)param_2 + -1] == '\0')) {
    return pcVar2;
  }
  pcVar3 = pcVar2 + iVar8;
LAB_005fbc86:
  *pcVar3 = '\0';
  return pcVar2;
}

