
int RSA_flags(RSA *r)

{
  int iVar1;
  
  iVar1 = 0;
  if (r != (RSA *)0x0) {
    iVar1 = *(int *)(r->engine + 0x48);
  }
  return iVar1;
}

