
int DSA_up_ref(DSA *r)

{
  DSA *pDVar1;
  int iVar2;
  
  LOCK();
  pDVar1 = r + 1;
  iVar2 = pDVar1->pad;
  pDVar1->pad = pDVar1->pad + 1;
  UNLOCK();
  return (int)(0 < iVar2);
}

