
undefined4 OSSL_trace_get_category_num(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  pcVar4 = "ALL";
  puVar3 = (undefined8 *)(trace_categories + 0x10);
  lVar2 = 0;
  while( true ) {
    iVar1 = OPENSSL_strcasecmp(param_1,pcVar4);
    if (iVar1 == 0) {
      return *(undefined4 *)(trace_categories + lVar2 * 0x10 + 8);
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 0x12) break;
    pcVar4 = (char *)*puVar3;
    puVar3 = puVar3 + 2;
  }
  return 0xffffffff;
}

