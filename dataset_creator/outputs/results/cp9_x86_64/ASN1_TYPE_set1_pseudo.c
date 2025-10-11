
int ASN1_TYPE_set1(ASN1_TYPE *a,int type,void *value)

{
  ASN1_STRING *value_00;
  ASN1_OBJECT *value_01;
  
  if ((value != (void *)0x0) && (type != 1)) {
    if (type == 6) {
      value_01 = OBJ_dup((ASN1_OBJECT *)value);
      if (value_01 != (ASN1_OBJECT *)0x0) {
        ASN1_TYPE_set(a,6,value_01);
        return 1;
      }
    }
    else {
      value_00 = ASN1_STRING_dup((ASN1_STRING *)value);
      if (value_00 != (ASN1_STRING *)0x0) {
        ASN1_TYPE_set(a,type,value_00);
        return 1;
      }
    }
    return 0;
  }
  ASN1_TYPE_set(a,type,value);
  return 1;
}

