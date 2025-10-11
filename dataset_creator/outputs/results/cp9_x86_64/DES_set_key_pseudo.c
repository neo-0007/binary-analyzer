
int DES_set_key(const_DES_cblock *key,DES_key_schedule *schedule)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DES_check_key_parity(key);
  iVar2 = DES_is_weak_key(key);
  iVar1 = -(uint)(iVar1 == 0);
  if (iVar2 != 0) {
    iVar1 = -2;
  }
  DES_set_key_unchecked(key,schedule);
  return iVar1;
}

