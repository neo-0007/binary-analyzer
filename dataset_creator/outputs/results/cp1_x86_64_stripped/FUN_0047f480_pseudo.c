
bool FUN_0047f480(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  char *pcVar9;
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
  if (param_1 == 0) goto LAB_0047f788;
  bVar11 = true;
  if (param_2 == 0) goto LAB_0047f78a;
  local_2f0 = *(uint *)(param_1 + 0x68);
  local_2ec = *(int *)(param_1 + 0xb0);
  lVar6 = thunk_FUN_0041cdd0(param_2,"digest");
  if (lVar6 != 0) {
    lVar7 = thunk_FUN_0041cdd0(param_2,"properties");
    local_2e8 = local_2c8;
    iVar4 = FUN_0041e0b0(lVar6,&local_2e8,0x32);
    if (iVar4 != 0) {
      if (lVar7 != 0) {
        local_2e0 = local_248;
        iVar4 = FUN_0041e0b0(lVar7,&local_2e0,0x100);
        if (iVar4 == 0) goto LAB_0047f788;
      }
      goto LAB_0047f6af;
    }
    goto LAB_0047f788;
  }
LAB_0047f6af:
  lVar6 = thunk_FUN_0041cdd0(param_2,"pad-mode");
  if (lVar6 == 0) goto LAB_0047f7b8;
  if (*(int *)(lVar6 + 8) == 1) {
    iVar4 = thunk_FUN_0041cf60(lVar6,&local_2f0);
    uVar3 = local_2f0;
    if (iVar4 != 0) goto LAB_0047f8a7;
    goto LAB_0047f788;
  }
  if ((*(int *)(lVar6 + 8) != 4) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0))
  goto LAB_0047f788;
  pcVar9 = "pkcs1";
  uVar10 = 1;
  puVar8 = &DAT_00900b00;
  while (iVar4 = thunk_FUN_00712780(lVar6,pcVar9), uVar3 = uVar10, iVar4 != 0) {
    uVar10 = *(uint *)(puVar8 + 0x10);
    uVar3 = local_2f0;
    if (uVar10 == 0) break;
    pcVar9 = *(char **)(puVar8 + 0x18);
    puVar8 = puVar8 + 0x10;
  }
LAB_0047f8a7:
  local_2f0 = uVar3;
  switch(local_2f0) {
  default:
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x4da,"rsa_set_ctx_params");
    pcVar9 = (char *)0x0;
    goto LAB_0047f771;
  case 1:
    pcVar9 = "PKCS#1 padding not allowed with RSA-PSS";
    break;
  case 3:
    pcVar9 = "No padding not allowed with RSA-PSS";
    break;
  case 4:
    pcVar9 = "OAEP padding not allowed for signing / verifying";
    goto LAB_0047f751;
  case 5:
    pcVar9 = "X.931 padding not allowed with RSA-PSS";
    break;
  case 6:
    if ((*(byte *)(param_1 + 0x18) & 0x30) != 0) goto LAB_0047f7b8;
    pcVar9 = "PSS padding only allowed for sign and verify operations";
    goto LAB_0047f751;
  }
  iVar4 = FUN_0042c5e0(*(undefined8 *)(param_1 + 0x10),0xf000);
  if (iVar4 != 0) {
LAB_0047f751:
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x4dd,"rsa_set_ctx_params");
LAB_0047f771:
    FUN_0051f8f0(0x39,0xa5,pcVar9);
    goto LAB_0047f788;
  }
LAB_0047f7b8:
  lVar6 = thunk_FUN_0041cdd0(param_2,"saltlen");
  if (lVar6 == 0) goto LAB_0047f8d0;
  if (local_2f0 != 6) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x4e7,"rsa_set_ctx_params");
    FUN_0051f8f0(0x39,0x88,
                 "PSS saltlen can only be specified if PSS padding has been specified first");
    bVar11 = false;
    goto LAB_0047f78a;
  }
  if (*(int *)(lVar6 + 8) == 1) {
    iVar4 = thunk_FUN_0041cf60(lVar6,&local_2ec);
    if (iVar4 != 0) {
LAB_0047fa9e:
      if (local_2ec < -3) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x506,"rsa_set_ctx_params");
        pcVar9 = (char *)0x0;
LAB_0047f877:
        FUN_0051f8f0(0x39,0x70,pcVar9);
        bVar11 = false;
        goto LAB_0047f78a;
      }
      iVar4 = *(int *)(param_1 + 0xb4);
      if (iVar4 != -1) {
        if (local_2ec == -2) {
LAB_0047f849:
          if (*(int *)(param_1 + 0x18) == 0x20) {
            FUN_0051f420();
            FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x50e,
                         "rsa_set_ctx_params");
            pcVar9 = "Cannot use autodetected salt length";
            goto LAB_0047f877;
          }
        }
        else {
          if (local_2ec == -1) goto LAB_0047fb37;
          if ((local_2ec < iVar4) && (-1 < local_2ec)) {
            FUN_0051f420();
            FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x520,
                         "rsa_set_ctx_params");
            uVar1 = *(undefined4 *)(param_1 + 0xb4);
            pcVar9 = "Should be more than %d, but would be set to %d";
            iVar4 = local_2ec;
            goto LAB_0047fb03;
          }
        }
      }
      goto LAB_0047f8d0;
    }
  }
  else if (*(int *)(lVar6 + 8) == 4) {
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    iVar4 = thunk_FUN_00712780(uVar2,"digest");
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0xb4);
      local_2ec = -1;
      if (iVar4 != -1) {
LAB_0047fb37:
        iVar5 = FUN_0040ac10(*(undefined8 *)(param_1 + 0x20));
        if (iVar5 < iVar4) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x515,"rsa_set_ctx_params"
                      );
          iVar4 = FUN_0040ac10(*(undefined8 *)(param_1 + 0x20));
          uVar1 = *(undefined4 *)(param_1 + 0xb4);
          pcVar9 = "Should be more than %d, but would be set to match digest size (%d)";
LAB_0047fb03:
          FUN_0051f8f0(0x39,0xac,pcVar9,uVar1,iVar4);
          bVar11 = false;
          goto LAB_0047f78a;
        }
      }
    }
    else {
      iVar4 = thunk_FUN_00712780(uVar2,"max");
      if (iVar4 == 0) {
        local_2ec = -3;
      }
      else {
        iVar4 = thunk_FUN_00712780(uVar2,&DAT_007dcf1c);
        if (iVar4 != 0) {
          local_2ec = FUN_006e94d0(uVar2,0,10);
          goto LAB_0047fa9e;
        }
        local_2ec = -2;
        if (*(int *)(param_1 + 0xb4) != -1) goto LAB_0047f849;
      }
    }
LAB_0047f8d0:
    lVar6 = thunk_FUN_0041cdd0(param_2,"mgf1-digest");
    if (lVar6 != 0) {
      lVar7 = thunk_FUN_0041cdd0(param_2,"mgf1-properties");
      local_2d8 = local_288;
      iVar4 = FUN_0041e0b0(lVar6,&local_2d8,0x32);
      if (iVar4 == 0) goto LAB_0047f788;
      if (lVar7 != 0) {
        local_2d0 = local_148;
        iVar4 = FUN_0041e0b0(lVar7,&local_2d0,0x100);
        if (iVar4 == 0) goto LAB_0047f788;
      }
      if (local_2f0 != 6) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x53d,"rsa_set_ctx_params");
        FUN_0051f8f0(0x39,0xa7,0);
        bVar11 = false;
        goto LAB_0047f78a;
      }
    }
    *(uint *)(param_1 + 0x68) = local_2f0;
    *(int *)(param_1 + 0xb0) = local_2ec;
    if (((*(long *)(param_1 + 0x20) == 0) && (local_2e8 == (undefined *)0x0)) && (local_2f0 == 6)) {
      local_2e8 = &DAT_007d039e;
      if (local_2d8 != (undefined1 *)0x0) {
LAB_0047f97c:
        iVar4 = FUN_0047f030(param_1,local_2d8,local_2d0);
        if (iVar4 == 0) goto LAB_0047f788;
        goto LAB_0047f991;
      }
    }
    else {
      if (local_2d8 != (undefined1 *)0x0) goto LAB_0047f97c;
LAB_0047f991:
      if (local_2e8 == (undefined *)0x0) {
        iVar4 = FUN_0047eee0(param_1,0,0,*(undefined4 *)(param_1 + 0x30));
        bVar11 = iVar4 != 0;
        goto LAB_0047f78a;
      }
    }
    iVar4 = FUN_0047f1c0(param_1,local_2e8,local_2e0);
    bVar11 = iVar4 != 0;
    goto LAB_0047f78a;
  }
LAB_0047f788:
  bVar11 = false;
LAB_0047f78a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar11;
}

