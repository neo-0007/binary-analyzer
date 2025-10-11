
undefined4
rsa_sign(long param_1,uchar *param_2,ulong *param_3,ulong param_4,uchar *param_5,size_t param_6)

{
  RSA *rsa;
  uchar *from;
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint m_length;
  undefined4 uVar7;
  size_t sVar8;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  sVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = RSA_size(*(RSA **)(param_1 + 0x10));
  uVar5 = (ulong)iVar2;
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar2 = EVP_MD_get_size();
    sVar8 = (size_t)iVar2;
  }
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    if (param_2 == (uchar *)0x0) {
LAB_0047f1eb:
      uVar7 = 1;
      *param_3 = uVar5;
      goto LAB_0047f19b;
    }
    if (param_4 < uVar5) {
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x213,"rsa_sign");
      ERR_set_error(0x39,0xb3,"is %zu, should be at least %zu",param_4,uVar5);
    }
    else {
      m_length = (uint)param_6;
      if (sVar8 == 0) {
        iVar2 = RSA_private_encrypt(m_length,param_5,param_2,*(RSA **)(param_1 + 0x10),
                                    *(int *)(param_1 + 0x68));
        uVar5 = (ulong)iVar2;
LAB_0047f1e3:
        if (0 < (int)uVar5) goto LAB_0047f1eb;
        ERR_new();
        uVar6 = 0x28c;
      }
      else {
        if (param_6 != sVar8) {
          ERR_new();
          uVar7 = 0;
          ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x21a,"rsa_sign");
          ERR_set_error(0x39,0xa6,0);
          goto LAB_0047f19b;
        }
        iVar2 = EVP_MD_is_a(*(undefined8 *)(param_1 + 0x20),&DAT_007c63f5);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0x68);
          uVar7 = 0;
          if (iVar2 != 5) {
            if (iVar2 == 6) {
              iVar2 = *(int *)(param_1 + 0xb4);
              if (iVar2 != -1) {
                iVar3 = *(int *)(param_1 + 0xb0);
                if (iVar3 == -1) {
                  iVar3 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
                  if (iVar3 < iVar2) {
                    ERR_new();
                    ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x259,
                                  "rsa_sign");
                    uVar4 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
                    ERR_set_error(0x39,0xac,
                                  "minimum salt length set to %d, but the digest only gives %d",
                                  *(undefined4 *)(param_1 + 0xb4),uVar4);
                    goto LAB_0047f19b;
                  }
                  iVar3 = *(int *)(param_1 + 0xb0);
                }
                if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0xb4))) {
                  ERR_new();
                  ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x265,"rsa_sign")
                  ;
                  ERR_set_error(0x39,0xac,
                                "minimum salt length set to %d, but theactual salt length is only set to %d"
                                ,*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb0));
                  goto LAB_0047f19b;
                }
              }
              iVar2 = setup_tbuf(param_1);
              if (iVar2 == 0) goto LAB_0047f198;
              iVar2 = RSA_padding_add_PKCS1_PSS_mgf1
                                (*(RSA **)(param_1 + 0x10),*(uchar **)(param_1 + 0xb8),param_5,
                                 *(EVP_MD **)(param_1 + 0x20),*(EVP_MD **)(param_1 + 0x70),
                                 *(int *)(param_1 + 0xb0));
              if (iVar2 != 0) {
                rsa = *(RSA **)(param_1 + 0x10);
                from = *(uchar **)(param_1 + 0xb8);
                iVar2 = RSA_size(rsa);
                iVar2 = RSA_private_encrypt(iVar2,from,param_2,rsa,3);
                lVar1 = *(long *)(param_1 + 0xb8);
                goto joined_r0x0047f4d8;
              }
              ERR_new();
              uVar6 = 0x276;
            }
            else {
              if (iVar2 != 1) {
                ERR_new();
                ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x27f,"rsa_sign");
                ERR_set_error(0x39,0xa8,"Only X.931, PKCS#1 v1.5 or PSS padding allowed");
                goto LAB_0047f19b;
              }
              iVar2 = RSA_sign(*(int *)(param_1 + 0x30),param_5,m_length,param_2,&local_44,
                               *(RSA **)(param_1 + 0x10));
              uVar5 = (ulong)(int)local_44;
              if (0 < iVar2) goto LAB_0047f1e3;
              ERR_new();
              uVar6 = 0x24c;
            }
            uVar7 = 0;
            ERR_set_debug("../providers/implementations/signature/rsa_sig.c",uVar6,"rsa_sign");
            ERR_set_error(0x39,0x80004,0);
            goto LAB_0047f19b;
          }
          iVar2 = RSA_size(*(RSA **)(param_1 + 0x10));
          if ((ulong)(long)iVar2 < param_6 + 1) {
            ERR_new();
            ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x235,"rsa_sign");
            iVar2 = RSA_size(*(RSA **)(param_1 + 0x10));
            ERR_set_error(0x39,0xab,"RSA key size = %d, expected minimum = %d",iVar2,param_6 + 1);
            goto LAB_0047f19b;
          }
          iVar2 = setup_tbuf(param_1);
          if (iVar2 == 0) {
            ERR_new();
            ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x23b,"rsa_sign");
            ERR_set_error(0x39,0xc0100,0);
            uVar7 = 0;
            goto LAB_0047f19b;
          }
          memcpy(*(void **)(param_1 + 0xb8),param_5,param_6);
          iVar2 = RSA_X931_hash_id(*(int *)(param_1 + 0x30));
          *(char *)(*(long *)(param_1 + 0xb8) + param_6) = (char)iVar2;
          iVar2 = RSA_private_encrypt(m_length + 1,*(uchar **)(param_1 + 0xb8),param_2,
                                      *(RSA **)(param_1 + 0x10),5);
          lVar1 = *(long *)(param_1 + 0xb8);
joined_r0x0047f4d8:
          uVar5 = (ulong)iVar2;
          if (lVar1 != 0) {
            iVar2 = RSA_size(*(RSA **)(param_1 + 0x10));
            OPENSSL_cleanse(*(void **)(param_1 + 0xb8),(long)iVar2);
          }
          goto LAB_0047f1e3;
        }
        if (*(int *)(param_1 + 0x68) != 1) {
          ERR_new();
          ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x223,"rsa_sign");
          ERR_set_error(0x39,0xa8,"only PKCS#1 padding supported with MDC2");
          goto LAB_0047f198;
        }
        iVar2 = RSA_sign_ASN1_OCTET_STRING
                          (0,param_5,m_length,param_2,&local_44,*(RSA **)(param_1 + 0x10));
        uVar5 = (ulong)(int)local_44;
        if (0 < iVar2) goto LAB_0047f1e3;
        ERR_new();
        uVar6 = 0x22b;
      }
      ERR_set_debug("../providers/implementations/signature/rsa_sig.c",uVar6,"rsa_sign");
      ERR_set_error(0x39,0x80004,0);
    }
  }
LAB_0047f198:
  uVar7 = 0;
LAB_0047f19b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

