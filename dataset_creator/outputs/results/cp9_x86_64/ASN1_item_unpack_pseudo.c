
void * ASN1_item_unpack(ASN1_STRING *oct,ASN1_ITEM *it)

{
  ASN1_VALUE *pAVar1;
  long in_FS_OFFSET;
  uchar *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = oct->data;
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_18,(long)oct->length,it);
  if (pAVar1 == (ASN1_VALUE *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/asn_pack.c",0x3c,"ASN1_item_unpack");
    ERR_set_error(0xd,0x6e,0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

