
undefined4
rsa_verify_part_0(long param_1,uchar *param_2,undefined8 param_3,uchar *param_4,size_t param_5)

{
  long lVar1;
  int iVar2;
  uint siglen;
  undefined8 uVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  siglen = (uint)param_3;
  if (*(long *)(param_1 + 0x20) == 0) {
    iVar2 = setup_tbuf(param_1);
    if (iVar2 != 0) {
      iVar2 = RSA_public_decrypt(siglen,param_2,*(uchar **)(param_1 + 0xb8),
                                 *(RSA **)(param_1 + 0x10),*(int *)(param_1 + 0x68));
      local_48 = (size_t)iVar2;
      if (local_48 == 0) {
        ERR_new();
        uVar3 = 0x33f;
        goto LAB_0047ee8f;
      }
      goto LAB_0047ed8b;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x68);
    if (iVar2 == 5) {
      iVar2 = setup_tbuf(param_1);
      if (iVar2 != 0) {
        lVar1 = *(long *)(param_1 + 0xb8);
        iVar2 = ossl_prov_is_running();
        if (iVar2 != 0) {
          if (lVar1 == 0) {
            iVar2 = RSA_size(*(RSA **)(param_1 + 0x10));
            local_48 = (size_t)iVar2;
          }
          else {
            iVar2 = rsa_verify_recover_part_0(param_1,lVar1,&local_48,0,param_2,param_3);
            if (iVar2 < 1) goto LAB_0047ed19;
          }
LAB_0047ed8b:
          if ((param_5 == local_48) &&
             (iVar2 = bcmp(param_4,*(void **)(param_1 + 0xb8),param_5), iVar2 == 0))
          goto LAB_0047edaa;
        }
      }
    }
    else if (iVar2 == 6) {
      iVar2 = EVP_MD_get_size();
      if (param_5 != (long)iVar2) {
        ERR_new();
        ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x31c,"rsa_verify");
        uVar4 = 0;
        ERR_set_error(0x39,0xa6,"Should be %d, but got %d",(long)iVar2,param_5);
        goto LAB_0047ed1c;
      }
      iVar2 = setup_tbuf(param_1);
      if (iVar2 != 0) {
        iVar2 = RSA_public_decrypt(siglen,param_2,*(uchar **)(param_1 + 0xb8),
                                   *(RSA **)(param_1 + 0x10),3);
        if (iVar2 < 1) {
          ERR_new();
          uVar3 = 0x327;
        }
        else {
          iVar2 = RSA_verify_PKCS1_PSS_mgf1
                            (*(RSA **)(param_1 + 0x10),param_4,*(EVP_MD **)(param_1 + 0x20),
                             *(EVP_MD **)(param_1 + 0x70),*(uchar **)(param_1 + 0xb8),
                             *(int *)(param_1 + 0xb0));
          if (0 < iVar2) goto LAB_0047edaa;
          ERR_new();
          uVar3 = 0x32f;
        }
LAB_0047ee8f:
        uVar4 = 0;
        ERR_set_debug("../providers/implementations/signature/rsa_sig.c",uVar3,"rsa_verify");
        ERR_set_error(0x39,0x80004,0);
        goto LAB_0047ed1c;
      }
    }
    else {
      if (iVar2 == 1) {
        iVar2 = RSA_verify(*(int *)(param_1 + 0x30),param_4,(uint)param_5,param_2,siglen,
                           *(RSA **)(param_1 + 0x10));
        if (iVar2 == 0) {
          ERR_new();
          ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x306,"rsa_verify");
          ERR_set_error(0x39,0x80004,0);
          uVar4 = 0;
          goto LAB_0047ed1c;
        }
LAB_0047edaa:
        uVar4 = 1;
        goto LAB_0047ed1c;
      }
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x335,"rsa_verify");
      ERR_set_error(0x39,0xa8,"Only X.931, PKCS#1 v1.5 or PSS padding allowed");
    }
  }
LAB_0047ed19:
  uVar4 = 0;
LAB_0047ed1c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

