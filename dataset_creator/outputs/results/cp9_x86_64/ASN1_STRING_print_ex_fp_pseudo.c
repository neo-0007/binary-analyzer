
int ASN1_STRING_print_ex_fp(FILE *fp,ASN1_STRING *str,ulong flags)

{
  int iVar1;
  
  iVar1 = do_print_ex(send_fp_chars,fp,flags,str);
  return iVar1;
}

