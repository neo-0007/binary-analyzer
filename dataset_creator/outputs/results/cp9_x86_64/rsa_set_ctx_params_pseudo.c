
bool rsa_set_ctx_params(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 *puVar9;
  char *__s2;
  uint uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  uint local_2f0;
  int local_2ec;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined2 local_298;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined2 local_258;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c8 = (undefined1  [16])0x0;
  local_298 = 0;
  local_2e8 = (undefined *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2b8 = (undefined1  [16])0x0;
  local_2a8 = (undefined1  [16])0x0;
  local_248 = (undefined1  [16])0x0;
  local_238 = (undefined1  [16])0x0;
  local_228 = (undefined1  [16])0x0;
  local_218 = (undefined1  [16])0x0;
  local_208 = (undefined1  [16])0x0;
  local_1f8 = (undefined1  [16])0x0;
  local_1e8 = (undefined1  [16])0x0;
  local_1d8 = (undefined1  [16])0x0;
  local_1c8 = (undefined1  [16])0x0;
  local_1b8 = (undefined1  [16])0x0;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  local_168 = (undefined1  [16])0x0;
  local_158 = (undefined1  [16])0x0;
  local_288 = (undefined1  [16])0x0;
  local_278 = (undefined1  [16])0x0;
  local_258 = 0;
  local_2d8 = (undefined1 *)0x0;
  local_2d0 = (undefined1 *)0x0;
  local_268 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (param_1 == 0) goto LAB_0047d428;
  bVar11 = true;
  if (param_2 == 0) goto LAB_0047d42a;
  local_2f0 = *(uint *)(param_1 + 0x68);
  local_2ec = *(int *)(param_1 + 0xb0);
  lVar5 = OSSL_PARAM_locate_const(param_2,"digest");
  if (lVar5 != 0) {
    lVar6 = OSSL_PARAM_locate_const(param_2,"properties");
    local_2e8 = local_2c8;
    iVar3 = OSSL_PARAM_get_utf8_string(lVar5,&local_2e8,0x32);
    if (iVar3 != 0) {
      if (lVar6 != 0) {
        local_2e0 = local_248;
        iVar3 = OSSL_PARAM_get_utf8_string(lVar6,&local_2e0,0x100);
        if (iVar3 == 0) goto LAB_0047d428;
      }
      goto LAB_0047d34f;
    }
    goto LAB_0047d428;
  }
LAB_0047d34f:
  lVar5 = OSSL_PARAM_locate_const(param_2,"pad-mode");
  if (lVar5 == 0) goto LAB_0047d458;
  if (*(int *)(lVar5 + 8) == 1) {
    iVar3 = OSSL_PARAM_get_int(lVar5,&local_2f0);
    uVar2 = local_2f0;
    if (iVar3 != 0) goto LAB_0047d547;
    goto LAB_0047d428;
  }
  if ((*(int *)(lVar5 + 8) != 4) || (pcVar8 = *(char **)(lVar5 + 0x10), pcVar8 == (char *)0x0))
  goto LAB_0047d428;
  __s2 = "pkcs1";
  uVar10 = 1;
  puVar9 = padding_item;
  while (iVar3 = strcmp(pcVar8,__s2), uVar2 = uVar10, iVar3 != 0) {
    uVar10 = *(uint *)(puVar9 + 0x10);
    uVar2 = local_2f0;
    if (uVar10 == 0) break;
    __s2 = *(char **)(puVar9 + 0x18);
    puVar9 = puVar9 + 0x10;
  }
LAB_0047d547:
  local_2f0 = uVar2;
  switch(local_2f0) {
  default:
    ERR_new();
    ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x4da,"rsa_set_ctx_params");
    pcVar8 = (char *)0x0;
    goto LAB_0047d411;
  case 1:
    pcVar8 = "PKCS#1 padding not allowed with RSA-PSS";
    break;
  case 3:
    pcVar8 = "No padding not allowed with RSA-PSS";
    break;
  case 4:
    pcVar8 = "OAEP padding not allowed for signing / verifying";
    goto LAB_0047d3f1;
  case 5:
    pcVar8 = "X.931 padding not allowed with RSA-PSS";
    break;
  case 6:
    if ((*(byte *)(param_1 + 0x18) & 0x30) != 0) goto LAB_0047d458;
    pcVar8 = "PSS padding only allowed for sign and verify operations";
    goto LAB_0047d3f1;
  }
  iVar3 = RSA_test_flags(*(undefined8 *)(param_1 + 0x10),0xf000);
  if (iVar3 != 0) {
LAB_0047d3f1:
    ERR_new();
    ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x4dd,"rsa_set_ctx_params");
LAB_0047d411:
    ERR_set_error(0x39,0xa5,pcVar8);
    goto LAB_0047d428;
  }
LAB_0047d458:
  lVar5 = OSSL_PARAM_locate_const(param_2,"saltlen");
  if (lVar5 == 0) goto LAB_0047d570;
  if (local_2f0 != 6) {
    ERR_new();
    ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x4e7,"rsa_set_ctx_params");
    ERR_set_error(0x39,0x88,
                  "PSS saltlen can only be specified if PSS padding has been specified first");
    bVar11 = false;
    goto LAB_0047d42a;
  }
  if (*(int *)(lVar5 + 8) == 1) {
    iVar3 = OSSL_PARAM_get_int(lVar5,&local_2ec);
    if (iVar3 != 0) {
LAB_0047d73e:
      if (local_2ec < -3) {
        ERR_new();
        ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x506,"rsa_set_ctx_params")
        ;
        pcVar8 = (char *)0x0;
LAB_0047d517:
        ERR_set_error(0x39,0x70,pcVar8);
        bVar11 = false;
        goto LAB_0047d42a;
      }
      iVar3 = *(int *)(param_1 + 0xb4);
      if (iVar3 != -1) {
        if (local_2ec == -2) {
LAB_0047d4e9:
          if (*(int *)(param_1 + 0x18) == 0x20) {
            ERR_new();
            ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x50e,
                          "rsa_set_ctx_params");
            pcVar8 = "Cannot use autodetected salt length";
            goto LAB_0047d517;
          }
        }
        else {
          if (local_2ec == -1) goto LAB_0047d7d7;
          if ((local_2ec < iVar3) && (-1 < local_2ec)) {
            ERR_new();
            ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x520,
                          "rsa_set_ctx_params");
            uVar1 = *(undefined4 *)(param_1 + 0xb4);
            pcVar8 = "Should be more than %d, but would be set to %d";
            iVar3 = local_2ec;
            goto LAB_0047d7a3;
          }
        }
      }
      goto LAB_0047d570;
    }
  }
  else if (*(int *)(lVar5 + 8) == 4) {
    pcVar8 = *(char **)(lVar5 + 0x10);
    iVar3 = strcmp(pcVar8,"digest");
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0xb4);
      local_2ec = -1;
      if (iVar3 != -1) {
LAB_0047d7d7:
        iVar4 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
        if (iVar4 < iVar3) {
          ERR_new();
          ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x515,
                        "rsa_set_ctx_params");
          iVar3 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
          uVar1 = *(undefined4 *)(param_1 + 0xb4);
          pcVar8 = "Should be more than %d, but would be set to match digest size (%d)";
LAB_0047d7a3:
          ERR_set_error(0x39,0xac,pcVar8,uVar1,iVar3);
          bVar11 = false;
          goto LAB_0047d42a;
        }
      }
    }
    else {
      iVar3 = strcmp(pcVar8,"max");
      if (iVar3 == 0) {
        local_2ec = -3;
      }
      else {
        iVar3 = strcmp(pcVar8,"auto");
        if (iVar3 != 0) {
          lVar7 = strtoll(pcVar8,(char **)0x0,10);
          local_2ec = (int)lVar7;
          goto LAB_0047d73e;
        }
        local_2ec = -2;
        if (*(int *)(param_1 + 0xb4) != -1) goto LAB_0047d4e9;
      }
    }
LAB_0047d570:
    lVar5 = OSSL_PARAM_locate_const(param_2,"mgf1-digest");
    if (lVar5 != 0) {
      lVar6 = OSSL_PARAM_locate_const(param_2,"mgf1-properties");
      local_2d8 = local_288;
      iVar3 = OSSL_PARAM_get_utf8_string(lVar5,&local_2d8,0x32);
      if (iVar3 == 0) goto LAB_0047d428;
      if (lVar6 != 0) {
        local_2d0 = local_148;
        iVar3 = OSSL_PARAM_get_utf8_string(lVar6,&local_2d0,0x100);
        if (iVar3 == 0) goto LAB_0047d428;
      }
      if (local_2f0 != 6) {
        ERR_new();
        ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x53d,"rsa_set_ctx_params")
        ;
        ERR_set_error(0x39,0xa7,0);
        bVar11 = false;
        goto LAB_0047d42a;
      }
    }
    *(uint *)(param_1 + 0x68) = local_2f0;
    *(int *)(param_1 + 0xb0) = local_2ec;
    if (((*(long *)(param_1 + 0x20) == 0) && (local_2e8 == (undefined *)0x0)) && (local_2f0 == 6)) {
      local_2e8 = &DAT_007c6514;
      if (local_2d8 != (undefined1 *)0x0) {
LAB_0047d61c:
        iVar3 = rsa_setup_mgf1_md(param_1,local_2d8,local_2d0);
        if (iVar3 == 0) goto LAB_0047d428;
        goto LAB_0047d631;
      }
    }
    else {
      if (local_2d8 != (undefined1 *)0x0) goto LAB_0047d61c;
LAB_0047d631:
      if (local_2e8 == (undefined *)0x0) {
        iVar3 = rsa_check_padding(param_1,0,0,*(undefined4 *)(param_1 + 0x30));
        bVar11 = iVar3 != 0;
        goto LAB_0047d42a;
      }
    }
    iVar3 = rsa_setup_md(param_1,local_2e8,local_2e0);
    bVar11 = iVar3 != 0;
    goto LAB_0047d42a;
  }
LAB_0047d428:
  bVar11 = false;
LAB_0047d42a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar11;
}

