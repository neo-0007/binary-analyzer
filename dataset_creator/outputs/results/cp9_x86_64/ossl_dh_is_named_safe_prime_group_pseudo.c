
bool ossl_dh_is_named_safe_prime_group(void)

{
  int iVar1;
  
  iVar1 = DH_get_nid();
  return 3 < iVar1;
}

