
uchar * ossl_sha1(void *param_1,size_t param_2,undefined1 *param_3)

{
  int iVar1;
  uchar *puVar2;
  long in_FS_OFFSET;
  SHA_CTX SStack_98;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (uchar *)0x0) {
    param_3 = m_5;
  }
  iVar1 = SHA1_Init(&SStack_98);
  puVar2 = (uchar *)0x0;
  if (iVar1 != 0) {
    SHA1_Update(&SStack_98,param_1,param_2);
    SHA1_Final(param_3,&SStack_98);
    OPENSSL_cleanse(&SStack_98,0x60);
    puVar2 = param_3;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

