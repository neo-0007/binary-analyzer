
ASN1_STRING * ASN1_STRING_set_by_NID(ASN1_STRING **out,uchar *in,int inlen,int inform,int nid)

{
  int iVar1;
  ASN1_STRING_TABLE *pAVar2;
  ASN1_STRING *pAVar3;
  ulong mask;
  long in_FS_OFFSET;
  ASN1_STRING *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (ASN1_STRING *)0x0;
  if (out == (ASN1_STRING **)0x0) {
    out = &local_38;
  }
  pAVar2 = ASN1_STRING_TABLE_get(nid);
  if (pAVar2 == (ASN1_STRING_TABLE *)0x0) {
    iVar1 = ASN1_mbstring_copy(out,in,inlen,inform,(ulong)((uint)global_mask & 0x2806));
  }
  else {
    mask = pAVar2->mask;
    if ((pAVar2->flags & 2) == 0) {
      mask = mask & global_mask;
    }
    iVar1 = ASN1_mbstring_ncopy(out,in,inlen,inform,mask,pAVar2->minsize,pAVar2->maxsize);
  }
  if (iVar1 < 1) {
    pAVar3 = (ASN1_STRING *)0x0;
  }
  else {
    pAVar3 = *out;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

