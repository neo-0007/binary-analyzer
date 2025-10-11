
int EVP_Q_digest(void)

{
  int iVar1;
  EVP_MD *type;
  void *in_RCX;
  size_t in_R8;
  uchar *in_R9;
  long in_FS_OFFSET;
  ulong *in_stack_00000008;
  uint local_44;
  long local_40;
  
  iVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  type = (EVP_MD *)EVP_MD_fetch();
  local_44 = 0;
  if (type != (EVP_MD *)0x0) {
    iVar1 = EVP_Digest(in_RCX,in_R8,in_R9,&local_44,type,(ENGINE *)0x0);
    EVP_MD_free(type);
  }
  if (in_stack_00000008 != (ulong *)0x0) {
    *in_stack_00000008 = (ulong)local_44;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

