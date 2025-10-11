
stack_st_CONF_VALUE *
i2v_ASN1_BIT_STRING(X509V3_EXT_METHOD *method,ASN1_BIT_STRING *bits,stack_st_CONF_VALUE *extlist)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  stack_st_CONF_VALUE *local_20;
  
  local_20 = extlist;
  if (*(long *)((long)method->usr_data + 8) != 0) {
    piVar3 = (int *)method->usr_data;
    do {
      while (iVar2 = ASN1_BIT_STRING_get_bit(bits,*piVar3), iVar2 != 0) {
        X509V3_add_value(*(char **)(piVar3 + 2),(char *)0x0,&local_20);
        plVar1 = (long *)(piVar3 + 8);
        piVar3 = piVar3 + 6;
        if (*plVar1 == 0) {
          return local_20;
        }
      }
      plVar1 = (long *)(piVar3 + 8);
      piVar3 = piVar3 + 6;
    } while (*plVar1 != 0);
  }
  return local_20;
}

