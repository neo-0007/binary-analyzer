
int ASN1_TYPE_get_int_octetstring(ASN1_TYPE *a,long *num,uchar *data,int max_len)

{
  int iVar1;
  ASN1_STRING *x;
  int iVar2;
  ASN1_VALUE *val;
  void *__src;
  
  if (((a->type == 0x10) && ((a->value).ptr != (char *)0x0)) &&
     (val = (ASN1_VALUE *)ASN1_TYPE_unpack_sequence(local_it_3,a), val != (ASN1_VALUE *)0x0)) {
    x = *(ASN1_STRING **)(val + 8);
    iVar1 = *(int *)val;
    iVar2 = ASN1_STRING_length(x);
    if (num != (long *)0x0) {
      *num = (long)iVar1;
    }
    if (data != (uchar *)0x0) {
      __src = (void *)ASN1_STRING_get0_data(x);
      if (iVar2 < max_len) {
        max_len = iVar2;
      }
      memcpy(data,__src,(long)max_len);
    }
    if (iVar2 != -1) goto LAB_0049fdf1;
  }
  else {
    val = (ASN1_VALUE *)0x0;
  }
  ERR_new();
  iVar2 = -1;
  ERR_set_debug("../crypto/asn1/evp_asn1.c",0x80,"ASN1_TYPE_get_int_octetstring");
  ERR_set_error(0xd,0x6d,0);
LAB_0049fdf1:
  ASN1_item_free(val,(ASN1_ITEM *)local_it_3);
  return iVar2;
}

