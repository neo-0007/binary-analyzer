
int EC_KEY_set_private_key(EC_KEY *key,BIGNUM *prv)

{
  int iVar1;
  long lVar2;
  BIGNUM *a;
  
  if ((((((*(long **)(key + 0x18) != (long *)0x0) && (**(long **)(key + 0x18) != 0)) &&
        (lVar2 = EC_GROUP_get0_order(), lVar2 != 0)) &&
       ((iVar1 = BN_is_zero(lVar2), iVar1 == 0 &&
        ((*(code **)(**(long **)(key + 0x18) + 0x140) == (code *)0x0 ||
         (iVar1 = (**(code **)(**(long **)(key + 0x18) + 0x140))(key,prv), iVar1 != 0)))))) &&
      ((*(code **)(*(long *)key + 0x30) == (code *)0x0 ||
       (iVar1 = (**(code **)(*(long *)key + 0x30))(key,prv), iVar1 != 0)))) &&
     (a = BN_dup(prv), a != (BIGNUM *)0x0)) {
    BN_set_flags(a,4);
    iVar1 = bn_get_top(lVar2);
    lVar2 = bn_wexpand(a,iVar1 + 2);
    if (lVar2 != 0) {
      BN_clear_free(*(BIGNUM **)(key + 0x28));
      *(long *)(key + 0x68) = *(long *)(key + 0x68) + 1;
      *(BIGNUM **)(key + 0x28) = a;
      return 1;
    }
    BN_clear_free(a);
    return 0;
  }
  return 0;
}

