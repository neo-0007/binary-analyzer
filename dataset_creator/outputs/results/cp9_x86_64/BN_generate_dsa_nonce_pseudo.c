
uint BN_generate_dsa_nonce
               (BIGNUM *param_1,BIGNUM *param_2,undefined8 param_3,void *param_4,size_t param_5,
               BN_CTX *param_6)

{
  uint num;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  EVP_MD_CTX *ctx;
  undefined8 uVar5;
  uchar *s;
  EVP_MD *type;
  uchar *puVar6;
  BIGNUM *pBVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  uint local_12c;
  undefined1 local_128 [56];
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  iVar1 = BN_num_bits(param_2);
  uVar5 = ossl_bn_get_libctx(param_6);
  if (ctx != (EVP_MD_CTX *)0x0) {
    iVar2 = iVar1 + 0xe;
    if (-1 < iVar1 + 7) {
      iVar2 = iVar1 + 7;
    }
    num = (iVar2 >> 3) + 8;
    s = (uchar *)CRYPTO_malloc(num,"../crypto/bn/bn_rand.c",0x10d);
    if (s != (uchar *)0x0) {
      iVar1 = BN_bn2binpad(param_3,local_a8,0x60);
      if (iVar1 < 0) {
        ERR_new();
        type = (EVP_MD *)0x0;
        ERR_set_debug("../crypto/bn/bn_rand.c",0x118,"BN_generate_dsa_nonce");
        ERR_set_error(3,0x75,0);
        uVar3 = 0;
      }
      else {
        type = (EVP_MD *)EVP_MD_fetch(uVar5,"SHA512",0);
        if (type == (EVP_MD *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/bn/bn_rand.c",0x11e,"BN_generate_dsa_nonce");
          ERR_set_error(3,0x78,0);
          uVar3 = 0;
        }
        else {
          local_12c = 0;
          if (num != 0) {
            do {
              iVar1 = RAND_priv_bytes_ex(uVar5,local_128,0x40,0);
              if (iVar1 < 1) {
                uVar3 = 0;
                goto LAB_004b330c;
              }
              uVar3 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
              if ((((uVar3 == 0) || (uVar3 = EVP_DigestUpdate(ctx,&local_12c,4), uVar3 == 0)) ||
                  (uVar3 = EVP_DigestUpdate(ctx,local_a8,0x60), uVar3 == 0)) ||
                 ((uVar3 = EVP_DigestUpdate(ctx,param_4,param_5), uVar3 == 0 ||
                  (uVar3 = EVP_DigestUpdate(ctx,local_128,0x40), uVar3 == 0)))) goto LAB_004b330c;
              uVar3 = EVP_DigestFinal_ex(ctx,(uchar *)&local_e8,(uint *)0x0);
              if (uVar3 == 0) goto LAB_004b330c;
              uVar3 = num - local_12c;
              if (0x40 < num - local_12c) {
                uVar3 = 0x40;
              }
              puVar6 = s + local_12c;
              if (uVar3 < 8) {
                if ((uVar3 & 4) == 0) {
                  if (uVar3 != 0) {
                    *puVar6 = (uchar)local_e8;
                    if ((uVar3 & 2) != 0) {
                      *(undefined2 *)(puVar6 + ((ulong)uVar3 - 2)) =
                           *(undefined2 *)((long)&uStack_f0 + (ulong)uVar3 + 6);
                    }
                  }
                }
                else {
                  *(undefined4 *)puVar6 = local_e8;
                  *(undefined4 *)(puVar6 + ((ulong)uVar3 - 4)) =
                       *(undefined4 *)((long)&uStack_f0 + (ulong)uVar3 + 4);
                }
              }
              else {
                *(ulong *)puVar6 = CONCAT44(uStack_e4,local_e8);
                *(undefined8 *)(puVar6 + ((ulong)uVar3 - 8)) =
                     *(undefined8 *)((long)&uStack_f0 + (ulong)uVar3);
                lVar8 = (long)puVar6 - ((ulong)(puVar6 + 8) & 0xfffffffffffffff8);
                uVar9 = uVar3 + (int)lVar8 & 0xfffffff8;
                if (7 < uVar9) {
                  uVar4 = 0;
                  do {
                    uVar10 = (ulong)uVar4;
                    uVar4 = uVar4 + 8;
                    *(undefined8 *)(((ulong)(puVar6 + 8) & 0xfffffffffffffff8) + uVar10) =
                         *(undefined8 *)((long)&local_e8 + (uVar10 - lVar8));
                  } while (uVar4 < uVar9);
                }
              }
              local_12c = uVar3 + local_12c;
            } while (local_12c < num);
          }
          pBVar7 = BN_bin2bn(s,num,param_1);
          uVar3 = 0;
          if (pBVar7 != (BIGNUM *)0x0) {
            iVar1 = BN_div((BIGNUM *)0x0,param_1,param_1,param_2,param_6);
            uVar3 = (uint)(iVar1 == 1);
          }
        }
      }
      goto LAB_004b330c;
    }
  }
  type = (EVP_MD *)0x0;
  uVar3 = 0;
  s = (uchar *)0x0;
LAB_004b330c:
  EVP_MD_CTX_free(ctx);
  EVP_MD_free(type);
  CRYPTO_free(s);
  OPENSSL_cleanse(local_a8,0x60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

