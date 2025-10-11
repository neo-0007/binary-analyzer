
void BIO_copy_next_retry(BIO *b)

{
  int flags;
  
  flags = BIO_test_flags(*(BIO **)&b->references,0xf);
  BIO_set_flags(b,flags);
  *(undefined4 *)((long)&b->ptr + 4) = *(undefined4 *)(*(long *)&b->references + 0x34);
  return;
}

