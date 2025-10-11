
ulong pkey_rsa_ctrl_str(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  void *ptr;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  BIGNUM *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (char *)0x0) {
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x27e,"pkey_rsa_ctrl_str");
    ERR_set_error(4,0x93,0);
  }
  else {
    iVar1 = strcmp(param_2,"rsa_padding_mode");
    if (iVar1 == 0) {
      iVar1 = strcmp(param_3,"pkcs1");
      if (iVar1 == 0) {
        uVar5 = 1;
      }
      else {
        iVar1 = strcmp(param_3,"none");
        if (iVar1 == 0) {
          uVar5 = 3;
        }
        else {
          iVar1 = strcmp(param_3,"oeap");
          if (iVar1 != 0) {
            iVar1 = strcmp(param_3,"oaep");
            if (iVar1 != 0) {
              iVar1 = strcmp(param_3,"x931");
              if (iVar1 == 0) {
                uVar5 = 5;
              }
              else {
                iVar1 = strcmp(param_3,"pss");
                if (iVar1 != 0) {
                  ERR_new();
                  ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x291,"pkey_rsa_ctrl_str");
                  uVar2 = 0xfffffffe;
                  ERR_set_error(4,0x76,0);
                  goto LAB_00430c26;
                }
                uVar5 = 6;
              }
              goto LAB_00430ad8;
            }
          }
          uVar5 = 4;
        }
      }
LAB_00430ad8:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = EVP_PKEY_CTX_set_rsa_padding(param_1,uVar5);
        return uVar3;
      }
      goto LAB_00430f4f;
    }
    iVar1 = strcmp(param_2,"rsa_pss_saltlen");
    if (iVar1 == 0) {
      iVar1 = strcmp(param_3,"digest");
      uVar3 = 0xffffffff;
      if (iVar1 != 0) {
        iVar1 = strcmp(param_3,"max");
        uVar3 = 0xfffffffd;
        if (iVar1 != 0) {
          iVar1 = strcmp(param_3,"auto");
          uVar3 = 0xfffffffe;
          if (iVar1 != 0) {
            uVar3 = strtoll(param_3,(char **)0x0,10);
            uVar3 = uVar3 & 0xffffffff;
          }
        }
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = EVP_PKEY_CTX_set_rsa_pss_saltlen(param_1,uVar3);
        return uVar3;
      }
      goto LAB_00430f4f;
    }
    iVar1 = strcmp(param_2,"rsa_keygen_bits");
    if (iVar1 == 0) {
      lVar4 = strtoll(param_3,(char **)0x0,10);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = EVP_PKEY_CTX_set_rsa_keygen_bits(param_1,lVar4);
        return uVar3;
      }
      goto LAB_00430f4f;
    }
    iVar1 = strcmp(param_2,"rsa_keygen_pubexp");
    if (iVar1 == 0) {
      local_28 = (BIGNUM *)0x0;
      uVar2 = BN_asc2bn(&local_28,param_3);
      if (uVar2 != 0) {
        uVar2 = EVP_PKEY_CTX_set1_rsa_keygen_pubexp(param_1,local_28);
        BN_free(local_28);
      }
    }
    else {
      iVar1 = strcmp(param_2,"rsa_keygen_primes");
      if (iVar1 == 0) {
        lVar4 = strtoll(param_3,(char **)0x0,10);
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = EVP_PKEY_CTX_set_rsa_keygen_primes(param_1,lVar4);
          return uVar3;
        }
        goto LAB_00430f4f;
      }
      iVar1 = strcmp(param_2,"rsa_mgf1_md");
      if (iVar1 == 0) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = 0x1005;
          uVar6 = 0x7f0;
          goto LAB_00430e91;
        }
        goto LAB_00430f4f;
      }
      if (**(int **)(param_1 + 0x78) == 0x390) {
        iVar1 = strcmp(param_2,"rsa_pss_keygen_mgf1_md");
        if (iVar1 == 0) {
          if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00430f4f;
          uVar5 = 0x1005;
          uVar6 = 4;
          goto LAB_00430e91;
        }
        iVar1 = strcmp(param_2,"rsa_pss_keygen_md");
        if (iVar1 == 0) {
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar5 = 1;
            uVar6 = 4;
            goto LAB_00430e91;
          }
          goto LAB_00430f4f;
        }
        iVar1 = strcmp(param_2,"rsa_pss_keygen_saltlen");
        if (iVar1 == 0) {
          lVar4 = strtoll(param_3,(char **)0x0,10);
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar3 = EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(param_1,lVar4);
            return uVar3;
          }
          goto LAB_00430f4f;
        }
      }
      iVar1 = strcmp(param_2,"rsa_oaep_md");
      if (iVar1 == 0) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = 0x1009;
          uVar6 = 0x600;
LAB_00430e91:
          uVar3 = EVP_PKEY_CTX_md(param_1,uVar6,uVar5,param_3);
          return uVar3;
        }
        goto LAB_00430f4f;
      }
      iVar1 = strcmp(param_2,"rsa_oaep_label");
      if (iVar1 == 0) {
        ptr = (void *)OPENSSL_hexstr2buf(param_3,&local_28);
        uVar2 = 0;
        if (ptr != (void *)0x0) {
          uVar2 = EVP_PKEY_CTX_set0_rsa_oaep_label(param_1,ptr,(ulong)local_28 & 0xffffffff);
          if ((int)uVar2 < 1) {
            CRYPTO_free(ptr);
          }
        }
      }
      else {
        uVar2 = 0xfffffffe;
      }
    }
  }
LAB_00430c26:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar2;
  }
LAB_00430f4f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

