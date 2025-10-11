
EVP_MD * ENGINE_get_digest(ENGINE *e,int nid)

{
  int iVar1;
  ENGINE_DIGESTS_PTR pEVar2;
  long in_FS_OFFSET;
  EVP_MD *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar2 = ENGINE_get_digests(e);
  if ((pEVar2 == (ENGINE_DIGESTS_PTR)0x0) ||
     (iVar1 = (*pEVar2)(e,&local_28,(int **)0x0,nid), iVar1 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/engine/tb_digest.c",0x4e,"ENGINE_get_digest");
    ERR_set_error(0x26,0x93,0);
    local_28 = (EVP_MD *)0x0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_28;
}

