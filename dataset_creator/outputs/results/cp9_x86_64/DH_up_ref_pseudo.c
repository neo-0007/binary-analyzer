
int DH_up_ref(DH *dh)

{
  DH *pDVar1;
  int iVar2;
  
  LOCK();
  pDVar1 = dh + 1;
  iVar2 = pDVar1->pad;
  pDVar1->pad = pDVar1->pad + 1;
  UNLOCK();
  return (int)(0 < iVar2);
}

