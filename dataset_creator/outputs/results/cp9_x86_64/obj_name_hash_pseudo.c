
ulong obj_name_hash(int *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (name_funcs_stack != 0) {
    iVar1 = OPENSSL_sk_num();
    if (*param_1 < iVar1) {
      puVar3 = (undefined8 *)OPENSSL_sk_value(name_funcs_stack);
      uVar2 = (*(code *)*puVar3)(*(undefined8 *)(param_1 + 2));
      return (long)*param_1 ^ uVar2;
    }
  }
  uVar2 = ossl_lh_strcasehash(*(undefined8 *)(param_1 + 2));
  return (long)*param_1 ^ uVar2;
}

