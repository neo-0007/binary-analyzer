
int ASN1_STRING_to_UTF8(uchar **out,ASN1_STRING *in)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  ASN1_STRING *local_30;
  ASN1_STRING local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = &local_28;
  if ((in == (ASN1_STRING *)0x0) || (0x1e < (uint)in->type)) {
    iVar2 = -1;
  }
  else {
    cVar1 = tag2nbyte[in->type];
    iVar2 = (int)cVar1;
    if (cVar1 != -1) {
      local_28.data = (uchar *)0x0;
      local_28.length = 0;
      local_28.flags = 0;
      iVar2 = ASN1_mbstring_copy(&local_30,in->data,in->length,
                                 CONCAT22(cVar1 >> 7,(short)cVar1) | 0x1000,0x2000);
      if (-1 < iVar2) {
        *out = local_28.data;
        iVar2 = local_28.length;
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

