
void NAMING_AUTHORITY_set0_authorityId(undefined8 *param_1,undefined8 param_2)

{
  ASN1_OBJECT_free((ASN1_OBJECT *)*param_1);
  *param_1 = param_2;
  return;
}

