
int DES_key_sched(const_DES_cblock *key,DES_key_schedule *schedule)

{
  int iVar1;
  
  iVar1 = DES_set_key(key,schedule);
  return iVar1;
}

