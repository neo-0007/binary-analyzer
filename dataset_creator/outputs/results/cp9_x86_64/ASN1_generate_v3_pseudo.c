
ASN1_TYPE * ASN1_generate_v3(char *str,X509V3_CTX *cnf)

{
  ASN1_TYPE *pAVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  pAVar1 = (ASN1_TYPE *)generate_v3(str,cnf,0,&local_14);
  if (local_14 != 0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/asn1_gen.c",0x5e,"ASN1_generate_v3");
    ERR_set_error(0xd,local_14,0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

