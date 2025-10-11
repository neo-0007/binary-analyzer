
uint rc2_get_asn1_type_and_iv(EVP_CIPHER_CTX *param_1,ASN1_TYPE *param_2)

{
  uint max_len;
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  long local_50;
  uchar local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  if (param_2 == (ASN1_TYPE *)0x0) {
    uVar1 = 0;
  }
  else {
    max_len = EVP_CIPHER_CTX_get_iv_length();
    if (0x10 < max_len) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: l <= sizeof(iv)","../crypto/evp/e_rc2.c",0x8c);
    }
    uVar1 = ASN1_TYPE_get_int_octetstring(param_2,&local_50,local_48,max_len);
    if (max_len == uVar1) {
      iVar3 = (int)local_50;
      if (iVar3 == 0x3a) {
        iVar3 = 0x80;
      }
      else if (iVar3 == 0x78) {
        iVar3 = 0x40;
      }
      else {
        if (iVar3 != 0xa0) {
          ERR_new();
          ERR_set_debug("../crypto/evp/e_rc2.c",0x7d,"rc2_magic_to_meth");
          uVar1 = 0xffffffff;
          ERR_set_error(6,0x6c,0);
          goto LAB_005238dc;
        }
        iVar3 = 0x28;
      }
      if ((((uVar1 == 0) ||
           (iVar2 = EVP_CipherInit_ex(param_1,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,local_48,
                                      -1), iVar2 != 0)) &&
          (iVar2 = EVP_CIPHER_CTX_ctrl(param_1,3,iVar3,(void *)0x0), 0 < iVar2)) &&
         (iVar3 = EVP_CIPHER_CTX_set_key_length(param_1,iVar3 >> 3), 0 < iVar3)) goto LAB_005238dc;
    }
    uVar1 = 0xffffffff;
  }
LAB_005238dc:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar1;
}

