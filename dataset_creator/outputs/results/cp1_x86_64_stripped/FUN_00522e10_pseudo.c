
ulong FUN_00522e10(int param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  undefined **ppuVar10;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = FUN_00521cc0();
  uVar9 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    if (param_1 == 1) {
      if (*(int *)(param_3 + 8) == 1) {
        *(undefined4 *)(param_3 + 0x1c) = 0x32;
        *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_3 + 0x20);
        *(long *)(param_3 + 0x20) = param_3 + 0x40;
      }
      else if (*(int *)(param_3 + 8) == 2) {
        puVar1 = *(undefined8 **)(param_3 + 0x30);
        FUN_0041cea0(&local_78,*(undefined8 *)(param_2 + 0x28),param_3 + 0x1c);
        *puVar1 = local_78;
        puVar1[1] = uStack_70;
        puVar1[2] = local_68;
        puVar1[3] = uStack_60;
        puVar1[4] = local_58;
        uVar9 = 1;
        goto LAB_00522e90;
      }
    }
    else if ((param_1 == 8) && (*(int *)(param_3 + 8) == 1)) {
      lVar7 = *(long *)(param_3 + 0x30);
      if (*(int *)(lVar7 + 8) == 1) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar9 = thunk_FUN_0041cf60(lVar7,param_3 + 0x1c);
          return uVar9;
        }
        goto LAB_0052310e;
      }
      if (*(int *)(lVar7 + 8) == 2) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar9 = thunk_FUN_0041d240(lVar7,param_3 + 0x1c);
          return uVar9;
        }
        goto LAB_0052310e;
      }
      lVar7 = 0;
      iVar4 = 1;
      piVar6 = &DAT_009042d0;
      while (*(int *)(param_3 + 0x1c) != iVar4) {
        lVar7 = lVar7 + 1;
        if (lVar7 == 7) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x516,"fix_rsa_padding_mode");
          uVar9 = 0xfffffffe;
          FUN_0051f8f0(4,0x76,"[action:%d, state:%d] padding number %d",*(undefined4 *)(param_3 + 8)
                       ,8,*(undefined4 *)(param_3 + 0x1c));
          goto LAB_00522e90;
        }
        iVar4 = *piVar6;
        piVar6 = piVar6 + 4;
      }
      if (*(long *)(&UNK_009042c8 + lVar7 * 0x10) == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x520,"fix_rsa_padding_mode");
        uVar9 = 0xfffffffe;
        FUN_0051f8f0(6,0x93,0);
        goto LAB_00522e90;
      }
      *(long *)(param_3 + 0x20) = *(long *)(&UNK_009042c8 + lVar7 * 0x10);
      uVar5 = thunk_FUN_007129d0();
      *(undefined4 *)(param_3 + 0x1c) = uVar5;
    }
    uVar3 = FUN_00521e40(param_1,param_2,param_3);
    uVar9 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      if (*(int *)(param_3 + 8) == 2) {
        if (param_1 == 7) goto LAB_00522fd2;
      }
      else if ((*(int *)(param_3 + 8) == 1) && (param_1 == 2)) {
LAB_00522fd2:
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        ppuVar10 = &PTR_DAT_009042d8;
        pcVar8 = "pkcs1";
        lVar7 = 0;
        while( true ) {
          iVar4 = thunk_FUN_00712780(uVar2,pcVar8);
          if (iVar4 == 0) break;
          lVar7 = lVar7 + 1;
          if (lVar7 == 7) {
            FUN_0051f420();
            FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x534,"fix_rsa_padding_mode");
            FUN_0051f8f0(4,0x76,"[action:%d, state:%d] padding name %s",*(undefined4 *)(param_3 + 8)
                         ,param_1,*(undefined4 *)(param_3 + 0x1c));
            uVar9 = 0xfffffffe;
            *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
            goto LAB_00523077;
          }
          pcVar8 = *ppuVar10;
          ppuVar10 = ppuVar10 + 2;
        }
        if (param_1 == 2) {
          **(undefined4 **)(param_3 + 0x38) = (&DAT_009042c0)[lVar7 * 4];
        }
        else {
          *(undefined4 *)(param_3 + 0x1c) = (&DAT_009042c0)[lVar7 * 4];
        }
LAB_00523077:
        *(undefined8 *)(param_3 + 0x20) = 0;
      }
    }
  }
LAB_00522e90:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
LAB_0052310e:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

