
void node_cmp(undefined8 *param_1,undefined8 *param_2)

{
  OBJ_cmp(*(ASN1_OBJECT **)(*(long *)*param_1 + 8),*(ASN1_OBJECT **)(*(long *)*param_2 + 8));
  return;
}

