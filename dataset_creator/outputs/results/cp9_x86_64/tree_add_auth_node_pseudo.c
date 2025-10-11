
bool tree_add_auth_node(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = ossl_policy_node_cmp_new();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = OPENSSL_sk_find(lVar2,param_2);
  bVar3 = true;
  if (iVar1 < 0) {
    iVar1 = OPENSSL_sk_push(*param_1,param_2);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

