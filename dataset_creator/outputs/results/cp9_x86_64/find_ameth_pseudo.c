
void find_ameth(char *param_1,long *param_2)

{
  size_t sVar1;
  EVP_PKEY_ASN1_METHOD *pEVar2;
  long in_FS_OFFSET;
  ENGINE *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ERR_set_mark();
  sVar1 = strlen(param_1);
  local_28 = (ENGINE *)0x0;
  pEVar2 = EVP_PKEY_asn1_find_str(&local_28,param_1,(int)sVar1);
  ENGINE_finish(local_28);
  if (pEVar2 == (EVP_PKEY_ASN1_METHOD *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/p_lib.c",0x5fe,"pkey_set_type");
    ERR_set_error(6,0x9c,0);
  }
  else if (*param_2 == 0) {
    *param_2 = (long)param_1;
  }
  else if (param_2[1] == 0) {
    param_2[1] = (long)param_1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    ERR_pop_to_mark();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

