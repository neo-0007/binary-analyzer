
ulong ossl_asn1_type_get_octetstring_int(int *param_1,long *param_2,void *param_3,int param_4)

{
  int iVar1;
  ASN1_STRING *x;
  int iVar2;
  ASN1_VALUE *val;
  void *__src;
  size_t __n;
  ulong uVar3;
  
  if (((*param_1 == 0x10) && (*(long *)(param_1 + 2) != 0)) &&
     (val = (ASN1_VALUE *)ASN1_TYPE_unpack_sequence(local_it_1,param_1), val != (ASN1_VALUE *)0x0))
  {
    x = *(ASN1_STRING **)val;
    iVar1 = *(int *)(val + 8);
    iVar2 = ASN1_STRING_length(x);
    uVar3 = (ulong)iVar2;
    if (param_2 != (long *)0x0) {
      *param_2 = (long)iVar1;
    }
    if (param_3 != (void *)0x0) {
      __src = (void *)ASN1_STRING_get0_data(x);
      __n = (long)param_4;
      if (iVar2 < param_4) {
        __n = uVar3;
      }
      memcpy(param_3,__src,__n);
    }
    if (iVar2 != -1) goto LAB_0049ff61;
  }
  else {
    val = (ASN1_VALUE *)0x0;
  }
  ERR_new();
  uVar3 = 0xffffffff;
  ERR_set_debug("../crypto/asn1/evp_asn1.c",0xb7,"ossl_asn1_type_get_octetstring_int");
  ERR_set_error(0xd,0x6d,0);
LAB_0049ff61:
  ASN1_item_free(val,(ASN1_ITEM *)local_it_1);
  return uVar3 & 0xffffffff;
}

