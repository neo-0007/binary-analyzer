
void ADMISSIONS_set0_admissionAuthority(undefined8 *param_1,undefined8 param_2)

{
  GENERAL_NAME_free((GENERAL_NAME *)*param_1);
  *param_1 = param_2;
  return;
}

