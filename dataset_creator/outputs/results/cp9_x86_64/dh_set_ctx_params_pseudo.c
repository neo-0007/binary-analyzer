
ulong dh_set_ctx_params(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  char *local_f0;
  undefined8 local_e8;
  int local_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = (undefined1  [16])0x0;
  local_f0 = (char *)0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  if (param_1 == (undefined8 *)0x0) goto LAB_00462255;
  if (param_2 == 0) goto LAB_00462400;
  lVar3 = OSSL_PARAM_locate_const(param_2,"kdf-type");
  if (lVar3 == 0) {
LAB_004621f1:
    lVar3 = OSSL_PARAM_locate_const(param_2,"kdf-digest");
    if (lVar3 == 0) {
LAB_004622eb:
      lVar3 = OSSL_PARAM_locate_const(param_2,"kdf-outlen");
      if (lVar3 != 0) {
        uVar5 = OSSL_PARAM_get_size_t(lVar3,&local_e0);
        if ((int)uVar5 == 0) goto LAB_00462257;
        param_1[7] = CONCAT44(uStack_dc,local_e0);
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,&DAT_007d9d1b);
      if (lVar3 != 0) {
        local_e8 = 0;
        CRYPTO_free((void *)param_1[5]);
        lVar1 = *(long *)(lVar3 + 0x10);
        param_1[5] = 0;
        param_1[6] = 0;
        if ((lVar1 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
          uVar5 = OSSL_PARAM_get_octet_string(lVar3,&local_e8,0,&local_e0);
          if ((int)uVar5 == 0) goto LAB_00462257;
          param_1[5] = local_e8;
          param_1[6] = CONCAT44(uStack_dc,local_e0);
        }
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"pad");
      if (lVar3 != 0) {
        iVar2 = OSSL_PARAM_get_uint(lVar3,&local_e0);
        if (iVar2 == 0) goto LAB_00462255;
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfe | local_e0 != 0;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"cekalg");
      if (lVar3 != 0) {
        local_f0 = local_d8;
        CRYPTO_free((void *)param_1[8]);
        lVar1 = *(long *)(lVar3 + 0x10);
        param_1[8] = 0;
        if ((lVar1 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
          iVar2 = OSSL_PARAM_get_utf8_string(lVar3,&local_f0,0x50);
          if (iVar2 != 0) {
            pcVar6 = CRYPTO_strdup(local_d8,"../providers/implementations/exchange/dh_exch.c",0x194)
            ;
            param_1[8] = pcVar6;
            uVar5 = (ulong)(pcVar6 != (char *)0x0);
            goto LAB_00462257;
          }
          goto LAB_00462255;
        }
      }
LAB_00462400:
      uVar5 = 1;
      goto LAB_00462257;
    }
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    local_f0 = local_d8;
    iVar2 = OSSL_PARAM_get_utf8_string(lVar3,&local_f0,0x50);
    if (iVar2 != 0) {
      local_f0 = local_88;
      lVar3 = OSSL_PARAM_locate_const(param_2,"kdf-digest-props");
      if (lVar3 != 0) {
        iVar2 = OSSL_PARAM_get_utf8_string(lVar3,&local_f0,0x50);
        if (iVar2 == 0) goto LAB_00462255;
      }
      EVP_MD_free(param_1[4]);
      uVar4 = EVP_MD_fetch(*param_1,local_d8,local_88);
      param_1[4] = uVar4;
      iVar2 = ossl_digest_is_allowed(*param_1,uVar4);
      if (iVar2 == 0) {
        EVP_MD_free(param_1[4]);
        param_1[4] = 0;
      }
      else if (param_1[4] != 0) goto LAB_004622eb;
    }
  }
  else {
    local_f0 = local_d8;
    iVar2 = OSSL_PARAM_get_utf8_string(lVar3,&local_f0,0x50);
    if (iVar2 != 0) {
      if (local_d8[0] == '\0') {
        *(undefined4 *)((long)param_1 + 0x1c) = 0;
      }
      else {
        iVar2 = strcmp(local_d8,"X942KDF-ASN1");
        if (iVar2 != 0) goto LAB_00462255;
        *(undefined4 *)((long)param_1 + 0x1c) = 1;
      }
      goto LAB_004621f1;
    }
  }
LAB_00462255:
  uVar5 = 0;
LAB_00462257:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

