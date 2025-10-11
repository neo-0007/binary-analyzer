
char ecd_item_verify(EVP_MD_CTX *param_1,undefined8 param_2,undefined8 param_3,X509_ALGOR *param_4,
                    undefined8 param_5,EVP_PKEY *param_6)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_2c;
  ASN1_OBJECT *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  X509_ALGOR_get0(&local_28,&local_2c,(void **)0x0,param_4);
  iVar2 = OBJ_obj2nid(local_28);
  if ((iVar2 - 0x43fU < 2) && (local_2c == -1)) {
    iVar2 = EVP_DigestVerifyInit(param_1,(EVP_PKEY_CTX **)0x0,(EVP_MD *)0x0,(ENGINE *)0x0,param_6);
    cVar1 = (iVar2 != 0) * '\x02';
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecx_meth.c",0x22a,"ecd_item_verify");
    ERR_set_error(0x10,0x66,0);
    cVar1 = '\0';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

