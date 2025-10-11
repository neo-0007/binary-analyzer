
bool nullmd_internal_init(void)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  return iVar1 != 0;
}

