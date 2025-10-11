
int EC_KEY_print(BIO *bp,EC_KEY *key,int off)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  pBVar2 = EC_KEY_get0_private_key(key);
  iVar1 = do_EC_KEY_print(bp,key,off,pBVar2 == (BIGNUM *)0x0);
  return iVar1;
}

