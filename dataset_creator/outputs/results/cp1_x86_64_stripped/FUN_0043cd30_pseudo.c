
undefined8 FUN_0043cd30(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined *puVar6;
  long in_FS_OFFSET;
  undefined1 *local_1a0;
  undefined8 local_198;
  int local_190;
  undefined4 uStack_18c;
  undefined1 local_188 [64];
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
  local_1a0 = local_188;
  if (param_1 != (undefined8 *)0x0) {
    if (param_2 == 0) {
LAB_0043d0e0:
      uVar4 = 1;
      goto LAB_0043ce27;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"digest");
    if (lVar3 == 0) {
LAB_0043cea2:
      lVar3 = thunk_FUN_0041cdd0(param_2,"pad-mode");
      if (lVar3 == 0) {
LAB_0043cf5f:
        lVar3 = thunk_FUN_0041cdd0(param_2,"mgf1-digest");
        if (lVar3 == 0) {
LAB_0043cff0:
          lVar3 = thunk_FUN_0041cdd0(param_2,"oaep-label");
          if (lVar3 != 0) {
            local_198 = 0;
            uVar4 = FUN_0041e150(lVar3,&local_198,0,&local_190);
            if ((int)uVar4 == 0) goto LAB_0043ce27;
            FUN_0041ad60(param_1[5],"../providers/implementations/asymciphers/rsa_enc.c",0x21b);
            param_1[5] = local_198;
            param_1[6] = CONCAT44(uStack_18c,local_190);
          }
          lVar3 = thunk_FUN_0041cdd0(param_2,"tls-client-version");
          if (lVar3 != 0) {
            uVar4 = thunk_FUN_0041d240(lVar3,&local_190);
            if ((int)uVar4 == 0) goto LAB_0043ce27;
            *(int *)(param_1 + 7) = local_190;
          }
          lVar3 = thunk_FUN_0041cdd0(param_2,"tls-negotiated-version");
          if (lVar3 != 0) {
            uVar4 = thunk_FUN_0041d240(lVar3,&local_190);
            if ((int)uVar4 == 0) goto LAB_0043ce27;
            *(int *)((long)param_1 + 0x3c) = local_190;
          }
          lVar3 = thunk_FUN_0041cdd0(param_2,"implicit-rejection");
          if (lVar3 != 0) {
            uVar4 = thunk_FUN_0041d240(lVar3,&local_190);
            if ((int)uVar4 == 0) goto LAB_0043ce27;
            *(int *)(param_1 + 8) = local_190;
          }
          goto LAB_0043d0e0;
        }
        iVar1 = FUN_0041e0b0(lVar3,&local_1a0,0x32);
        if (iVar1 != 0) {
          local_1a0 = local_148;
          lVar3 = thunk_FUN_0041cdd0(param_2,"mgf1-properties");
          if (lVar3 == 0) {
            local_1a0 = (undefined1 *)0x0;
          }
          else {
            iVar1 = FUN_0041e0b0(lVar3,&local_1a0,0x100);
            if (iVar1 == 0) goto LAB_0043ce25;
          }
          FUN_00406a50(param_1[4]);
          lVar3 = FUN_004069d0(*param_1,local_188,local_1a0);
          param_1[4] = lVar3;
          if (lVar3 != 0) goto LAB_0043cff0;
        }
      }
      else {
        local_190 = 0;
        if (*(int *)(lVar3 + 8) == 1) {
          iVar2 = thunk_FUN_0041cf60(lVar3,&local_190);
          iVar1 = local_190;
          if (iVar2 != 0) goto LAB_0043cf47;
        }
        else if ((*(int *)(lVar3 + 8) == 4) && (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)) {
          pcVar5 = "pkcs1";
          iVar1 = 1;
          puVar6 = &DAT_008eff80;
          while (iVar2 = thunk_FUN_00712780(lVar3,pcVar5), iVar2 != 0) {
            iVar1 = *(int *)(puVar6 + 0x10);
            if (iVar1 == 0) {
              iVar1 = 0;
              goto LAB_0043cf5b;
            }
            pcVar5 = *(char **)(puVar6 + 0x18);
            puVar6 = puVar6 + 0x10;
          }
LAB_0043cf47:
          local_190 = iVar1;
          if (local_190 != 6) {
            iVar1 = local_190;
            if ((local_190 == 4) && (param_1[3] == 0)) {
              lVar3 = FUN_004069d0(*param_1,&DAT_007d039e,local_148);
              param_1[3] = lVar3;
              iVar1 = local_190;
              if (lVar3 == 0) goto LAB_0043ce25;
            }
LAB_0043cf5b:
            *(int *)(param_1 + 2) = iVar1;
            goto LAB_0043cf5f;
          }
        }
      }
    }
    else {
      iVar1 = FUN_0041e0b0(lVar3,&local_1a0,0x32);
      if (iVar1 != 0) {
        local_1a0 = local_148;
        lVar3 = thunk_FUN_0041cdd0(param_2,"digest-props");
        if ((lVar3 == 0) || (iVar1 = FUN_0041e0b0(lVar3,&local_1a0,0x100), iVar1 != 0)) {
          FUN_00406a50(param_1[3]);
          lVar3 = FUN_004069d0(*param_1,local_188,local_148);
          param_1[3] = lVar3;
          if (lVar3 != 0) goto LAB_0043cea2;
        }
      }
    }
  }
LAB_0043ce25:
  uVar4 = 0;
LAB_0043ce27:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

