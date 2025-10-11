
undefined8 FUN_004650d0(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 *local_f0;
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
  local_f0 = (undefined1 *)0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  if (param_1 == (undefined8 *)0x0) goto LAB_00465348;
  if (param_2 == 0) {
LAB_00465320:
    uVar3 = 1;
  }
  else {
    lVar2 = thunk_FUN_0041cdd0(param_2,"ecdh-cofactor-mode");
    if (lVar2 == 0) {
LAB_00465170:
      lVar2 = thunk_FUN_0041cdd0(param_2,"kdf-type");
      if (lVar2 != 0) {
        local_f0 = local_d8;
        iVar1 = FUN_0041e0b0(lVar2,&local_f0,0x50);
        if (iVar1 == 0) goto LAB_00465348;
        if (local_d8[0] == '\0') {
          *(undefined4 *)((long)param_1 + 0x1c) = 0;
        }
        else {
          iVar1 = thunk_FUN_00712780(local_d8,"X963KDF");
          if (iVar1 != 0) goto LAB_00465348;
          *(undefined4 *)((long)param_1 + 0x1c) = 1;
        }
      }
      lVar2 = thunk_FUN_0041cdd0(param_2,"kdf-digest");
      if (lVar2 == 0) {
LAB_00465291:
        lVar2 = thunk_FUN_0041cdd0(param_2,"kdf-outlen");
        if (lVar2 != 0) {
          uVar3 = thunk_FUN_0041d830(lVar2,&local_e0);
          if ((int)uVar3 == 0) goto LAB_0046534a;
          param_1[7] = CONCAT44(uStack_dc,local_e0);
        }
        lVar2 = thunk_FUN_0041cdd0(param_2,&DAT_007e431b);
        if (lVar2 != 0) {
          local_e8 = 0;
          uVar3 = FUN_0041e150(lVar2,&local_e8,0,&local_e0);
          if ((int)uVar3 == 0) goto LAB_0046534a;
          FUN_0041ad60(param_1[5],"../providers/implementations/exchange/ecdh_exch.c",0x136);
          param_1[5] = local_e8;
          param_1[6] = CONCAT44(uStack_dc,local_e0);
        }
        goto LAB_00465320;
      }
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      local_48 = (undefined1  [16])0x0;
      local_f0 = local_d8;
      iVar1 = FUN_0041e0b0(lVar2,&local_f0,0x50);
      if (iVar1 != 0) {
        local_f0 = local_88;
        lVar2 = thunk_FUN_0041cdd0(param_2,"kdf-digest-props");
        if (lVar2 != 0) {
          iVar1 = FUN_0041e0b0(lVar2,&local_f0,0x50);
          if (iVar1 == 0) goto LAB_00465348;
        }
        FUN_00406a50(param_1[4]);
        uVar3 = FUN_004069d0(*param_1,local_d8,local_88);
        param_1[4] = uVar3;
        iVar1 = FUN_005b1f80(*param_1,uVar3);
        if (iVar1 == 0) {
          FUN_00406a50(param_1[4]);
          param_1[4] = 0;
        }
        else if (param_1[4] != 0) goto LAB_00465291;
      }
    }
    else {
      iVar1 = thunk_FUN_0041cf60(lVar2,&local_e0);
      if (iVar1 != 0) {
        if (local_e0 + 1U < 3) {
          *(int *)(param_1 + 3) = local_e0;
          goto LAB_00465170;
        }
      }
    }
LAB_00465348:
    uVar3 = 0;
  }
LAB_0046534a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

