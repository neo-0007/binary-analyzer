
void policy_data_cmp(long *param_1,long *param_2)

{
  OBJ_cmp(*(ASN1_OBJECT **)(*param_1 + 8),*(ASN1_OBJECT **)(*param_2 + 8));
  return;
}

