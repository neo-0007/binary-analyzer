
EVP_PKEY * b2i_PublicKey(uchar **in,long length)

{
  EVP_PKEY *pEVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 1;
  pEVar1 = (EVP_PKEY *)ossl_b2i(in,length,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

