
int DSA_size(DSA *param_1)

{
  BIGNUM *pBVar1;
  int iVar2;
  long in_FS_OFFSET;
  DSA_SIG local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pBVar1 = *(BIGNUM **)&param_1->write_params;
  if (pBVar1 == (BIGNUM *)0x0) {
    iVar2 = -1;
  }
  else {
    local_28.r = pBVar1;
    local_28.s = pBVar1;
    iVar2 = i2d_DSA_SIG(&local_28,(uchar **)0x0);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

