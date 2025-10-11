
long ASN1_INTEGER_get(ASN1_INTEGER *a)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0;
  if ((a != (ASN1_INTEGER *)0x0) &&
     (iVar1 = ASN1_INTEGER_get_int64(&local_18,a), lVar2 = local_18, iVar1 == 0)) {
    lVar2 = -1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar2;
}

