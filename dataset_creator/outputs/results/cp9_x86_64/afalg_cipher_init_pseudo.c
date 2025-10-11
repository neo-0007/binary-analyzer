
undefined8 afalg_cipher_init(long param_1,void *param_2)

{
  int iVar1;
  socklen_t __optlen;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  sockaddr *psVar5;
  long in_FS_OFFSET;
  byte bVar6;
  sockaddr local_88;
  undefined1 local_70 [64];
  long local_30;
  
  bVar6 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    lVar2 = EVP_CIPHER_CTX_get0_cipher();
    if (lVar2 != 0) {
      puVar3 = (undefined4 *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      if (puVar3 != (undefined4 *)0x0) {
        iVar1 = EVP_CIPHER_CTX_get_nid(param_1);
        uVar4 = 0;
        if ((8 < iVar1 - 0x1a3U) || ((0x111UL >> ((ulong)(iVar1 - 0x1a3U) & 0x3f) & 1) == 0))
        goto LAB_00436f0a;
        iVar1 = EVP_CIPHER_CTX_get_iv_length(param_1);
        if (iVar1 == 0x10) {
          *(undefined8 *)(puVar3 + 1) = 0xffffffffffffffff;
          psVar5 = &local_88;
          for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
            *(undefined8 *)psVar5 = 0;
            psVar5 = (sockaddr *)((long)psVar5 + ((ulong)bVar6 * -2 + 1) * 8);
          }
          local_88.sa_family = 0x26;
          OPENSSL_strlcpy(local_88.sa_data,"skcipher",0xe);
          OPENSSL_strlcpy(local_70,"cbc(aes)",0x40);
          iVar1 = socket(0x26,5,0);
          puVar3[2] = iVar1;
          if (iVar1 == -1) {
            __fprintf_chk(stderr,1,"ALG_PERR: %s(%d): Failed to open socket : ",
                          "../engines/e_afalg.c",0x1b1);
            perror((char *)0x0);
            ERR_AFALG_error_constprop_0(0x6d,0x1b2);
          }
          else {
            iVar1 = bind(iVar1,&local_88,0x58);
            if (iVar1 < 0) {
              __fprintf_chk(stderr,1,"ALG_PERR: %s(%d): Failed to bind socket : ",
                            "../engines/e_afalg.c",0x1b8);
              perror((char *)0x0);
              ERR_AFALG_error_constprop_0(0x67,0x1b9);
            }
            else {
              iVar1 = accept(puVar3[2],(sockaddr *)0x0,(socklen_t *)0x0);
              puVar3[1] = iVar1;
              if (-1 < iVar1) {
                __optlen = EVP_CIPHER_CTX_get_key_length(param_1);
                if (0 < (int)__optlen) {
                  iVar1 = setsockopt(puVar3[2],0x117,1,param_2,__optlen);
                  if (iVar1 < 0) {
                    __fprintf_chk(stderr,1,"ALG_PERR: %s(%d): Failed to set socket option : ",
                                  "../engines/e_afalg.c",0x19b);
                    perror((char *)0x0);
                    ERR_AFALG_error_constprop_0(0x6a,0x19c);
                  }
                  else {
                    *(undefined8 *)(puVar3 + 6) = 0;
                    lVar2 = syscall(0xce,1,puVar3 + 6);
                    if (-1 < (int)lVar2) {
                      *puVar3 = 0x1890671;
                      *(undefined8 *)(puVar3 + 4) = 0xffffffff;
                      uVar4 = 1;
                      *(undefined1 (*) [16])(puVar3 + 0x10) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])(puVar3 + 0x14) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])(puVar3 + 0x18) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])(puVar3 + 0x1c) = (undefined1  [16])0x0;
                      goto LAB_00436f0a;
                    }
                    __fprintf_chk(stderr,1,"ALG_PERR: %s(%d): io_setup error : ",
                                  "../engines/e_afalg.c",0xfc);
                    perror((char *)0x0);
                    ERR_AFALG_error_constprop_0(0x69,0xfd);
                  }
                }
                close(puVar3[1]);
                close(puVar3[2]);
                goto LAB_00436f08;
              }
              __fprintf_chk(stderr,1,"ALG_PERR: %s(%d): Socket Accept Failed : ",
                            "../engines/e_afalg.c",0x1bf);
              perror((char *)0x0);
              ERR_AFALG_error_constprop_0(0x6e,0x1c0);
            }
          }
          if (-1 < (int)puVar3[2]) {
            close(puVar3[2]);
          }
          if (-1 < (int)puVar3[1]) {
            close(puVar3[1]);
          }
          *(undefined8 *)(puVar3 + 1) = 0xffffffffffffffff;
        }
      }
    }
  }
LAB_00436f08:
  uVar4 = 0;
LAB_00436f0a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

