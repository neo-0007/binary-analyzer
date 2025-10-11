
undefined8 X509v3_addr_inherits(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_1);
    if (iVar1 <= iVar3) {
      return 0;
    }
    lVar2 = OPENSSL_sk_value(param_1,iVar3);
    if (**(int **)(lVar2 + 8) == 0) break;
    iVar3 = iVar3 + 1;
  }
  return 1;
}

