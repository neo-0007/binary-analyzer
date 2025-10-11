
void CRYPTO_get_mem_functions(m **m,r **r,f **f)

{
  if (m != (m **)0x0) {
    *m = (m *)malloc_impl;
  }
  if (r != (r **)0x0) {
    *r = (r *)realloc_impl;
  }
  if (f != (f **)0x0) {
    *f = (f *)free_impl;
  }
  return;
}

