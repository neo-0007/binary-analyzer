
int i2d_x509_aux_internal(X509 *param_1,uchar **param_2)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  
  puVar3 = (uchar *)0x0;
  if (param_2 != (uchar **)0x0) {
    puVar3 = *param_2;
  }
  iVar1 = i2d_X509(param_1,param_2);
  if ((0 < iVar1) && (param_1 != (X509 *)0x0)) {
    iVar2 = i2d_X509_CERT_AUX((X509_CERT_AUX *)param_1[1].altname,param_2);
    iVar1 = iVar1 + iVar2;
    if ((iVar2 < 0) && (iVar1 = iVar2, puVar3 != (uchar *)0x0)) {
      *param_2 = puVar3;
    }
  }
  return iVar1;
}

