
int X509_CRL_verify(X509_CRL *a,EVP_PKEY *r)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(a[1].sha1_hash + 0x10) + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00599084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    return iVar1;
  }
  return 0;
}

