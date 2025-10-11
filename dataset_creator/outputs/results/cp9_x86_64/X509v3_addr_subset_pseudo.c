
undefined8 X509v3_addr_subset(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_1 != param_2) {
    if (((param_2 == 0) || (iVar1 = X509v3_addr_inherits(), iVar1 != 0)) ||
       (iVar1 = X509v3_addr_inherits(param_2), iVar1 != 0)) {
      return 0;
    }
    OPENSSL_sk_set_cmp_func(param_2,IPAddressFamily_cmp);
    for (iVar1 = 0; iVar2 = OPENSSL_sk_num(param_1), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      lVar4 = OPENSSL_sk_value(param_1,iVar1);
      uVar3 = OPENSSL_sk_find(param_2,lVar4);
      lVar5 = OPENSSL_sk_value(param_2,uVar3);
      if (lVar5 == 0) {
        return 0;
      }
      X509v3_addr_get_afi(lVar5);
      lVar4 = *(long *)(*(long *)(lVar4 + 8) + 8);
      lVar5 = *(long *)(*(long *)(lVar5 + 8) + 8);
      if ((lVar4 != 0) && (lVar4 != lVar5)) {
        if (lVar5 == 0) {
          return 0;
        }
        iVar2 = addr_contains_part_0();
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

