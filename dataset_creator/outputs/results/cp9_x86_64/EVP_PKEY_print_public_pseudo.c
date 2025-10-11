
int EVP_PKEY_print_public(BIO *out,EVP_PKEY *pkey,int indent,ASN1_PCTX *pctx)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(long *)&pkey->references != 0) {
    uVar2 = *(undefined8 *)(*(long *)&pkey->references + 0x38);
  }
  iVar1 = print_pkey_constprop_0(pkey,out,indent,0x86,uVar2,pctx);
  return iVar1;
}

