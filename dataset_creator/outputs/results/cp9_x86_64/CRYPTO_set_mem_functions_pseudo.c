
int CRYPTO_set_mem_functions(m *m,r *r,f *f)

{
  int iVar1;
  
  iVar1 = allow_customize;
  if (allow_customize != 0) {
    if (m != (m *)0x0) {
      malloc_impl = m;
    }
    if (r != (r *)0x0) {
      realloc_impl = r;
    }
    iVar1 = 1;
    if (f != (f *)0x0) {
      free_impl = f;
    }
  }
  return iVar1;
}

