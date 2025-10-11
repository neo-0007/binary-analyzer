
ulong fix_rsa_padding_mode(int param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  int *piVar6;
  long lVar7;
  char *__s2;
  ulong uVar8;
  undefined **ppuVar9;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = default_check_constprop_0();
  uVar8 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    if (param_1 == 1) {
      if (*(int *)(param_3 + 8) == 1) {
        *(undefined4 *)(param_3 + 0x1c) = 0x32;
        *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_3 + 0x20);
        *(long *)(param_3 + 0x20) = param_3 + 0x40;
      }
      else if (*(int *)(param_3 + 8) == 2) {
        puVar1 = *(undefined8 **)(param_3 + 0x30);
        OSSL_PARAM_construct_int(&local_78,*(undefined8 *)(param_2 + 0x28),param_3 + 0x1c);
        *puVar1 = local_78;
        puVar1[1] = uStack_70;
        puVar1[2] = local_68;
        puVar1[3] = uStack_60;
        puVar1[4] = local_58;
        uVar8 = 1;
        goto LAB_00514ef0;
      }
    }
    else if ((param_1 == 8) && (*(int *)(param_3 + 8) == 1)) {
      lVar7 = *(long *)(param_3 + 0x30);
      if (*(int *)(lVar7 + 8) == 1) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = OSSL_PARAM_get_int(lVar7,param_3 + 0x1c);
          return uVar8;
        }
        goto LAB_0051516e;
      }
      if (*(int *)(lVar7 + 8) == 2) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = OSSL_PARAM_get_uint(lVar7,param_3 + 0x1c);
          return uVar8;
        }
        goto LAB_0051516e;
      }
      lVar7 = 0;
      iVar4 = 1;
      piVar6 = &DAT_008fb270;
      while (*(int *)(param_3 + 0x1c) != iVar4) {
        lVar7 = lVar7 + 1;
        if (lVar7 == 7) {
          ERR_new();
          ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x516,"fix_rsa_padding_mode");
          uVar8 = 0xfffffffe;
          ERR_set_error(4,0x76,"[action:%d, state:%d] padding number %d",
                        *(undefined4 *)(param_3 + 8),8,*(undefined4 *)(param_3 + 0x1c));
          goto LAB_00514ef0;
        }
        iVar4 = *piVar6;
        piVar6 = piVar6 + 4;
      }
      pcVar2 = *(char **)(&UNK_008fb268 + lVar7 * 0x10);
      if (pcVar2 == (char *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x520,"fix_rsa_padding_mode");
        uVar8 = 0xfffffffe;
        ERR_set_error(6,0x93,0);
        goto LAB_00514ef0;
      }
      *(char **)(param_3 + 0x20) = pcVar2;
      sVar5 = strlen(pcVar2);
      *(int *)(param_3 + 0x1c) = (int)sVar5;
    }
    uVar3 = default_fixup_args(param_1,param_2,param_3);
    uVar8 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      if (*(int *)(param_3 + 8) == 2) {
        if (param_1 == 7) goto LAB_00515032;
      }
      else if ((*(int *)(param_3 + 8) == 1) && (param_1 == 2)) {
LAB_00515032:
        pcVar2 = *(char **)(param_3 + 0x20);
        ppuVar9 = &PTR_DAT_008fb278;
        __s2 = "pkcs1";
        lVar7 = 0;
        while( true ) {
          iVar4 = strcmp(pcVar2,__s2);
          if (iVar4 == 0) break;
          lVar7 = lVar7 + 1;
          if (lVar7 == 7) {
            ERR_new();
            ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x534,"fix_rsa_padding_mode");
            ERR_set_error(4,0x76,"[action:%d, state:%d] padding name %s",
                          *(undefined4 *)(param_3 + 8),param_1,*(undefined4 *)(param_3 + 0x1c));
            uVar8 = 0xfffffffe;
            *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
            goto LAB_005150d7;
          }
          __s2 = *ppuVar9;
          ppuVar9 = ppuVar9 + 2;
        }
        if (param_1 == 2) {
          **(undefined4 **)(param_3 + 0x38) = (&str_value_map_11)[lVar7 * 4];
        }
        else {
          *(undefined4 *)(param_3 + 0x1c) = (&str_value_map_11)[lVar7 * 4];
        }
LAB_005150d7:
        *(undefined8 *)(param_3 + 0x20) = 0;
      }
    }
  }
LAB_00514ef0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
LAB_0051516e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

