
int EVP_BytesToKey(EVP_CIPHER *type,EVP_MD *md,uchar *salt,uchar *data,int datal,int count,
                  uchar *key,uchar *iv)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  EVP_MD_CTX *ctx;
  uchar *puVar4;
  uchar *puVar5;
  long in_FS_OFFSET;
  int local_d4;
  int local_c0;
  int local_bc;
  uchar *local_b0;
  uchar *local_a8;
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_b0 = key;
  local_a8 = iv;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  local_d4 = EVP_CIPHER_get_key_length();
  local_c0 = EVP_CIPHER_get_iv_length(type);
  if (0x40 < local_d4) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: nkey <= EVP_MAX_KEY_LENGTH","../crypto/evp/evp_key.c",0x5a);
  }
  if (0x10 < local_c0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: niv <= EVP_MAX_IV_LENGTH","../crypto/evp/evp_key.c",0x5b);
  }
  if (data != (uchar *)0x0) {
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    local_bc = 0;
    if (ctx != (EVP_MD_CTX *)0x0) {
      while ((iVar1 = EVP_DigestInit_ex(ctx,md,(ENGINE *)0x0), iVar1 != 0 &&
             ((((local_bc == 0 ||
                (iVar1 = EVP_DigestUpdate(ctx,local_88,(ulong)local_8c), iVar1 != 0)) &&
               (iVar1 = EVP_DigestUpdate(ctx,data,(long)datal), iVar1 != 0)) &&
              ((salt == (uchar *)0x0 || (iVar1 = EVP_DigestUpdate(ctx,salt,8), iVar1 != 0))))))) {
        iVar1 = EVP_DigestFinal_ex(ctx,local_88,&local_8c);
        if (iVar1 == 0) break;
        iVar1 = 1;
        if (1 < (uint)count) {
          do {
            iVar2 = EVP_DigestInit_ex(ctx,md,(ENGINE *)0x0);
            if (((iVar2 == 0) ||
                (iVar2 = EVP_DigestUpdate(ctx,local_88,(ulong)local_8c), iVar2 == 0)) ||
               (iVar2 = EVP_DigestFinal_ex(ctx,local_88,&local_8c), iVar2 == 0)) goto LAB_005f43f2;
            iVar1 = iVar1 + 1;
          } while (iVar1 != count);
        }
        uVar3 = 0;
        if (local_d4 != 0) {
          uVar3 = 0;
          puVar5 = local_88;
          do {
            iVar1 = local_d4 - uVar3;
            if (local_8c == uVar3) {
              local_d4 = iVar1;
              if ((local_c0 != 0) || (iVar1 != 0)) goto LAB_005f4486;
              goto LAB_005f4510;
            }
            puVar4 = local_b0;
            if (local_b0 != (uchar *)0x0) {
              puVar4 = local_b0 + 1;
              *local_b0 = *puVar5;
            }
            puVar5 = puVar5 + 1;
            uVar3 = uVar3 + 1;
            local_b0 = puVar4;
          } while (puVar5 != local_88 + (ulong)(local_d4 - 1) + 1);
        }
        while( true ) {
          if (local_c0 == 0) goto LAB_005f4510;
          if (local_8c == uVar3) break;
          puVar5 = local_a8;
          if (local_a8 != (uchar *)0x0) {
            puVar5 = local_a8 + 1;
            *local_a8 = local_88[uVar3];
          }
          uVar3 = uVar3 + 1;
          local_c0 = local_c0 + -1;
          local_a8 = puVar5;
        }
        local_d4 = 0;
LAB_005f4486:
        local_bc = local_bc + 1;
      }
    }
LAB_005f43f2:
    local_d4 = 0;
LAB_005f43fa:
    EVP_MD_CTX_free(ctx);
    OPENSSL_cleanse(local_88,0x40);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_d4;
LAB_005f4510:
  local_d4 = EVP_CIPHER_get_key_length(type);
  goto LAB_005f43fa;
}

