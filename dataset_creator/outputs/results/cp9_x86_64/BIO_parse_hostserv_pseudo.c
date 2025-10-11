
undefined8 BIO_parse_hostserv(char *param_1,long *param_2,long *param_3,int param_4)

{
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  long lVar4;
  size_t sVar5;
  
  if (*param_1 == '[') {
    pcVar1 = strchr(param_1,0x5d);
    if (pcVar1 == (char *)0x0) goto LAB_005ac9b9;
    pcVar2 = param_1 + 1;
    sVar5 = (long)pcVar1 - (long)pcVar2;
    if (pcVar1[1] == '\0') goto LAB_005aca90;
    if (pcVar1[1] != ':') goto LAB_005ac9b9;
    sVar3 = strlen(pcVar1 + 2);
    param_1 = pcVar1 + 2;
LAB_005ac9a3:
    pcVar1 = strchr(param_1,0x3a);
    if (pcVar1 != (char *)0x0) {
LAB_005ac9b9:
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_addr.c",0x230,"BIO_parse_hostserv");
      ERR_set_error(0x20,0x82,0);
      return 0;
    }
    if (param_2 != (long *)0x0) {
LAB_005aca9d:
      if ((sVar5 == 0) || ((sVar5 == 1 && (*pcVar2 == '*')))) {
        *param_2 = 0;
      }
      else {
        lVar4 = CRYPTO_strndup(pcVar2,sVar5,"../crypto/bio/bio_addr.c",0x21b);
        *param_2 = lVar4;
        if (lVar4 == 0) goto LAB_005acba0;
      }
    }
  }
  else {
    pcVar1 = rindex(param_1,0x3a);
    pcVar2 = strchr(param_1,0x3a);
    if (pcVar1 != pcVar2) {
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_addr.c",0x22d,"BIO_parse_hostserv");
      ERR_set_error(0x20,0x81,0);
      return 0;
    }
    pcVar2 = param_1;
    if (pcVar1 != (char *)0x0) {
      sVar5 = (long)pcVar1 - (long)param_1;
      sVar3 = strlen(pcVar1 + 1);
      param_1 = pcVar1 + 1;
      goto LAB_005ac9a3;
    }
    sVar3 = strlen(param_1);
    sVar5 = sVar3;
    if (param_4 == 0) {
LAB_005aca90:
      if (param_2 == (long *)0x0) {
        return 1;
      }
      sVar3 = 0;
      param_1 = (char *)0x0;
      goto LAB_005aca9d;
    }
  }
  if ((param_1 == (char *)0x0) || (param_3 == (long *)0x0)) {
    return 1;
  }
  if ((sVar3 == 0) || ((sVar3 == 1 && (*param_1 == '*')))) {
    *param_3 = 0;
    return 1;
  }
  lVar4 = CRYPTO_strndup(param_1,sVar3,"../crypto/bio/bio_addr.c",0x225);
  *param_3 = lVar4;
  if (lVar4 != 0) {
    return 1;
  }
LAB_005acba0:
  ERR_new();
  ERR_set_debug("../crypto/bio/bio_addr.c",0x233,"BIO_parse_hostserv");
  ERR_set_error(0x20,0xc0100,0);
  return 0;
}

