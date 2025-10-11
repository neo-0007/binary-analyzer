
int RSA_generate_key_ex(RSA *rsa,int bits,BIGNUM *e,BN_GENCB *cb)

{
  int iVar1;
  
  if (*(code **)(rsa->engine + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00556aa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(rsa->engine + 0x68))();
    return iVar1;
  }
  iVar1 = RSA_generate_multi_prime_key(rsa,bits,2,e,cb);
  return iVar1;
}

