
uint pkey_rsa_verify(long param_1,uchar *param_2,undefined8 param_3,uchar *param_4,size_t param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  RSA *rsa;
  long in_FS_OFFSET;
  uint local_50;
  size_t local_48;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  rsa = (RSA *)EVP_PKEY_get0_RSA(*(undefined8 *)(param_1 + 0x88));
  local_50 = (uint)param_3;
  if (*(long *)(lVar1 + 0x20) == 0) {
    iVar2 = setup_tbuf(lVar1,param_1);
    if (iVar2 == 0) goto LAB_00431ff0;
    iVar2 = RSA_public_decrypt(local_50,param_2,*(uchar **)(lVar1 + 0x38),rsa,*(int *)(lVar1 + 0x1c)
                              );
    local_48 = (size_t)iVar2;
    if (local_48 != 0) {
LAB_00431f86:
      if (param_5 == local_48) {
        iVar2 = bcmp(param_4,*(void **)(lVar1 + 0x38),param_5);
        if (iVar2 == 0) {
          uVar3 = 1;
          goto LAB_00431ef8;
        }
      }
    }
    goto LAB_00431f48;
  }
  if (*(int *)(lVar1 + 0x1c) == 1) {
    iVar2 = EVP_MD_get_type();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = RSA_verify(iVar2,param_4,(uint)param_5,param_2,local_50,rsa);
      return uVar3;
    }
    goto LAB_00432034;
  }
  iVar2 = EVP_MD_get_size();
  if ((long)iVar2 == param_5) {
    if (*(int *)(lVar1 + 0x1c) == 5) {
      iVar2 = pkey_rsa_verifyrecover(param_1,0,&local_48,param_2,param_3);
      if (0 < iVar2) goto LAB_00431f86;
LAB_00431f48:
      uVar3 = 0;
    }
    else {
      if (*(int *)(lVar1 + 0x1c) == 6) {
        iVar2 = setup_tbuf(lVar1,param_1);
        if (iVar2 != 0) {
          iVar2 = RSA_public_decrypt(local_50,param_2,*(uchar **)(lVar1 + 0x38),rsa,3);
          if (0 < iVar2) {
            iVar2 = RSA_verify_PKCS1_PSS_mgf1
                              (rsa,param_4,*(EVP_MD **)(lVar1 + 0x20),*(EVP_MD **)(lVar1 + 0x28),
                               *(uchar **)(lVar1 + 0x38),*(int *)(lVar1 + 0x30));
            uVar3 = (uint)(0 < iVar2);
            goto LAB_00431ef8;
          }
          goto LAB_00431f48;
        }
      }
LAB_00431ff0:
      uVar3 = 0xffffffff;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x115,"pkey_rsa_verify");
    ERR_set_error(4,0x8f,0);
    uVar3 = 0xffffffff;
  }
LAB_00431ef8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00432034:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

