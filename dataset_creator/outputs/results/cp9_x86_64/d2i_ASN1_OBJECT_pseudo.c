
ASN1_OBJECT * d2i_ASN1_OBJECT(ASN1_OBJECT **a,uchar **pp,long length)

{
  uint uVar1;
  ASN1_OBJECT *pAVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  uchar *local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = *pp;
  uVar1 = ASN1_get_object(&local_30,&local_28,&local_38,&local_34,length);
  if ((uVar1 & 0x80) == 0) {
    if (local_38 == 6) {
      pAVar2 = (ASN1_OBJECT *)ossl_c2i_ASN1_OBJECT(a,&local_30,local_28);
      if (pAVar2 != (ASN1_OBJECT *)0x0) {
        *pp = local_30;
      }
      goto LAB_0049e43c;
    }
    uVar3 = 0x74;
  }
  else {
    uVar3 = 0x66;
  }
  ERR_new();
  ERR_set_debug("../crypto/asn1/a_object.c",0xf0,"d2i_ASN1_OBJECT");
  ERR_set_error(0xd,uVar3,0);
  pAVar2 = (ASN1_OBJECT *)0x0;
LAB_0049e43c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

