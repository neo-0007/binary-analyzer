
ASN1_OCTET_STRING * SXNET_get_id_INTEGER(SXNET *sx,ASN1_INTEGER *zone)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(sx->ids);
    if (iVar1 <= iVar3) {
      return (ASN1_OCTET_STRING *)0x0;
    }
    puVar2 = (undefined8 *)OPENSSL_sk_value(sx->ids,iVar3);
    iVar1 = ASN1_INTEGER_cmp((ASN1_INTEGER *)*puVar2,zone);
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  return (ASN1_OCTET_STRING *)puVar2[1];
}

