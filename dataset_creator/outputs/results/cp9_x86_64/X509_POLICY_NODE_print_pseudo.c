
void X509_POLICY_NODE_print(BIO *out,X509_POLICY_NODE *node,int indent)

{
  byte *pbVar1;
  undefined4 in_register_00000014;
  char *pcVar2;
  uint uVar3;
  
  pbVar1 = *(byte **)node;
  BIO_printf(out,"%*sPolicy: ",CONCAT44(in_register_00000014,indent),&DAT_008343a2);
  i2a_ASN1_OBJECT(out,*(ASN1_OBJECT **)(pbVar1 + 8));
  BIO_puts(out,"\n");
  pcVar2 = "Critical";
  if ((*pbVar1 & 0x10) == 0) {
    pcVar2 = "Non Critical";
  }
  uVar3 = indent + 2;
  BIO_printf(out,"%*s%s\n",(ulong)uVar3,&DAT_008343a2,pcVar2);
  if (*(long *)(pbVar1 + 0x10) != 0) {
    print_qualifiers(out,*(long *)(pbVar1 + 0x10),uVar3);
    BIO_puts(out,"\n");
    return;
  }
  BIO_printf(out,"%*sNo Qualifiers\n",(ulong)uVar3,&DAT_008343a2);
  return;
}

