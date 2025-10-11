
undefined8 X509_get_proxy_pathlen(X509 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = X509_check_purpose(param_1,-1,0);
  if ((iVar1 == 1) && (((ulong)param_1[1].name & 0x400) != 0)) {
    uVar2._0_4_ = param_1[1].valid;
    uVar2._4_4_ = param_1[1].references;
    return uVar2;
  }
  return 0xffffffffffffffff;
}

