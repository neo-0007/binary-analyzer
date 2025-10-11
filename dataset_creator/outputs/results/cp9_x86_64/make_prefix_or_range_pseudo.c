
long make_prefix_or_range(undefined8 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = make_IPAddressFamily();
  if ((lVar3 != 0) && (piVar1 = *(int **)(lVar3 + 8), piVar1 != (int *)0x0)) {
    if (*piVar1 == 0) {
      if (*(long *)(piVar1 + 2) != 0) {
        return 0;
      }
    }
    else if ((*piVar1 == 1) && (*(long *)(piVar1 + 2) != 0)) {
      return *(long *)(piVar1 + 2);
    }
    lVar4 = OPENSSL_sk_new_null();
    if (lVar4 != 0) {
      if (param_2 == 1) {
        OPENSSL_sk_set_cmp_func(lVar4,v4IPAddressOrRange_cmp);
      }
      else if (param_2 == 2) {
        OPENSSL_sk_set_cmp_func(lVar4,v6IPAddressOrRange_cmp);
      }
      puVar2 = *(undefined4 **)(lVar3 + 8);
      *puVar2 = 1;
      *(long *)(puVar2 + 2) = lVar4;
      return lVar4;
    }
  }
  return 0;
}

