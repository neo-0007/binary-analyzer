
int RSA_blinding_on(RSA *rsa,BN_CTX *ctx)

{
  BN_BLINDING *pBVar1;
  
  if (rsa[1].engine != (ENGINE *)0x0) {
    RSA_blinding_off(rsa);
  }
  pBVar1 = RSA_setup_blinding(rsa,ctx);
  rsa[1].engine = (ENGINE *)pBVar1;
  if (pBVar1 != (BN_BLINDING *)0x0) {
    *(uint *)((long)&rsa->mt_blinding + 4) = *(uint *)((long)&rsa->mt_blinding + 4) & 0xffffff7f | 8
    ;
    return 1;
  }
  return 0;
}

