
int rc2_set_asn1_type_and_iv(EVP_CIPHER_CTX *param_1,ASN1_TYPE *param_2)

{
  int iVar1;
  long num;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (ASN1_TYPE *)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else {
    num = 0;
    iVar1 = EVP_CIPHER_CTX_ctrl(param_1,2,0,&local_24);
    if (0 < iVar1) {
      if (local_24 == 0x80) {
        num = 0x3a;
      }
      else if (local_24 == 0x40) {
        num = 0x78;
      }
      else if (local_24 == 0x28) {
        num = 0xa0;
      }
    }
    iVar1 = EVP_CIPHER_CTX_get_iv_length(param_1);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar1 = ASN1_TYPE_set_int_octetstring(param_2,num,param_1->oiv,iVar1);
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

