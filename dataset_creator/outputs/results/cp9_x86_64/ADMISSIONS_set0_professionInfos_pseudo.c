
void ADMISSIONS_set0_professionInfos(long param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x10),PROFESSION_INFO_free);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}

