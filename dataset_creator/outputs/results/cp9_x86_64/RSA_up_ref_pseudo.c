
int RSA_up_ref(RSA *r)

{
  BN_BLINDING **ppBVar1;
  int iVar2;
  
  LOCK();
  ppBVar1 = &r->mt_blinding;
  iVar2 = *(int *)ppBVar1;
  *(int *)ppBVar1 = *(int *)ppBVar1 + 1;
  UNLOCK();
  return (int)(0 < iVar2);
}

