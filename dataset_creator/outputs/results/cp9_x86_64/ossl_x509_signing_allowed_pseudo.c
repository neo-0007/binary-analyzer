
long ossl_x509_signing_allowed(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_2 + 0xe9) & 4) != 0) {
    lVar1 = 0;
    if ((*(ulong *)(param_1 + 0xe8) & 0x8000000002) == 2) {
      lVar1 = 0x27;
    }
    return lVar1;
  }
  return (ulong)((*(ulong *)(param_1 + 0xe8) & 0x400000002) == 2) << 5;
}

