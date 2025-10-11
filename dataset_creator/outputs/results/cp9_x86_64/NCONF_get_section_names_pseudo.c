
long NCONF_get_section_names(long param_1)

{
  long lVar1;
  
  lVar1 = OPENSSL_sk_new(section_name_cmp);
  if (lVar1 != 0) {
    OPENSSL_LH_doall_arg(*(undefined8 *)(param_1 + 0x10),collect_section_name,lVar1);
    OPENSSL_sk_sort(lVar1);
  }
  return lVar1;
}

