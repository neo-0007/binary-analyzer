
ulong check_purpose_timestamp_sign(undefined8 param_1,X509 *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  X509_EXTENSION *ex;
  
  if (param_3 != 0) {
    uVar2 = check_ca(param_2);
    return uVar2;
  }
  uVar2 = 0;
  if ((((((ulong)param_2[1].name & 2) == 0) ||
       ((((ulong)param_2[1].name & 0xffffff3f00000000) == 0 &&
        (((ulong)param_2[1].name & 0xc000000000) != 0)))) && (((ulong)param_2[1].name & 4) != 0)) &&
     (*(int *)&param_2[1].ex_data.sk == 0x40)) {
    iVar1 = X509_get_ext_by_NID(param_2,0x7e,-1);
    uVar2 = 1;
    if (-1 < iVar1) {
      ex = X509_get_ext(param_2,iVar1);
      iVar1 = X509_EXTENSION_get_critical(ex);
      return (ulong)(iVar1 != 0);
    }
  }
  return uVar2;
}

