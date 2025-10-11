
void PROFESSION_INFO_set0_professionItems(long param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 8),ASN1_STRING_free);
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}

