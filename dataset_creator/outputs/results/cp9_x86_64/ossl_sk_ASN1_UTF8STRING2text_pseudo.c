
char * ossl_sk_ASN1_UTF8STRING2text(undefined8 param_1,char *param_2,ulong param_3)

{
  int iVar1;
  size_t sVar2;
  ASN1_STRING *pAVar3;
  char *__src;
  int iVar4;
  ulong uVar5;
  char *__dest;
  char *__dest_00;
  char *local_50;
  char *local_48;
  
  if (param_2 == (char *)0x0) {
    sVar2 = 0;
    local_50 = "";
  }
  else {
    sVar2 = strlen(param_2);
    local_50 = param_2;
  }
  uVar5 = 0;
  iVar4 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_1);
    if (iVar1 <= iVar4) break;
    pAVar3 = (ASN1_STRING *)OPENSSL_sk_value(param_1,iVar4);
    if (iVar4 != 0) {
      uVar5 = uVar5 + sVar2;
    }
    iVar1 = ASN1_STRING_length(pAVar3);
    uVar5 = uVar5 + (long)iVar1;
    if ((param_3 != 0) && (param_3 < uVar5)) goto LAB_0049f980;
    iVar4 = iVar4 + 1;
  }
  local_48 = (char *)CRYPTO_malloc((int)uVar5 + 1,"../crypto/asn1/asn1_lib.c",0x1c5);
  if (local_48 == (char *)0x0) {
LAB_0049f980:
    local_48 = (char *)0x0;
  }
  else {
    iVar4 = 0;
    __dest_00 = local_48;
    while( true ) {
      iVar1 = OPENSSL_sk_num(param_1);
      if (iVar1 <= iVar4) break;
      pAVar3 = (ASN1_STRING *)OPENSSL_sk_value(param_1,iVar4);
      iVar1 = ASN1_STRING_length(pAVar3);
      __dest = __dest_00;
      if ((0 < iVar4) && (sVar2 != 0)) {
        __dest = __dest_00 + sVar2;
        strncpy(__dest_00,local_50,sVar2 + 1);
      }
      iVar4 = iVar4 + 1;
      __src = (char *)ASN1_STRING_get0_data(pAVar3);
      __dest_00 = __dest + iVar1;
      strncpy(__dest,__src,(long)iVar1);
    }
    *__dest_00 = '\0';
  }
  return local_48;
}

