
DSA * DSA_new_method(ENGINE *engine)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)dsa_new_intern(engine,0);
  return pDVar1;
}

