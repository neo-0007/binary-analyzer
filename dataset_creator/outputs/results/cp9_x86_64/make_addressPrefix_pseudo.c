
undefined8 make_addressPrefix(undefined8 *param_1,void *param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  IPAddressOrRange *a;
  ASN1_BIT_STRING *pAVar3;
  int iVar4;
  
  iVar4 = param_3 + 0xe;
  if (-1 < param_3 + 7) {
    iVar4 = param_3 + 7;
  }
  a = IPAddressOrRange_new();
  if (a == (IPAddressOrRange *)0x0) {
    return 0;
  }
  pAVar3 = (a->u).addressPrefix;
  a->type = 0;
  if (pAVar3 == (ASN1_BIT_STRING *)0x0) {
    pAVar3 = ASN1_BIT_STRING_new();
    (a->u).addressPrefix = pAVar3;
    if (pAVar3 == (ASN1_BIT_STRING *)0x0) goto LAB_00604c75;
  }
  iVar2 = ASN1_BIT_STRING_set(pAVar3,param_2,iVar4 >> 3);
  if (iVar2 != 0) {
    pAVar3 = (a->u).addressPrefix;
    pAVar3->flags = pAVar3->flags & 0xfffffffffffffff8U | 8;
    if (0 < param_3 % 8) {
      pAVar3->data[(long)(iVar4 >> 3) + -1] =
           pAVar3->data[(long)(iVar4 >> 3) + -1] & ~(byte)(0xff >> ((byte)param_3 & 7));
      plVar1 = &((a->u).addressPrefix)->flags;
      *plVar1 = *plVar1 | (long)(8 - param_3 % 8);
    }
    *param_1 = a;
    return 1;
  }
LAB_00604c75:
  IPAddressOrRange_free(a);
  return 0;
}

