
int ASN1_item_print(BIO *out,ASN1_VALUE *ifld,int indent,ASN1_ITEM *it,ASN1_PCTX *pctx)

{
  int iVar1;
  char *pcVar2;
  ASN1_VALUE *local_10 [2];
  
  if (pctx == (ASN1_PCTX *)0x0) {
    pctx = (ASN1_PCTX *)&default_pctx;
  }
  pcVar2 = (char *)0x0;
  if ((*(ulong *)pctx & 0x100) == 0) {
    pcVar2 = it->sname;
  }
  local_10[0] = ifld;
  iVar1 = asn1_item_print_ctx(out,local_10,indent,it,0,pcVar2,0,pctx);
  return iVar1;
}

