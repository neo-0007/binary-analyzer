
int GENERAL_NAME_get0_otherName(GENERAL_NAME *gen,ASN1_OBJECT **poid,ASN1_TYPE **pvalue)

{
  int iVar1;
  
  iVar1 = 0;
  if (gen->type == 0) {
    if (poid != (ASN1_OBJECT **)0x0) {
      *poid = ((gen->d).otherName)->type_id;
    }
    iVar1 = 1;
    if (pvalue != (ASN1_TYPE **)0x0) {
      *pvalue = ((gen->d).otherName)->value;
    }
  }
  return iVar1;
}

