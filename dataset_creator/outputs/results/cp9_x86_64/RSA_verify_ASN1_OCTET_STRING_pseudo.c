
int RSA_verify_ASN1_OCTET_STRING(int type,uchar *m,uint m_length,uchar *sigbuf,uint siglen,RSA *rsa)

{
  uint num;
  int iVar1;
  int iVar2;
  uchar *to;
  ASN1_OCTET_STRING *a;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  num = RSA_size(rsa);
  if (num != siglen) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("../crypto/rsa/rsa_saos.c",0x46,"RSA_verify_ASN1_OCTET_STRING");
    ERR_set_error(4,0x77,0);
    goto LAB_00433431;
  }
  to = (uchar *)CRYPTO_malloc(num,"../crypto/rsa/rsa_saos.c",0x4a);
  if (to == (uchar *)0x0) {
    ERR_new();
    a = (ASN1_STRING *)0x0;
    iVar1 = 0;
    ERR_set_debug("../crypto/rsa/rsa_saos.c",0x4c,"RSA_verify_ASN1_OCTET_STRING");
    ERR_set_error(4,0xc0100,0);
  }
  else {
    iVar1 = RSA_public_decrypt(num,sigbuf,to,rsa,1);
    if (0 < iVar1) {
      local_48 = to;
      a = d2i_ASN1_OCTET_STRING((ASN1_OCTET_STRING **)0x0,&local_48,(long)iVar1);
      if (a != (ASN1_OCTET_STRING *)0x0) {
        if (m_length == a->length) {
          iVar1 = 1;
          iVar2 = bcmp(m,a->data,(ulong)m_length);
          if (iVar2 == 0) goto LAB_0043351d;
        }
        ERR_new();
        iVar1 = 0;
        ERR_set_debug("../crypto/rsa/rsa_saos.c",0x5b,"RSA_verify_ASN1_OCTET_STRING");
        ERR_set_error(4,0x68,0);
        goto LAB_0043351d;
      }
    }
    a = (ASN1_STRING *)0x0;
    iVar1 = 0;
  }
LAB_0043351d:
  ASN1_OCTET_STRING_free(a);
  CRYPTO_clear_free(to,num,"../crypto/rsa/rsa_saos.c",0x61);
LAB_00433431:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

