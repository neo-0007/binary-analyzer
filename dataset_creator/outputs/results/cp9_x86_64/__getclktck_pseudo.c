
int __getclktck(void)

{
  int iVar1;
  
  iVar1 = _dl_clktck;
  if (_dl_clktck == 0) {
    iVar1 = 100;
  }
  return iVar1;
}

