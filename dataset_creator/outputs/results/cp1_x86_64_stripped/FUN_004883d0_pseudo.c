
bool FUN_004883d0(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_40;
  long local_38;
  long local_30;
  
  bVar9 = true;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_004884f6;
  lVar6 = thunk_FUN_0041cdd0(param_2,"tag");
  if (lVar6 != 0) {
    local_38 = param_1 + 0xd5;
    iVar5 = FUN_0041e150(lVar6,&local_38,0x10,&local_40);
    if (iVar5 != 0) {
      if ((local_40 == 0) || ((*(byte *)(param_1 + 0x54) & 1) != 0)) {
        FUN_0051f420();
        bVar9 = false;
        FUN_0051f540("../providers/implementations/ciphers/ciphercommon_gcm.c",0xf0,
                     "ossl_gcm_set_ctx_params");
        FUN_0051f8f0(0x39,0x6e,0);
        goto LAB_004884f6;
      }
      *(long *)(param_1 + 0x18) = local_40;
      goto LAB_00488462;
    }
    FUN_0051f420();
    uVar8 = 0xec;
LAB_00488679:
    bVar9 = false;
    FUN_0051f540("../providers/implementations/ciphers/ciphercommon_gcm.c",uVar8,
                 "ossl_gcm_set_ctx_params");
    FUN_0051f8f0(0x39,0x67,0);
    goto LAB_004884f6;
  }
LAB_00488462:
  lVar6 = thunk_FUN_0041cdd0(param_2,"ivlen");
  if (lVar6 != 0) {
    iVar5 = thunk_FUN_0041d830(lVar6,&local_40);
    if (iVar5 == 0) {
      FUN_0051f420();
      uVar8 = 0xf9;
      goto LAB_00488679;
    }
    if (0x7f < local_40 - 1U) {
      FUN_0051f420();
      bVar9 = false;
      FUN_0051f540("../providers/implementations/ciphers/ciphercommon_gcm.c",0xfd,
                   "ossl_gcm_set_ctx_params");
      FUN_0051f8f0(0x39,0x6d,0);
      goto LAB_004884f6;
    }
    *(long *)(param_1 + 0x10) = local_40;
  }
  lVar6 = thunk_FUN_0041cdd0(param_2,"tlsaad");
  if (lVar6 == 0) {
LAB_00488630:
    lVar6 = thunk_FUN_0041cdd0(param_2,"tlsivfixed");
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 8) != 5) {
        FUN_0051f420();
        uVar8 = 0x114;
        goto LAB_004884d4;
      }
      uVar7 = *(ulong *)(lVar6 + 0x18);
      if (uVar7 == 0xffffffffffffffff) {
        thunk_FUN_00713a50(param_1 + 0x55,*(undefined8 *)(lVar6 + 0x10),
                           *(undefined8 *)(param_1 + 0x10));
        *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 0x10;
        *(undefined4 *)(param_1 + 0x50) = 1;
      }
      else {
        if (((uVar7 < 4) || (lVar2 = *(long *)(param_1 + 0x10), (ulong)(lVar2 - (int)uVar7) < 8)) ||
           ((lVar6 = thunk_FUN_00713a50(param_1 + 0x55,*(undefined8 *)(lVar6 + 0x10),uVar7),
            (*(byte *)(param_1 + 0x54) & 1) != 0 &&
            (iVar5 = FUN_00429580(*(undefined8 *)(param_1 + 0xe8),lVar6 + uVar7,lVar2 - uVar7,0),
            iVar5 < 1)))) {
          FUN_0051f420();
          uVar8 = 0x118;
          goto LAB_004884d4;
        }
        *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 0x10;
        *(undefined4 *)(param_1 + 0x50) = 1;
      }
    }
    bVar9 = true;
    lVar6 = thunk_FUN_0041cdd0(param_2,"tlsivinv");
    if (lVar6 != 0) {
      bVar9 = false;
      if ((*(long *)(lVar6 + 0x10) != 0) && (*(int *)(lVar6 + 8) == 5)) {
        iVar5 = FUN_00487ca0(param_1,*(long *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18));
        bVar9 = iVar5 != 0;
      }
    }
  }
  else {
    if (*(int *)(lVar6 + 8) == 5) {
      lVar2 = *(long *)(lVar6 + 0x18);
      puVar3 = *(undefined8 **)(lVar6 + 0x10);
      iVar5 = FUN_0043b840();
      if ((lVar2 == 0xd) && (iVar5 != 0)) {
        *(undefined8 *)(param_1 + 0xd5) = *puVar3;
        *(undefined4 *)(param_1 + 0xdd) = *(undefined4 *)(puVar3 + 1);
        uVar1 = *(undefined1 *)((long)puVar3 + 0xc);
        *(undefined8 *)(param_1 + 0x28) = 0xd;
        *(undefined1 *)(param_1 + 0xe1) = uVar1;
        *(undefined8 *)(param_1 + 0x30) = 0;
        uVar4 = *(ushort *)(param_1 + 0xe0) << 8 | *(ushort *)(param_1 + 0xe0) >> 8;
        if (7 < uVar4) {
          uVar7 = (ulong)uVar4 - 8;
          if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
            if (uVar7 < 0x10) goto LAB_00488537;
            uVar7 = (ulong)uVar4 - 0x18;
          }
          *(undefined8 *)(param_1 + 0x20) = 0x10;
          *(ushort *)(param_1 + 0xe0) = (ushort)uVar7 << 8 | (ushort)uVar7 >> 8;
          local_40 = 0x10;
          goto LAB_00488630;
        }
      }
LAB_00488537:
      local_40 = 0;
      bVar9 = false;
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/ciphercommon_gcm.c",0x10b,
                   "ossl_gcm_set_ctx_params");
      FUN_0051f8f0(0x39,0x6c,0);
      goto LAB_004884f6;
    }
    FUN_0051f420();
    uVar8 = 0x106;
LAB_004884d4:
    bVar9 = false;
    FUN_0051f540("../providers/implementations/ciphers/ciphercommon_gcm.c",uVar8,
                 "ossl_gcm_set_ctx_params");
    FUN_0051f8f0(0x39,0x67,0);
  }
LAB_004884f6:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar9;
}

