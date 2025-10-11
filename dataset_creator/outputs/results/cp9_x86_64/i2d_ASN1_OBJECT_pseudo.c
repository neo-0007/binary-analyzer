
int i2d_ASN1_OBJECT(ASN1_OBJECT *a,uchar **pp)

{
  int num;
  uchar *puVar1;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (a == (ASN1_OBJECT *)0x0) {
    num = 0;
  }
  else {
    num = 0;
    if (a->data != (uchar *)0x0) {
      num = ASN1_object_size(0,a->length,6);
      if ((pp != (uchar **)0x0) && (num != -1)) {
        local_38 = *pp;
        if (local_38 == (uchar *)0x0) {
          puVar1 = (uchar *)CRYPTO_malloc(num,"../crypto/asn1/a_object.c",0x22);
          local_38 = puVar1;
          if (puVar1 == (uchar *)0x0) {
            ERR_new();
            num = 0;
            ERR_set_debug("../crypto/asn1/a_object.c",0x23,"i2d_ASN1_OBJECT");
            ERR_set_error(0xd,0xc0100,0);
            goto LAB_0049d6e4;
          }
          ASN1_put_object(&local_38,0,a->length,6,0);
          memcpy(local_38,a->data,(long)a->length);
        }
        else {
          ASN1_put_object(&local_38,0,a->length,6,0);
          memcpy(local_38,a->data,(long)a->length);
          puVar1 = local_38 + a->length;
        }
        *pp = puVar1;
      }
    }
  }
LAB_0049d6e4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return num;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

