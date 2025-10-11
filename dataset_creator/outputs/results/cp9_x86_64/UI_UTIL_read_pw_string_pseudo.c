
int UI_UTIL_read_pw_string(char *buf,int length,char *prompt,int verify)

{
  int iVar1;
  long in_FS_OFFSET;
  char acStack_2028 [8200];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0x2000;
  if (length < 0x2001) {
    iVar1 = length;
  }
  iVar1 = UI_UTIL_read_pw(buf,acStack_2028,iVar1,prompt,verify);
  OPENSSL_cleanse(acStack_2028,0x2000);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

