
int X509_CRL_get0_by_cert(X509_CRL *crl,X509_REVOKED **ret,X509 *x)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  X509_NAME *pXVar2;
  undefined8 uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(crl[1].sha1_hash + 0x10) + 0x18);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 0;
  }
  pXVar2 = X509_get_issuer_name(x);
  uVar3 = X509_get0_serialNumber(x);
                    /* WARNING: Could not recover jumptable at 0x00599133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)(crl,ret,uVar3,pXVar2);
  return iVar1;
}

