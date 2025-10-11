
int RSA_verify(int type,uchar *m,uint m_length,uchar *sigbuf,uint siglen,RSA *rsa)

{
  int iVar1;
  
  if (*(code **)(rsa->engine + 0x60) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00434041. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(rsa->engine + 0x60))();
    return iVar1;
  }
  iVar1 = ossl_rsa_verify();
  return iVar1;
}

