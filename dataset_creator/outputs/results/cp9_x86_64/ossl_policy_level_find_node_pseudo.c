
long * ossl_policy_level_find_node(long param_1,long param_2,ASN1_OBJECT *param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    if (iVar1 <= iVar3) {
      return (long *)0x0;
    }
    plVar2 = (long *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar3);
    if (plVar2[1] == param_2) {
      iVar1 = OBJ_cmp(*(ASN1_OBJECT **)(*plVar2 + 8),param_3);
      if (iVar1 == 0) {
        return plVar2;
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

