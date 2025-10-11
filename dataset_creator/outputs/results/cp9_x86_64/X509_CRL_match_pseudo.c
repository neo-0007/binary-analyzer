
int X509_CRL_match(X509_CRL *a,X509_CRL *b)

{
  int iVar1;
  uint uVar2;
  
  if ((((ulong)a[1].sig_alg & 0x10000000000000) == 0) &&
     (((ulong)b[1].sig_alg & 0x10000000000000) == 0)) {
    iVar1 = bcmp(&a[1].base_crl_number,&b[1].base_crl_number,0x14);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (uint)(0 < iVar1);
    }
    return uVar2;
  }
  return -2;
}

