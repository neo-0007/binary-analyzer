
void ADMISSION_SYNTAX_set0_contentsOfAdmissions(long param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 8),ADMISSIONS_free);
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}

