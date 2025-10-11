
undefined4
ossl_cipher_generic_get_params
          (undefined8 param_1,undefined4 param_2,ulong param_3,ulong param_4,ulong param_5,
          ulong param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = OSSL_PARAM_locate(param_1,"mode");
  if (lVar2 == 0) {
LAB_00482feb:
    lVar2 = OSSL_PARAM_locate(param_1,&DAT_007c47f2);
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_int(lVar2,(uint)param_3 & 1);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x37;
        goto LAB_00483198;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_1,"custom-iv");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_int(lVar2,(uint)(param_3 >> 1) & 1);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x3d;
        goto LAB_00483198;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_1,"cts");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_int(lVar2,(uint)(param_3 >> 2) & 1);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x43;
        goto LAB_00483198;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_1,"tls-multi");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_int(lVar2,(uint)(param_3 >> 3) & 1);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x49;
        goto LAB_00483198;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_1,"has-randkey");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_int(lVar2,(uint)(param_3 >> 4) & 1);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x4f;
        goto LAB_00483198;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_1,"keylen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_size_t(lVar2,param_4 >> 3);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x54;
        goto LAB_00483198;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_1,"blocksize");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_size_t(lVar2,param_5 >> 3);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x59;
        goto LAB_00483198;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_1,"ivlen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_size_t(lVar2,param_6 >> 3);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x5e;
        goto LAB_00483198;
      }
    }
    uVar4 = 1;
  }
  else {
    iVar1 = OSSL_PARAM_set_uint(lVar2,param_2);
    if (iVar1 != 0) goto LAB_00482feb;
    ERR_new();
    uVar3 = 0x31;
LAB_00483198:
    uVar4 = 0;
    ERR_set_debug("../providers/implementations/ciphers/ciphercommon.c",uVar3,
                  "ossl_cipher_generic_get_params");
    ERR_set_error(0x39,0x68,0);
  }
  return uVar4;
}

