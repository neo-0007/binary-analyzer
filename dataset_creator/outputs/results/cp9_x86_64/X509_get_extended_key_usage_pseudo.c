
undefined4 X509_get_extended_key_usage(X509 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = X509_check_purpose(param_1,-1,0);
  uVar2 = 0;
  if ((iVar1 == 1) && (uVar2 = 0xffffffff, ((ulong)param_1[1].name & 4) != 0)) {
    return *(undefined4 *)&param_1[1].ex_data.sk;
  }
  return uVar2;
}

