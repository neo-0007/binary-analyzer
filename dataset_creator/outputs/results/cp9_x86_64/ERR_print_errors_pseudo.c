
void ERR_print_errors(BIO *bp)

{
  ERR_print_errors_cb(print_bio,bp);
  return;
}

