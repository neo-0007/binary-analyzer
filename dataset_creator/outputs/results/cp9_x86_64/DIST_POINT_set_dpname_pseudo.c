
int DIST_POINT_set_dpname(DIST_POINT_NAME *dpn,X509_NAME *iname)

{
  GENERAL_NAMES *pGVar1;
  int iVar2;
  int iVar3;
  X509_NAME *pXVar4;
  X509_NAME_ENTRY *ne;
  
  if (dpn == (DIST_POINT_NAME *)0x0) {
    return 1;
  }
  if (dpn->type == 1) {
    pGVar1 = (dpn->name).fullname;
    X509_NAME_free(dpn->dpname);
    pXVar4 = X509_NAME_dup(iname);
    dpn->dpname = pXVar4;
    if (pXVar4 == (X509_NAME *)0x0) {
      return 0;
    }
    for (iVar3 = 0; iVar2 = OPENSSL_sk_num(pGVar1), iVar3 < iVar2; iVar3 = iVar3 + 1) {
      ne = (X509_NAME_ENTRY *)OPENSSL_sk_value(pGVar1,iVar3);
      iVar2 = X509_NAME_add_entry(dpn->dpname,ne,-1,(uint)(iVar3 == 0));
      if (iVar2 == 0) goto LAB_0060b1c0;
    }
    iVar3 = i2d_X509_NAME(dpn->dpname,(uchar **)0x0);
    if (iVar3 < 0) {
LAB_0060b1c0:
      X509_NAME_free(dpn->dpname);
      dpn->dpname = (X509_NAME *)0x0;
      return 0;
    }
  }
  return 1;
}

