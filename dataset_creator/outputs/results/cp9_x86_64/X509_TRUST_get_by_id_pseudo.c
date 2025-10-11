
int X509_TRUST_get_by_id(int id)

{
  uint uVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_38 [10];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = id - 1;
  if (7 < uVar1) {
    if (trtable != 0) {
      local_38[0] = id;
      iVar2 = OPENSSL_sk_find(trtable,local_38);
      if (-1 < iVar2) {
        uVar1 = iVar2 + 8;
        goto LAB_00611301;
      }
    }
    uVar1 = 0xffffffff;
  }
LAB_00611301:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

