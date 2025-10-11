
undefined8
ossl_siv128_init(undefined1 (*param_1) [16],long param_2,int param_3,long param_4,
                EVP_CIPHER *param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  EVP_CIPHER_CTX *pEVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0x10;
  if (param_1 != (undefined1 (*) [16])0x0) {
    *param_1 = (undefined1  [16])0x0;
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)param_1[2]);
    EVP_MAC_CTX_free(*(undefined8 *)param_1[3]);
    EVP_MAC_free(*(undefined8 *)(param_1[2] + 8));
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)param_1[2] = 0;
    *(undefined8 *)param_1[3] = 0;
    if ((param_4 != 0 && param_5 != (EVP_CIPHER *)0x0) && (param_2 != 0)) {
      uVar2 = EVP_CIPHER_get0_name(param_4);
      OSSL_PARAM_construct_utf8_string(&local_f8,"cipher",uVar2,0);
      local_98 = local_d8;
      local_b8 = local_f8;
      uStack_b0 = uStack_f0;
      local_a8 = local_e8;
      uStack_a0 = uStack_e0;
      OSSL_PARAM_construct_octet_string(&local_f8,"key",param_2,(long)param_3);
      local_90 = local_f8;
      uStack_88 = uStack_f0;
      local_70 = local_d8;
      local_80 = local_e8;
      uStack_78 = uStack_e0;
      OSSL_PARAM_construct_end();
      local_68 = local_f8;
      uStack_60 = uStack_f0;
      local_48 = local_d8;
      local_58 = local_e8;
      uStack_50 = uStack_e0;
      pEVar3 = EVP_CIPHER_CTX_new();
      *(EVP_CIPHER_CTX **)param_1[2] = pEVar3;
      if (pEVar3 == (EVP_CIPHER_CTX *)0x0) {
        pEVar3 = (EVP_CIPHER_CTX *)0x0;
        lVar4 = 0;
      }
      else {
        lVar4 = EVP_MAC_fetch(param_6,"CMAC",param_7);
        *(long *)(param_1[2] + 8) = lVar4;
        if (lVar4 != 0) {
          lVar4 = EVP_MAC_CTX_new(lVar4);
          *(long *)param_1[3] = lVar4;
          if (lVar4 != 0) {
            iVar1 = EVP_MAC_CTX_set_params(lVar4,&local_b8);
            if (iVar1 != 0) {
              iVar1 = EVP_EncryptInit_ex(*(EVP_CIPHER_CTX **)param_1[2],param_5,(ENGINE *)0x0,
                                         (uchar *)(param_2 + param_3),(uchar *)0x0);
              if (iVar1 != 0) {
                lVar4 = EVP_MAC_CTX_dup(*(undefined8 *)param_1[3]);
                if (lVar4 != 0) {
                  iVar1 = EVP_MAC_update(lVar4,zero_0,0x10);
                  if (iVar1 != 0) {
                    iVar1 = EVP_MAC_final(lVar4,param_1,&local_c0,0x10);
                    if (iVar1 != 0) {
                      EVP_MAC_CTX_free(lVar4);
                      *(undefined8 *)(param_1[3] + 8) = 0x1ffffffff;
                      uVar2 = 1;
                      goto LAB_0053dddc;
                    }
                  }
                }
                goto LAB_0053ddb0;
              }
            }
            pEVar3 = *(EVP_CIPHER_CTX **)param_1[2];
            lVar4 = 0;
            goto LAB_0053ddb4;
          }
        }
LAB_0053ddb0:
        pEVar3 = *(EVP_CIPHER_CTX **)param_1[2];
      }
LAB_0053ddb4:
      EVP_CIPHER_CTX_free(pEVar3);
      EVP_MAC_CTX_free(*(undefined8 *)param_1[3]);
      EVP_MAC_CTX_free(lVar4);
      EVP_MAC_free(*(undefined8 *)(param_1[2] + 8));
    }
  }
  uVar2 = 0;
LAB_0053dddc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

