
char * EVP_PKEY_get0_type_name(EVP_PKEY *param_1)

{
  char *pcVar1;
  EVP_PKEY_ASN1_METHOD *ameth;
  long in_FS_OFFSET;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (char *)0x0;
  if (*(long *)&param_1[1].save_parameters == 0) {
    ameth = EVP_PKEY_get0_asn1(param_1);
    pcVar1 = local_18;
    if (ameth != (EVP_PKEY_ASN1_METHOD *)0x0) {
      EVP_PKEY_asn1_get0_info((int *)0x0,(int *)0x0,(int *)0x0,(char **)0x0,&local_18,ameth);
      pcVar1 = local_18;
    }
  }
  else {
    pcVar1 = (char *)EVP_KEYMGMT_get0_name(*(long *)&param_1[1].save_parameters);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pcVar1;
}

