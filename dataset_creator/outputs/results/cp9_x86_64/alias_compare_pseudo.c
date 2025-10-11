
void alias_compare(undefined8 *param_1,undefined8 *param_2)

{
  strcasecmp_l((char *)*param_1,(char *)*param_2,(__locale_t)_nl_C_locobj);
  return;
}

