
int X509_NAME_print_ex(BIO *out,X509_NAME *nm,int indent,ulong flags)

{
  int iVar1;
  
  if (flags != 0) {
    iVar1 = do_name_ex(send_bio_chars,out,nm,indent,flags);
    return iVar1;
  }
  iVar1 = X509_NAME_print(out,nm,indent);
  return iVar1;
}

