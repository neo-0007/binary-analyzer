
bool evp_EncryptDecryptUpdate
               (EVP_CIPHER_CTX *param_1,long param_2,uint *param_3,void *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  EVP_CIPHER *pEVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar2 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  uVar4 = param_5;
  if (iVar2 != 0) {
    iVar2 = param_5 + 0xe;
    if (-1 < (int)(param_5 + 7)) {
      iVar2 = param_5 + 7;
    }
    uVar4 = iVar2 >> 3;
  }
  pEVar3 = param_1->cipher;
  uVar1 = pEVar3->block_size;
  if ((pEVar3->flags & 0x100000) == 0) {
    if ((int)param_5 < 1) {
      *param_3 = 0;
      return param_5 == 0;
    }
    iVar2 = ossl_is_partially_overlapping(param_1->buf_len + param_2,param_4,uVar4);
    if (iVar2 == 0) {
      iVar2 = param_1->buf_len;
      if (iVar2 == 0) {
        if ((param_5 & param_1->block_mask) == 0) {
          iVar2 = (*param_1->cipher->cleanup)(param_1);
          if (iVar2 != 0) {
            *param_3 = param_5;
            return true;
          }
          *param_3 = 0;
          return false;
        }
        uVar4 = 0;
        if (0x20 < (int)uVar1) goto LAB_004097d5;
      }
      else {
        if (0x20 < (int)uVar1) {
LAB_004097d5:
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: bl <= (int)sizeof(ctx->buf)","../crypto/evp/evp_enc.c",
                      0x24a);
        }
        iVar5 = uVar1 - iVar2;
        if ((int)param_5 < iVar5) {
          memcpy(param_1->buf + iVar2,param_4,(long)(int)param_5);
          param_1->buf_len = param_1->buf_len + param_5;
          *param_3 = 0;
          return true;
        }
        param_5 = param_5 - iVar5;
        if ((int)(0x7fffffff - uVar1) < (int)(-uVar1 & param_5)) {
          ERR_new();
          ERR_set_debug("../crypto/evp/evp_enc.c",0x25c,"evp_EncryptDecryptUpdate");
          ERR_set_error(6,0xca,0);
          return false;
        }
        memcpy(param_1->buf + iVar2,param_4,(long)iVar5);
        iVar2 = (*param_1->cipher->cleanup)(param_1);
        if (iVar2 == 0) {
          return false;
        }
        param_4 = (void *)((long)param_4 + (long)iVar5);
        uVar4 = uVar1;
      }
      *param_3 = uVar4;
      uVar4 = uVar1 - 1 & param_5;
      iVar2 = param_5 - uVar4;
      if (0 < iVar2) {
        iVar5 = (*param_1->cipher->cleanup)(param_1);
        if (iVar5 == 0) {
          return false;
        }
        *param_3 = *param_3 + iVar2;
      }
      if (uVar4 != 0) {
        memcpy(param_1->buf,(void *)((long)param_4 + (long)iVar2),(long)(int)uVar4);
      }
      param_1->buf_len = uVar4;
      return true;
    }
    ERR_new();
    uVar6 = 0x23c;
LAB_00409659:
    ERR_set_debug("../crypto/evp/evp_enc.c",uVar6,"evp_EncryptDecryptUpdate");
    ERR_set_error(6,0xa2,0);
  }
  else {
    if (uVar1 == 1) {
      iVar2 = ossl_is_partially_overlapping(param_2,param_4,uVar4);
      if (iVar2 != 0) {
        ERR_new();
        uVar6 = 0x22b;
        goto LAB_00409659;
      }
      pEVar3 = param_1->cipher;
    }
    uVar4 = (*pEVar3->cleanup)(param_1);
    if (-1 < (int)uVar4) {
      *param_3 = uVar4;
      return true;
    }
  }
  return false;
}

