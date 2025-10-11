
int X509_PURPOSE_get_by_sname(char *sname)

{
  int iVar1;
  X509_PURPOSE *pXVar2;
  int idx;
  
  idx = 0;
  while( true ) {
    iVar1 = X509_PURPOSE_get_count();
    if (iVar1 <= idx) {
      return -1;
    }
    pXVar2 = X509_PURPOSE_get0(idx);
    iVar1 = strcmp(pXVar2->sname,sname);
    if (iVar1 == 0) break;
    idx = idx + 1;
  }
  return idx;
}

