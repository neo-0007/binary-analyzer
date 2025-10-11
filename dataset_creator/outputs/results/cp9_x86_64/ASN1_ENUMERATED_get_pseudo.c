
long ASN1_ENUMERATED_get(ASN1_ENUMERATED *a)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (a == (ASN1_ENUMERATED *)0x0) {
    lVar2 = 0;
  }
  else if (((a->type & 0xfffffeffU) != 10) ||
          ((lVar2 = 0xffffffff, a->length < 9 &&
           (iVar1 = ASN1_ENUMERATED_get_int64(&local_18,a), lVar2 = local_18, iVar1 == 0)))) {
    lVar2 = -1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar2;
}

