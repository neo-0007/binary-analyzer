
void PROFESSION_INFO_set0_namingAuthority(undefined8 *param_1,undefined8 param_2)

{
  NAMING_AUTHORITY_free(*param_1);
  *param_1 = param_2;
  return;
}

