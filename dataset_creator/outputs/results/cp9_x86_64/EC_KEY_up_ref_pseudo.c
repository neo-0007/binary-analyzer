
int EC_KEY_up_ref(EC_KEY *key)

{
  EC_KEY *pEVar1;
  int iVar2;
  
  LOCK();
  pEVar1 = key + 0x38;
  iVar2 = *(int *)pEVar1;
  *(int *)pEVar1 = *(int *)pEVar1 + 1;
  UNLOCK();
  return (int)(0 < iVar2);
}

