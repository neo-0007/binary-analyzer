
void cleanup3_doall(void *param_1)

{
  int *piVar1;
  ASN1_OBJECT *a;
  
  a = *(ASN1_OBJECT **)((long)param_1 + 8);
  piVar1 = &a->nid;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ASN1_OBJECT_free(a);
  }
  CRYPTO_free(param_1);
  return;
}

