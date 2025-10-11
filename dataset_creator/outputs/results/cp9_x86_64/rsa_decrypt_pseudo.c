
ulong rsa_decrypt(undefined8 *param_1,uchar *param_2,ulong *param_3,ulong param_4,uchar *param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uchar *to;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = RSA_size((RSA *)param_1[1]);
  uVar3 = ossl_prov_is_running();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  iVar2 = *(int *)(param_1 + 2);
  uVar3 = (ulong)iVar1;
  if (iVar2 == 7) {
    if (param_2 == (uchar *)0x0) {
      *param_3 = 0x30;
      return 1;
    }
    if (param_4 < 0x30) {
      ERR_new();
      uVar5 = 0xd7;
      goto LAB_0043b141;
    }
  }
  else {
    if (param_2 == (uchar *)0x0) {
      if (uVar3 != 0) {
        *param_3 = uVar3;
        return 1;
      }
      ERR_new();
      ERR_set_debug("../providers/implementations/asymciphers/rsa_enc.c",0xdd,"rsa_decrypt");
      ERR_set_error(0x39,0x9e,0);
      return 0;
    }
    if (param_4 < uVar3) {
      ERR_new();
      uVar5 = 0xe5;
LAB_0043b141:
      ERR_set_debug("../providers/implementations/asymciphers/rsa_enc.c",uVar5,"rsa_decrypt");
      ERR_set_error(0x39,0x8e,0);
      return 0;
    }
    if (iVar2 != 4) {
      if ((*(int *)(param_1 + 8) == 0) && (iVar2 == 1)) {
        iVar2 = 8;
      }
      iVar1 = RSA_private_decrypt(param_6,param_5,param_2,(RSA *)param_1[1],iVar2);
      goto LAB_0043b009;
    }
  }
  to = (uchar *)CRYPTO_malloc(iVar1,"../providers/implementations/asymciphers/rsa_enc.c",0xee);
  if (to == (uchar *)0x0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/asymciphers/rsa_enc.c",0xef,"rsa_decrypt");
    ERR_set_error(0x39,0xc0100,0);
    return 0;
  }
  iVar2 = RSA_private_decrypt(param_6,param_5,to,(RSA *)param_1[1],3);
  if (iVar1 != iVar2) {
    CRYPTO_free(to);
    ERR_new();
    ERR_set_debug("../providers/implementations/asymciphers/rsa_enc.c",0xfa,"rsa_decrypt");
    ERR_set_error(0x39,0xa2,0);
    return 0;
  }
  if (*(int *)(param_1 + 2) == 4) {
    lVar4 = param_1[3];
    if (lVar4 == 0) {
      lVar4 = EVP_MD_fetch(*param_1,"SHA-1",0);
      param_1[3] = lVar4;
      if (lVar4 == 0) {
        CRYPTO_free(to);
        ERR_new();
        ERR_set_debug("../providers/implementations/asymciphers/rsa_enc.c",0x102,"rsa_decrypt");
        ERR_set_error(0x39,0xc0103,0);
        return 0;
      }
    }
    iVar1 = RSA_padding_check_PKCS1_OAEP_mgf1
                      (param_2,param_4 & 0xffffffff,to,iVar1,iVar1,param_1[5],param_1[6],lVar4,
                       param_1[4]);
  }
  else {
    if (*(int *)(param_1 + 7) == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/asymciphers/rsa_enc.c",0x10f,"rsa_decrypt");
      ERR_set_error(0x39,0xa1,0);
      CRYPTO_free(to);
      return 0;
    }
    iVar1 = ossl_rsa_padding_check_PKCS1_type_2_TLS
                      (*param_1,param_2,param_4,to,uVar3,*(int *)(param_1 + 7),
                       *(undefined4 *)((long)param_1 + 0x3c));
  }
  CRYPTO_free(to);
LAB_0043b009:
  uVar3 = (long)iVar1 >> 0x3f;
  *param_3 = uVar3 & *param_3 | (long)iVar1 & ~uVar3;
  return (ulong)(~(iVar1 >> 0x1f) & 1);
}

