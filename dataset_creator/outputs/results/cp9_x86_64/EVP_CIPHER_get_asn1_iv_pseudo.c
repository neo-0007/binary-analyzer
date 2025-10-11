
int EVP_CIPHER_get_asn1_iv(EVP_CIPHER_CTX *c,ASN1_TYPE *type)

{
  uint max_len;
  uint uVar1;
  int iVar2;
  long in_FS_OFFSET;
  uchar auStack_48 [24];
  long local_30;
  
  uVar1 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (type != (ASN1_TYPE *)0x0) {
    max_len = EVP_CIPHER_CTX_get_iv_length();
    if (max_len < 0x11) {
      uVar1 = ASN1_TYPE_get_octetstring(type,auStack_48,max_len);
      if (max_len == uVar1) {
        iVar2 = EVP_CipherInit_ex(c,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,auStack_48,-1);
        if (iVar2 != 0) goto LAB_0040e57c;
      }
    }
    uVar1 = 0xffffffff;
  }
LAB_0040e57c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

