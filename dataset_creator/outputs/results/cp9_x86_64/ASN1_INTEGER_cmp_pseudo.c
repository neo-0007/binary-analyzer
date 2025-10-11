
int ASN1_INTEGER_cmp(ASN1_INTEGER *x,ASN1_INTEGER *y)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = x->type & 0x100;
  uVar3 = y->type & 0x100;
  if (uVar3 != uVar1) {
    return (-(uint)(uVar1 == 0) & 2) - 1;
  }
  iVar2 = ASN1_STRING_cmp(x,y);
  if (uVar3 != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}

