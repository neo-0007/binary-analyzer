
void help_get_legacy_alg_type_from_keymgmt(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 0) {
    return;
  }
  iVar1 = evp_pkey_name2type();
  *param_2 = iVar1;
  return;
}

