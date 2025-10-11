
uint pkey_rsa_sign(long param_1,uchar *param_2,long *param_3,uchar *param_4,size_t param_5)

{
  long lVar1;
  uchar *from;
  uint m_length;
  int iVar2;
  uint uVar3;
  RSA *rsa;
  size_t __n;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  rsa = (RSA *)EVP_PKEY_get0_RSA(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(lVar1 + 0x20) == 0) {
    local_44 = RSA_private_encrypt((int)param_5,param_4,param_2,rsa,*(int *)(lVar1 + 0x1c));
    goto LAB_00432138;
  }
  m_length = EVP_MD_get_size();
  __n = (size_t)(int)m_length;
  if (__n != param_5) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x98,"pkey_rsa_sign");
    ERR_set_error(4,0x8f,0);
    uVar3 = 0xffffffff;
    goto LAB_0043214b;
  }
  iVar2 = EVP_MD_get_type();
  if (iVar2 == 0x5f) {
    uVar3 = 0xffffffff;
    if (*(int *)(lVar1 + 0x1c) != 1) goto LAB_0043214b;
    uVar3 = RSA_sign_ASN1_OCTET_STRING(0,param_4,m_length,param_2,&local_44,rsa);
joined_r0x00432197:
    if ((int)uVar3 < 1) goto LAB_0043214b;
  }
  else {
    iVar2 = *(int *)(lVar1 + 0x1c);
    if (iVar2 == 5) {
      iVar2 = RSA_size(rsa);
      if ((ulong)(long)iVar2 < __n + 1) {
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0xa7,"pkey_rsa_sign");
        ERR_set_error(4,0x78,0);
        uVar3 = 0xffffffff;
        goto LAB_0043214b;
      }
      iVar2 = setup_tbuf(lVar1,param_1);
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0xab,"pkey_rsa_sign");
        ERR_set_error(4,0xc0100,0);
        uVar3 = 0xffffffff;
        goto LAB_0043214b;
      }
      memcpy(*(void **)(lVar1 + 0x38),param_4,__n);
      iVar2 = EVP_MD_get_type(*(undefined8 *)(lVar1 + 0x20));
      iVar2 = RSA_X931_hash_id(iVar2);
      *(char *)(*(long *)(lVar1 + 0x38) + __n) = (char)iVar2;
      local_44 = RSA_private_encrypt(m_length + 1,*(uchar **)(lVar1 + 0x38),param_2,rsa,5);
    }
    else {
      if (iVar2 == 1) {
        iVar2 = EVP_MD_get_type(*(undefined8 *)(lVar1 + 0x20));
        uVar3 = RSA_sign(iVar2,param_4,m_length,param_2,&local_44,rsa);
        goto joined_r0x00432197;
      }
      if (((iVar2 != 6) || (iVar2 = setup_tbuf(lVar1,param_1), iVar2 == 0)) ||
         (iVar2 = RSA_padding_add_PKCS1_PSS_mgf1
                            (rsa,*(uchar **)(lVar1 + 0x38),param_4,*(EVP_MD **)(lVar1 + 0x20),
                             *(EVP_MD **)(lVar1 + 0x28),*(int *)(lVar1 + 0x30)), iVar2 == 0)) {
        uVar3 = 0xffffffff;
        goto LAB_0043214b;
      }
      from = *(uchar **)(lVar1 + 0x38);
      iVar2 = RSA_size(rsa);
      local_44 = RSA_private_encrypt(iVar2,from,param_2,rsa,3);
    }
  }
LAB_00432138:
  uVar3 = local_44;
  if (-1 < (int)local_44) {
    *param_3 = (long)(int)local_44;
    uVar3 = 1;
  }
LAB_0043214b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

