
int EVP_PKEY_type(int type)

{
  EVP_PKEY_ASN1_METHOD *pEVar1;
  int iVar2;
  long in_FS_OFFSET;
  ENGINE *local_18;
  long local_10;
  
  iVar2 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar1 = EVP_PKEY_asn1_find(&local_18,type);
  if (pEVar1 != (EVP_PKEY_ASN1_METHOD *)0x0) {
    iVar2 = *(int *)pEVar1;
  }
  ENGINE_finish(local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

