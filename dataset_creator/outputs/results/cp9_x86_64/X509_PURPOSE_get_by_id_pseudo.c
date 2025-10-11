
int X509_PURPOSE_get_by_id(int id)

{
  uint uVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_48 [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = id - 1;
  if (8 < uVar1) {
    if (xptable != 0) {
      local_48[0] = id;
      iVar2 = OPENSSL_sk_find(xptable,local_48);
      if (-1 < iVar2) {
        uVar1 = iVar2 + 9;
        goto LAB_00586e81;
      }
    }
    uVar1 = 0xffffffff;
  }
LAB_00586e81:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

