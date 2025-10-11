
void obj_name_cmp(int *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  
  if (*param_1 != *param_2) {
    return;
  }
  if (name_funcs_stack != 0) {
    iVar1 = OPENSSL_sk_num();
    if (*param_1 < iVar1) {
      lVar2 = OPENSSL_sk_value(name_funcs_stack);
                    /* WARNING: Could not recover jumptable at 0x0042923e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 8))(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return;
    }
  }
  OPENSSL_strcasecmp(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
  return;
}

