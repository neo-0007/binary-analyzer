
undefined8 X509v3_addr_validate_resource_set(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    return 1;
  }
  if ((param_1 != 0) && (iVar1 = OPENSSL_sk_num(), iVar1 != 0)) {
    if ((param_3 == 0) && (iVar1 = X509v3_addr_inherits(param_2), iVar1 != 0)) {
      return 0;
    }
    uVar2 = addr_validate_path_internal(0,param_1,param_2);
    return uVar2;
  }
  return 0;
}

