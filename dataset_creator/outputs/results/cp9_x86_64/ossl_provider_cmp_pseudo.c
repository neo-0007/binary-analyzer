
void ossl_provider_cmp(long *param_1,long *param_2)

{
  strcmp(*(char **)(*param_1 + 0x28),*(char **)(*param_2 + 0x28));
  return;
}

