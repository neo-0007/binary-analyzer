
void NAMING_AUTHORITY_set0_authorityText(long param_1,undefined8 param_2)

{
  ASN1_IA5STRING_free(*(ASN1_STRING **)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}

