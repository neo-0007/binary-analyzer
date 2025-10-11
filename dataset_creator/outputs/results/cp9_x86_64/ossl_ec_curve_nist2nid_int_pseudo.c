
undefined4 ossl_ec_curve_nist2nid_int(char *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  char *__s1;
  
  __s1 = "B-163";
  puVar3 = (undefined8 *)(nist_curves + 0x10);
  lVar2 = 0;
  while( true ) {
    iVar1 = strcmp(__s1,param_1);
    if (iVar1 == 0) {
      return *(undefined4 *)(nist_curves + lVar2 * 0x10 + 8);
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 0xf) break;
    __s1 = (char *)*puVar3;
    puVar3 = puVar3 + 2;
  }
  return 0;
}

