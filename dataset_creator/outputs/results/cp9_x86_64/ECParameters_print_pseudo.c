
int ECParameters_print(BIO *bp,EC_KEY *key)

{
  int iVar1;
  
  iVar1 = do_EC_KEY_print(bp,key,4,2);
  return iVar1;
}

