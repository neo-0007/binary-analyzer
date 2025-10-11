
void ADMISSIONS_set0_namingAuthority(long param_1,undefined8 param_2)

{
  NAMING_AUTHORITY_free(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}

