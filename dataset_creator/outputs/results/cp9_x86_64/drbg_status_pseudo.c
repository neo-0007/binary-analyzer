
bool drbg_status(void)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = RAND_get0_primary(0);
  bVar3 = false;
  if (lVar2 != 0) {
    iVar1 = EVP_RAND_get_state();
    bVar3 = iVar1 == 1;
  }
  return bVar3;
}

