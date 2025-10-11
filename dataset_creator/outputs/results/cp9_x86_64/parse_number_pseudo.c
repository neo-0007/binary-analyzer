
int parse_number(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  
  pcVar4 = (char *)*param_1;
  iVar3 = ossl_isdigit((int)*pcVar4);
  if (iVar3 != 0) {
    lVar5 = 0;
    do {
      cVar2 = *pcVar4;
      pcVar1 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
      lVar5 = (long)(cVar2 + -0x30) + lVar5 * 10;
      iVar3 = ossl_isdigit((int)*pcVar1);
    } while (iVar3 != 0);
    iVar3 = ossl_ctype_check((int)*pcVar4,8);
    if (((iVar3 == 0) && (*pcVar4 != ',')) && (*pcVar4 != '\0')) {
      ERR_new();
      ERR_set_debug("../crypto/property/property_parse.c",0x6a,"parse_number");
      ERR_set_error(0x37,0x69,"HERE-->%s",*param_1);
      iVar3 = 0;
    }
    else {
      while( true ) {
        iVar3 = ossl_ctype_check((int)*pcVar4,8);
        if (iVar3 == 0) break;
        pcVar4 = pcVar4 + 1;
      }
      *param_1 = pcVar4;
      iVar3 = 1;
      *(undefined4 *)(param_2 + 4) = 1;
      *(long *)(param_2 + 0x10) = lVar5;
    }
  }
  return iVar3;
}

