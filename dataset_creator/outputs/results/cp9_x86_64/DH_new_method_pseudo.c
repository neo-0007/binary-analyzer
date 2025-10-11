
DH * DH_new_method(ENGINE *engine)

{
  DH *pDVar1;
  
  pDVar1 = (DH *)dh_new_intern(engine,0);
  return pDVar1;
}

