
uchar * WHIRLPOOL(void *inp,size_t bytes,uchar *md)

{
  long in_FS_OFFSET;
  WHIRLPOOL_CTX WStack_d8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (md == (uchar *)0x0) {
    md = m_0;
  }
  WHIRLPOOL_Init(&WStack_d8);
  WHIRLPOOL_Update(&WStack_d8,inp,bytes);
  WHIRLPOOL_Final(md,&WStack_d8);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return md;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

