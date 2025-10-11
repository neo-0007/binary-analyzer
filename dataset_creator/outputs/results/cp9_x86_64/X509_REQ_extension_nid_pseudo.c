
int X509_REQ_extension_nid(int nid)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)ext_nids;
  piVar2 = (int *)ext_nids;
  if (iVar1 != 0) {
    while (nid != iVar1) {
      iVar1 = piVar2[1];
      piVar2 = piVar2 + 1;
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = 1;
  }
  return iVar1;
}

