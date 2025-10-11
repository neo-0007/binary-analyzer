
char * OSSL_HTTP_adapt_proxy(char *param_1,char *param_2,char *param_3,int param_4)

{
  size_t sVar1;
  char *pcVar2;
  
  if (param_1 == (char *)0x0) {
    if (param_4 == 0) {
      param_1 = getenv("http_proxy");
      if (param_1 != (char *)0x0) goto LAB_005f9700;
      pcVar2 = "HTTPS_PROXY";
    }
    else {
      param_1 = getenv("https_proxy");
      if (param_1 != (char *)0x0) goto LAB_005f9700;
      pcVar2 = "HTTP_PROXY";
    }
    param_1 = getenv(pcVar2);
    if (param_1 == (char *)0x0) {
      return (char *)0x0;
    }
  }
LAB_005f9700:
  if ((*param_1 == '\0') || (param_3 == (char *)0x0)) {
    return (char *)0x0;
  }
  sVar1 = strlen(param_3);
  if ((param_2 != (char *)0x0) ||
     ((param_2 = getenv("no_proxy"), param_2 != (char *)0x0 ||
      (param_2 = getenv("NO_PROXY"), param_2 != (char *)0x0)))) {
    for (pcVar2 = strstr(param_2,param_3); pcVar2 != (char *)0x0;
        pcVar2 = strstr(pcVar2 + 1,param_3)) {
      if (((pcVar2 == param_2) || (pcVar2[-1] == ' ')) || (pcVar2[-1] == ',')) {
        if ((pcVar2[sVar1] & 0xdfU) == 0) {
          return (char *)0x0;
        }
        if (pcVar2[sVar1] == 0x2c) {
          return (char *)0x0;
        }
      }
    }
  }
  return param_1;
}

