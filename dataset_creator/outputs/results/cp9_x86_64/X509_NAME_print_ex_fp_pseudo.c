
int X509_NAME_print_ex_fp(FILE *fp,X509_NAME *nm,int indent,ulong flags)

{
  int iVar1;
  BIO *bp;
  
  if (flags == 0) {
    bp = BIO_new_fp(fp,0);
    if (bp == (BIO *)0x0) {
      iVar1 = -1;
    }
    else {
      iVar1 = X509_NAME_print(bp,nm,indent);
      BIO_free(bp);
    }
    return iVar1;
  }
  iVar1 = do_name_ex(send_fp_chars,fp,nm,indent,flags);
  return iVar1;
}

