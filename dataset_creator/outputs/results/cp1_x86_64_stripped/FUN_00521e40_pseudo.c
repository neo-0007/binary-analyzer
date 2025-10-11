
ulong FUN_00521e40(uint param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = FUN_00521cc0();
  uVar15 = (ulong)uVar6;
  if ((int)uVar6 < 0) goto switchD_00521e8b_caseD_5;
  switch(param_1) {
  case 0:
  case 8:
    uVar6 = *(uint *)((long)param_3 + 0x1c);
    uVar15 = (ulong)uVar6;
    if (param_1 == 7) goto switchD_00521e8b_caseD_7;
    if (((param_1 & 0xfffffff7) != 0) || (*(int *)(param_3 + 1) != 1)) break;
    iVar7 = *(int *)(param_2 + 0x30);
    lVar14 = (long)(int)uVar6;
    if (param_1 == 0) {
      lVar14 = param_3[5];
    }
    if (iVar7 == 0) {
      if (*(long *)(param_2 + 0x38) == 0) {
        FUN_0051f420();
        uVar15 = 0;
        FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x297,"default_fixup_args");
        FUN_0051f8f0(6,0xc0103,0);
        break;
      }
      iVar7 = *(int *)(param_3[6] + 8);
    }
    switch(iVar7) {
    default:
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x2b3,"default_fixup_args");
      uVar1 = *(undefined4 *)(param_3 + 1);
      uVar2 = *(undefined4 *)(param_2 + 0x30);
      pcVar12 = "[action:%d, state:%d] unsupported OSSL_PARAM data type %d";
      goto LAB_005224e5;
    case 1:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = thunk_FUN_0041d0b0(param_3[6],uVar6);
        return uVar15;
      }
      break;
    case 2:
      if (param_3[4] == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar15 = thunk_FUN_0041d380(param_3[6],uVar6);
          return uVar15;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = FUN_0041dc70();
        return uVar15;
      }
      break;
    case 4:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = FUN_0041e1a0(param_3[6],param_3[4]);
        return uVar15;
      }
      break;
    case 5:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = FUN_0041e220(param_3[6],param_3[4],lVar14);
        return uVar15;
      }
      break;
    case 7:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = FUN_0041e3e0(param_3[6],param_3[4],lVar14);
        return uVar15;
      }
    }
    goto LAB_00522812;
  case 1:
    if (*(int *)(param_3 + 1) == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x19d,"default_fixup_args");
      uVar1 = *(undefined4 *)(param_3 + 1);
      pcVar12 = "[action:%d, state:%d]";
LAB_0052269d:
      uVar15 = 0;
      FUN_0051f8f0(6,0x8010c,pcVar12,uVar1,1);
      break;
    }
    if (*(int *)(param_2 + 0xc) != 0) {
      piVar3 = (int *)*param_3;
      iVar7 = *piVar3;
      if ((((iVar7 - 0x40U & 0xffffffbf) != 0 && (iVar7 - 0x10U & 0xffffffef) != 0) &&
          (iVar7 != 0x100)) || (*(long *)(piVar3 + 0xc) != 0)) {
        if (iVar7 == 0x800) {
          lVar14 = *(long *)(piVar3 + 0xc);
        }
        else {
          if ((((iVar7 - 0x200U & 0xfffffdff) == 0) || ((iVar7 - 0x1000U & 0xffffefff) == 0)) &&
             (*(long *)(piVar3 + 0xc) == 0)) goto LAB_00521fdf;
          if (((iVar7 - 2U & 0xfffffffd) != 0) && (iVar7 != 8)) goto code_r0x0052217b;
          lVar14 = *(long *)(piVar3 + 10);
        }
        if (lVar14 != 0) goto code_r0x0052217b;
      }
LAB_00521fdf:
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x1b3,"default_fixup_args");
      uVar15 = 0xfffffffe;
      FUN_0051f8f0(6,0x93,0);
      break;
    }
code_r0x0052217b:
    switch(*(undefined4 *)(param_2 + 0x30)) {
    case 1:
      puVar13 = (undefined8 *)param_3[6];
      FUN_0041cea0(&local_78,*(undefined8 *)(param_2 + 0x28),(long)param_3 + 0x1c);
      goto LAB_0052222e;
    case 2:
      if (param_3[4] == 0) {
        puVar13 = (undefined8 *)param_3[6];
        FUN_0041ced0(&local_78,*(undefined8 *)(param_2 + 0x28),(long)param_3 + 0x1c);
        goto LAB_0052228a;
      }
      if (*(int *)(param_3 + 1) != 2) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x1e1,"default_fixup_args");
        uVar1 = *(undefined4 *)(param_3 + 1);
        pcVar12 = "[action:%d, state:%d] trying to get a BIGNUM via ctrl call";
        goto LAB_0052269d;
      }
      iVar8 = FUN_004b7bb0();
      iVar7 = iVar8 + 0xe;
      if (-1 < iVar8 + 7) {
        iVar7 = iVar8 + 7;
      }
      param_3[0x11] = (long)(iVar7 >> 3);
      lVar14 = FUN_0041ad90((long)(iVar7 >> 3),"../crypto/evp/ctrl_params_translate.c",0x1ce);
      param_3[0xf] = lVar14;
      if (lVar14 == 0) {
        FUN_0051f420();
        uVar15 = 0;
        FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x1cf,"default_fixup_args");
        FUN_0051f8f0(6,0xc0100,0);
      }
      else {
        iVar7 = thunk_FUN_004b87e0(param_3[4],lVar14,*(undefined4 *)(param_3 + 0x11));
        if (-1 < iVar7) {
          puVar13 = (undefined8 *)param_3[6];
          FUN_0041dd10(&local_78,*(undefined8 *)(param_2 + 0x28),param_3[0xf],param_3[0x11]);
          goto LAB_0052230a;
        }
        uVar15 = 0;
        FUN_0041ad60(param_3[0xf],"../crypto/evp/ctrl_params_translate.c",0x1d4);
        param_3[0xf] = 0;
      }
      break;
    case 4:
      puVar13 = (undefined8 *)param_3[6];
      FUN_0041e290(&local_78,*(undefined8 *)(param_2 + 0x28),param_3[4],
                   (long)*(int *)((long)param_3 + 0x1c));
LAB_0052230a:
      *puVar13 = local_78;
      puVar13[1] = uStack_70;
      puVar13[2] = local_68;
      puVar13[3] = uStack_60;
      puVar13[4] = local_58;
      break;
    case 5:
      puVar13 = (undefined8 *)param_3[6];
      FUN_0041e2e0(&local_78,*(undefined8 *)(param_2 + 0x28),param_3[4],
                   (long)*(int *)((long)param_3 + 0x1c));
      *puVar13 = local_78;
      puVar13[1] = uStack_70;
      puVar13[2] = local_68;
      puVar13[3] = uStack_60;
      puVar13[4] = local_58;
      break;
    case 6:
      puVar13 = (undefined8 *)param_3[6];
      FUN_0041e410(&local_78,*(undefined8 *)(param_2 + 0x28),param_3[4],
                   (long)*(int *)((long)param_3 + 0x1c));
LAB_0052228a:
      *puVar13 = local_78;
      puVar13[1] = uStack_70;
      puVar13[2] = local_68;
      puVar13[3] = uStack_60;
      puVar13[4] = local_58;
      break;
    case 7:
      puVar13 = (undefined8 *)param_3[6];
      FUN_0041e440(&local_78,*(undefined8 *)(param_2 + 0x28),param_3[4],
                   (long)*(int *)((long)param_3 + 0x1c));
LAB_0052222e:
      *puVar13 = local_78;
      puVar13[1] = uStack_70;
      puVar13[2] = local_68;
      puVar13[3] = uStack_60;
      puVar13[4] = local_58;
    }
    break;
  case 2:
    if ((*(int *)(param_3 + 1) == 1) && (*(int *)(param_2 + 0x30) - 4U < 4)) {
      *(int *)((long)param_3 + 0x1c) = (int)*(undefined8 *)(param_3[6] + 0x20);
    }
    break;
  default:
    FUN_0051f420();
    uVar15 = 0;
    FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x18c,"default_fixup_args");
    FUN_0051f8f0(6,0xc0101,"[action:%d, state:%d]",*(undefined4 *)(param_3 + 1),param_1);
    break;
  case 4:
    puVar13 = (undefined8 *)param_3[2];
    local_44 = 0;
    uVar4 = param_3[4];
    if (*(int *)(param_3 + 1) == 2) {
      puVar16 = puVar13;
      if (param_2 != 0) {
        puVar16 = *(undefined8 **)(param_2 + 0x28);
        param_3[2] = puVar16;
        if (*(int *)(param_3 + 3) != 0) {
          *(undefined4 *)(param_3 + 8) = 0x786568;
          uVar11 = FUN_0041c4d0(param_3 + 8,puVar16,0x32);
          puVar16 = param_3 + 8;
          if (uVar11 < 4) {
            FUN_0051f420();
            FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x237,"default_fixup_args");
            uVar15 = 0xffffffff;
            FUN_0051f8f0(6,0xc0103,0);
            break;
          }
        }
      }
      uVar9 = FUN_004140d0(*param_3);
      uVar5 = param_3[4];
      uVar10 = thunk_FUN_007129d0(uVar5);
      iVar7 = FUN_00548de0(param_3[6],uVar9,puVar16,uVar5,uVar10,&local_44);
      if (iVar7 == 0) {
        uVar15 = 0;
        if (local_44 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x244,"default_fixup_args");
          uVar15 = 0xfffffffe;
          FUN_0051f8f0(6,0x93,"[action:%d, state:%d] name=%s, value=%s",*(undefined4 *)(param_3 + 1)
                       ,4,puVar13,uVar4);
        }
      }
      else {
        uVar4 = *(undefined8 *)(param_3[6] + 0x18);
        param_3[0xf] = *(undefined8 *)(param_3[6] + 0x10);
        param_3[0x11] = uVar4;
      }
    }
    else {
      FUN_0051f420();
      uVar15 = 0;
      FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x226,"default_fixup_args");
      FUN_0051f8f0(6,0x93,"[action:%d, state:%d] only setting allowed",*(undefined4 *)(param_3 + 1),
                   4);
    }
    break;
  case 5:
    break;
  case 7:
switchD_00521e8b_caseD_7:
    if (*(int *)(param_3 + 1) != 2) break;
    switch(*(undefined4 *)(param_2 + 0x30)) {
    default:
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x285,"default_fixup_args");
      uVar1 = *(undefined4 *)(param_3 + 1);
      uVar2 = *(undefined4 *)(param_2 + 0x30);
      param_1 = 7;
      pcVar12 = "[action:%d, state:%d] unknown OSSL_PARAM data type %d";
LAB_005224e5:
      uVar15 = 0;
      FUN_0051f8f0(6,0x8010c,pcVar12,uVar1,param_1,uVar2);
      goto switchD_00521e8b_caseD_5;
    case 1:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = thunk_FUN_0041cf60(param_3[6],(long)param_3 + 0x1c);
        return uVar15;
      }
      break;
    case 2:
      if (param_3[4] == 0) {
        iVar7 = thunk_FUN_0041d240(param_3[6],(long)param_3 + 0x1c);
        uVar15 = (ulong)(iVar7 != 0);
      }
      else {
        iVar7 = FUN_0041dc20();
        uVar15 = (ulong)(iVar7 != 0);
      }
      goto switchD_00521e8b_caseD_5;
    case 4:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = FUN_0041e0b0(param_3[6],param_3[4],param_3[5]);
        return uVar15;
      }
      break;
    case 5:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = FUN_0041e150(param_3[6],param_3[4],param_3[5],param_3 + 5);
        return uVar15;
      }
      break;
    case 7:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = FUN_0041e340(param_3[6],param_3[4],param_3 + 5);
        return uVar15;
      }
    }
    goto LAB_00522812;
  }
switchD_00521e8b_caseD_5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
LAB_00522812:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

