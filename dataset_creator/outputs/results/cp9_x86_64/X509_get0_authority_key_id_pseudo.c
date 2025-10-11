
long * X509_get0_authority_key_id(X509 *param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = X509_check_purpose(param_1,-1,0);
  plVar2 = (long *)0x0;
  if ((iVar1 == 1) && (plVar2 = (long *)param_1[1].ex_pathlen, plVar2 != (long *)0x0)) {
    plVar2 = (long *)*plVar2;
  }
  return plVar2;
}

