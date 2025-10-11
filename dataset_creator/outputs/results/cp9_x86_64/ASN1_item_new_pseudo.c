
ASN1_VALUE * ASN1_item_new(ASN1_ITEM *it)

{
  int iVar1;
  ASN1_VALUE *pAVar2;
  long in_FS_OFFSET;
  ASN1_VALUE *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (ASN1_VALUE *)0x0;
  iVar1 = ASN1_item_ex_new(&local_18,it);
  pAVar2 = (ASN1_VALUE *)0x0;
  if (0 < iVar1) {
    pAVar2 = local_18;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

