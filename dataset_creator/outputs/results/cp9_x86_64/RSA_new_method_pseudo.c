
RSA * RSA_new_method(ENGINE *engine)

{
  RSA *pRVar1;
  
  pRVar1 = (RSA *)rsa_new_intern(engine,0);
  return pRVar1;
}

