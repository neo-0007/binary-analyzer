
ulong default_fixup_args(uint param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  size_t sVar9;
  ulong uVar10;
  void *pvVar11;
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
  uVar5 = default_check_constprop_0();
  uVar15 = (ulong)uVar5;
  if ((int)uVar5 < 0) goto switchD_00513eeb_caseD_5;
  switch(param_1) {
  case 0:
  case 8:
    uVar5 = *(uint *)((long)param_3 + 0x1c);
    uVar15 = (ulong)uVar5;
    if (param_1 == 7) goto switchD_00513eeb_caseD_7;
    if (((param_1 & 0xfffffff7) != 0) || (*(int *)(param_3 + 1) != 1)) break;
    iVar6 = *(int *)(param_2 + 0x30);
    lVar14 = (long)(int)uVar5;
    if (param_1 == 0) {
      lVar14 = param_3[5];
    }
    if (iVar6 == 0) {
      if (*(long *)(param_2 + 0x38) == 0) {
        ERR_new();
        uVar15 = 0;
        ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x297,"default_fixup_args");
        ERR_set_error(6,0xc0103,0);
        break;
      }
      iVar6 = *(int *)(param_3[6] + 8);
    }
    switch(iVar6) {
    default:
      ERR_new();
      ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x2b3,"default_fixup_args");
      uVar1 = *(undefined4 *)(param_3 + 1);
      uVar2 = *(undefined4 *)(param_2 + 0x30);
      pcVar12 = "[action:%d, state:%d] unsupported OSSL_PARAM data type %d";
      goto LAB_00514545;
    case 1:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = OSSL_PARAM_set_int(param_3[6],uVar5);
        return uVar15;
      }
      break;
    case 2:
      if (param_3[4] == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar15 = OSSL_PARAM_set_uint(param_3[6],uVar5);
          return uVar15;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = OSSL_PARAM_set_BN();
        return uVar15;
      }
      break;
    case 4:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = OSSL_PARAM_set_utf8_string(param_3[6],param_3[4]);
        return uVar15;
      }
      break;
    case 5:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = OSSL_PARAM_set_octet_string(param_3[6],param_3[4],lVar14);
        return uVar15;
      }
      break;
    case 7:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = OSSL_PARAM_set_octet_ptr(param_3[6],param_3[4],lVar14);
        return uVar15;
      }
    }
    goto LAB_00514872;
  case 1:
    if (*(int *)(param_3 + 1) == 0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x19d,"default_fixup_args");
      uVar1 = *(undefined4 *)(param_3 + 1);
      pcVar12 = "[action:%d, state:%d]";
LAB_005146fd:
      uVar15 = 0;
      ERR_set_error(6,0x8010c,pcVar12,uVar1,1);
      break;
    }
    if (*(int *)(param_2 + 0xc) != 0) {
      piVar3 = (int *)*param_3;
      iVar6 = *piVar3;
      if ((((iVar6 - 0x40U & 0xffffffbf) != 0 && (iVar6 - 0x10U & 0xffffffef) != 0) &&
          (iVar6 != 0x100)) || (*(long *)(piVar3 + 0xc) != 0)) {
        if (iVar6 == 0x800) {
          lVar14 = *(long *)(piVar3 + 0xc);
        }
        else {
          if ((((iVar6 - 0x200U & 0xfffffdff) == 0) || ((iVar6 - 0x1000U & 0xffffefff) == 0)) &&
             (*(long *)(piVar3 + 0xc) == 0)) goto LAB_0051403f;
          if (((iVar6 - 2U & 0xfffffffd) != 0) && (iVar6 != 8)) goto code_r0x005141db;
          lVar14 = *(long *)(piVar3 + 10);
        }
        if (lVar14 != 0) goto code_r0x005141db;
      }
LAB_0051403f:
      ERR_new();
      ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x1b3,"default_fixup_args");
      uVar15 = 0xfffffffe;
      ERR_set_error(6,0x93,0);
      break;
    }
code_r0x005141db:
    switch(*(undefined4 *)(param_2 + 0x30)) {
    case 1:
      puVar13 = (undefined8 *)param_3[6];
      OSSL_PARAM_construct_int(&local_78,*(undefined8 *)(param_2 + 0x28),(long)param_3 + 0x1c);
      goto LAB_0051428e;
    case 2:
      if ((BIGNUM *)param_3[4] == (BIGNUM *)0x0) {
        puVar13 = (undefined8 *)param_3[6];
        OSSL_PARAM_construct_uint(&local_78,*(undefined8 *)(param_2 + 0x28),(long)param_3 + 0x1c);
        goto LAB_005142ea;
      }
      if (*(int *)(param_3 + 1) != 2) {
        ERR_new();
        ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x1e1,"default_fixup_args");
        uVar1 = *(undefined4 *)(param_3 + 1);
        pcVar12 = "[action:%d, state:%d] trying to get a BIGNUM via ctrl call";
        goto LAB_005146fd;
      }
      iVar7 = BN_num_bits((BIGNUM *)param_3[4]);
      iVar6 = iVar7 + 0xe;
      if (-1 < iVar7 + 7) {
        iVar6 = iVar7 + 7;
      }
      param_3[0x11] = (long)(iVar6 >> 3);
      pvVar11 = CRYPTO_malloc(iVar6 >> 3,"../crypto/evp/ctrl_params_translate.c",0x1ce);
      param_3[0xf] = pvVar11;
      if (pvVar11 == (void *)0x0) {
        ERR_new();
        uVar15 = 0;
        ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x1cf,"default_fixup_args");
        ERR_set_error(6,0xc0100,0);
      }
      else {
        iVar6 = BN_bn2nativepad(param_3[4],pvVar11,*(undefined4 *)(param_3 + 0x11));
        if (-1 < iVar6) {
          puVar13 = (undefined8 *)param_3[6];
          OSSL_PARAM_construct_BN
                    (&local_78,*(undefined8 *)(param_2 + 0x28),param_3[0xf],param_3[0x11]);
          goto LAB_0051436a;
        }
        uVar15 = 0;
        CRYPTO_free((void *)param_3[0xf]);
        param_3[0xf] = 0;
      }
      break;
    case 4:
      puVar13 = (undefined8 *)param_3[6];
      OSSL_PARAM_construct_utf8_string
                (&local_78,*(undefined8 *)(param_2 + 0x28),param_3[4],
                 (long)*(int *)((long)param_3 + 0x1c));
LAB_0051436a:
      *puVar13 = local_78;
      puVar13[1] = uStack_70;
      puVar13[2] = local_68;
      puVar13[3] = uStack_60;
      puVar13[4] = local_58;
      break;
    case 5:
      puVar13 = (undefined8 *)param_3[6];
      OSSL_PARAM_construct_octet_string
                (&local_78,*(undefined8 *)(param_2 + 0x28),param_3[4],
                 (long)*(int *)((long)param_3 + 0x1c));
      *puVar13 = local_78;
      puVar13[1] = uStack_70;
      puVar13[2] = local_68;
      puVar13[3] = uStack_60;
      puVar13[4] = local_58;
      break;
    case 6:
      puVar13 = (undefined8 *)param_3[6];
      OSSL_PARAM_construct_utf8_ptr
                (&local_78,*(undefined8 *)(param_2 + 0x28),param_3[4],
                 (long)*(int *)((long)param_3 + 0x1c));
LAB_005142ea:
      *puVar13 = local_78;
      puVar13[1] = uStack_70;
      puVar13[2] = local_68;
      puVar13[3] = uStack_60;
      puVar13[4] = local_58;
      break;
    case 7:
      puVar13 = (undefined8 *)param_3[6];
      OSSL_PARAM_construct_octet_ptr
                (&local_78,*(undefined8 *)(param_2 + 0x28),param_3[4],
                 (long)*(int *)((long)param_3 + 0x1c));
LAB_0051428e:
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
    ERR_new();
    uVar15 = 0;
    ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x18c,"default_fixup_args");
    ERR_set_error(6,0xc0101,"[action:%d, state:%d]",*(undefined4 *)(param_3 + 1),param_1);
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
          uVar10 = OPENSSL_strlcat(param_3 + 8,puVar16,0x32);
          puVar16 = param_3 + 8;
          if (uVar10 < 4) {
            ERR_new();
            ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x237,"default_fixup_args");
            uVar15 = 0xffffffff;
            ERR_set_error(6,0xc0103,0);
            break;
          }
        }
      }
      uVar8 = EVP_PKEY_CTX_settable_params(*param_3);
      pcVar12 = (char *)param_3[4];
      sVar9 = strlen(pcVar12);
      iVar6 = OSSL_PARAM_allocate_from_text(param_3[6],uVar8,puVar16,pcVar12,sVar9,&local_44);
      if (iVar6 == 0) {
        uVar15 = 0;
        if (local_44 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x244,"default_fixup_args");
          uVar15 = 0xfffffffe;
          ERR_set_error(6,0x93,"[action:%d, state:%d] name=%s, value=%s",
                        *(undefined4 *)(param_3 + 1),4,puVar13,uVar4);
        }
      }
      else {
        uVar4 = *(undefined8 *)(param_3[6] + 0x18);
        param_3[0xf] = *(undefined8 *)(param_3[6] + 0x10);
        param_3[0x11] = uVar4;
      }
    }
    else {
      ERR_new();
      uVar15 = 0;
      ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x226,"default_fixup_args");
      ERR_set_error(6,0x93,"[action:%d, state:%d] only setting allowed",*(undefined4 *)(param_3 + 1)
                    ,4);
    }
    break;
  case 5:
    break;
  case 7:
switchD_00513eeb_caseD_7:
    if (*(int *)(param_3 + 1) != 2) break;
    switch(*(undefined4 *)(param_2 + 0x30)) {
    default:
      ERR_new();
      ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x285,"default_fixup_args");
      uVar1 = *(undefined4 *)(param_3 + 1);
      uVar2 = *(undefined4 *)(param_2 + 0x30);
      param_1 = 7;
      pcVar12 = "[action:%d, state:%d] unknown OSSL_PARAM data type %d";
LAB_00514545:
      uVar15 = 0;
      ERR_set_error(6,0x8010c,pcVar12,uVar1,param_1,uVar2);
      goto switchD_00513eeb_caseD_5;
    case 1:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = OSSL_PARAM_get_int(param_3[6],(long)param_3 + 0x1c);
        return uVar15;
      }
      break;
    case 2:
      if (param_3[4] == 0) {
        iVar6 = OSSL_PARAM_get_uint(param_3[6],(long)param_3 + 0x1c);
        uVar15 = (ulong)(iVar6 != 0);
      }
      else {
        iVar6 = OSSL_PARAM_get_BN();
        uVar15 = (ulong)(iVar6 != 0);
      }
      goto switchD_00513eeb_caseD_5;
    case 4:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = OSSL_PARAM_get_utf8_string(param_3[6],param_3[4],param_3[5]);
        return uVar15;
      }
      break;
    case 5:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = OSSL_PARAM_get_octet_string(param_3[6],param_3[4],param_3[5],param_3 + 5);
        return uVar15;
      }
      break;
    case 7:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar15 = OSSL_PARAM_get_octet_ptr(param_3[6],param_3[4],param_3 + 5);
        return uVar15;
      }
    }
    goto LAB_00514872;
  }
switchD_00513eeb_caseD_5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
LAB_00514872:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

