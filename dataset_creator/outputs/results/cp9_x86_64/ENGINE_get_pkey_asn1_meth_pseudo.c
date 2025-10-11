
EVP_PKEY_ASN1_METHOD * ENGINE_get_pkey_asn1_meth(ENGINE *e,int nid)

{
  int iVar1;
  ENGINE_PKEY_ASN1_METHS_PTR pEVar2;
  long in_FS_OFFSET;
  EVP_PKEY_ASN1_METHOD *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar2 = ENGINE_get_pkey_asn1_meths(e);
  if ((pEVar2 == (ENGINE_PKEY_ASN1_METHS_PTR)0x0) ||
     (iVar1 = (*pEVar2)(e,&local_28,(int **)0x0,nid), iVar1 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/engine/tb_asnmth.c",0x5c,"ENGINE_get_pkey_asn1_meth");
    ERR_set_error(0x26,0x65,0);
    local_28 = (EVP_PKEY_ASN1_METHOD *)0x0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_28;
}

