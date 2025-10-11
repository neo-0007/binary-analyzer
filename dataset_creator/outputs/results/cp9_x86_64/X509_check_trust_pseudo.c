
int X509_check_trust(X509 *x,int id,int flags)

{
  int iVar1;
  X509_TRUST *pXVar2;
  
  if (id == 0) {
    iVar1 = obj_trust(0x38e,x,flags | 8);
    return iVar1;
  }
  iVar1 = X509_TRUST_get_by_id(id);
  if (-1 < iVar1) {
    pXVar2 = X509_TRUST_get0(iVar1);
                    /* WARNING: Could not recover jumptable at 0x00611369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*pXVar2->check_trust)(pXVar2,x,flags);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0061137d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)default_trust)(id,x,flags);
  return iVar1;
}

