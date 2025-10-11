
int BIO_indent(BIO *b,int indent,int max)

{
  int iVar1;
  
  if (indent < 0) {
    indent = 0;
  }
  if (indent <= max) {
    max = indent;
  }
  do {
    if (max == 0) {
      return 1;
    }
    max = max + -1;
    iVar1 = BIO_puts(b," ");
  } while (iVar1 == 1);
  return 0;
}

