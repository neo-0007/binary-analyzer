
undefined1 * ossl_ffc_name_to_dh_named_group(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  pcVar4 = "ffdhe2048";
  puVar3 = (undefined8 *)(dh_named_groups + 0x30);
  lVar2 = 0;
  while( true ) {
    iVar1 = OPENSSL_strcasecmp(pcVar4,param_1);
    if (iVar1 == 0) {
      return dh_named_groups + lVar2 * 0x30;
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 0xe) break;
    pcVar4 = (char *)*puVar3;
    puVar3 = puVar3 + 6;
  }
  return (undefined1 *)0x0;
}

