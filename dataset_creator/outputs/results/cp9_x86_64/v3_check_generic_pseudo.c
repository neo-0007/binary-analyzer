
undefined8 v3_check_generic(undefined8 *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  pcVar3 = (char *)*param_1;
  sVar2 = strlen(pcVar3);
  if (sVar2 < 4) {
    return 0;
  }
  iVar1 = strncmp(pcVar3,"DER:",4);
  if (iVar1 == 0) {
    pcVar3 = pcVar3 + 4;
    uVar4 = 1;
  }
  else {
    if (sVar2 == 4) {
      return 0;
    }
    iVar1 = strncmp(pcVar3,"ASN1:",5);
    if (iVar1 != 0) {
      return 0;
    }
    pcVar3 = pcVar3 + 5;
    uVar4 = 2;
  }
  while (iVar1 = ossl_ctype_check((int)*pcVar3,8), iVar1 != 0) {
    pcVar3 = pcVar3 + 1;
  }
  *param_1 = pcVar3;
  return uVar4;
}

