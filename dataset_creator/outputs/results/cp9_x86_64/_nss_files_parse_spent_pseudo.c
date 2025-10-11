
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _nss_files_parse_spent(char *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  char cVar8;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar4 = strchr(param_1,10);
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
  *param_2 = param_1;
  cVar8 = *param_1;
  while (cVar8 != '\0') {
    if (cVar8 == ':') {
      pcVar4 = param_1 + 1;
      *param_1 = '\0';
      param_1 = param_1 + 1;
      if (*pcVar4 != '\0') goto LAB_007a27bd;
      break;
    }
    pcVar4 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar8 = *pcVar4;
  }
  if ((*(char *)*param_2 - 0x2bU & 0xfd) == 0) {
    param_2[1] = 0;
    uVar7 = 1;
    *(undefined1 (*) [16])(param_2 + 2) = (undefined1  [16])0x0;
    uVar3 = _UNK_00824968;
    uVar2 = _DAT_00824960;
    param_2[8] = 0xffffffffffffffff;
    param_2[4] = uVar2;
    param_2[5] = uVar3;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    *(undefined4 *)((long)param_2 + 0x34) = 0xffffffff;
    *(undefined4 *)(param_2 + 7) = 0xffffffff;
    *(undefined4 *)((long)param_2 + 0x3c) = 0xffffffff;
  }
  else {
LAB_007a27bd:
    param_2[1] = param_1;
    cVar8 = *param_1;
    if (cVar8 != '\0') {
LAB_007a27e0:
      if (cVar8 != ':') goto LAB_007a27d0;
      *param_1 = '\0';
      if ((param_1[1] == '\0') ||
         (uVar5 = __strtoull_internal(param_1 + 1,&local_38,10), uVar5 >> 0x20 != 0))
      goto LAB_007a29d0;
      lVar6 = (long)(int)uVar5;
      if (local_38 == param_1 + 1) {
        lVar6 = -1;
      }
      param_2[2] = lVar6;
      if (*local_38 == ':') {
        pcVar4 = local_38 + 1;
      }
      else {
        pcVar4 = local_38;
        if (*local_38 != '\0') goto LAB_007a29d0;
      }
      if ((*pcVar4 == '\0') ||
         (uVar5 = __strtoull_internal(pcVar4,&local_38,10), uVar5 >> 0x20 != 0)) goto LAB_007a29d0;
      lVar6 = (long)(int)uVar5;
      if (local_38 == pcVar4) {
        lVar6 = -1;
      }
      param_2[3] = lVar6;
      if (*local_38 == ':') {
        pcVar4 = local_38 + 1;
      }
      else {
        pcVar4 = local_38;
        if (*local_38 != '\0') goto LAB_007a29d0;
      }
      if ((*pcVar4 == '\0') ||
         (uVar5 = __strtoull_internal(pcVar4,&local_38,10), uVar5 >> 0x20 != 0)) goto LAB_007a29d0;
      lVar6 = (long)(int)uVar5;
      if (local_38 == pcVar4) {
        lVar6 = -1;
      }
      param_2[4] = lVar6;
      if (*local_38 == ':') {
        pcVar4 = local_38 + 1;
      }
      else {
        pcVar4 = local_38;
        if (*local_38 != '\0') goto LAB_007a29d0;
      }
      cVar8 = *pcVar4;
      bVar1 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar8 * 2);
      while ((bVar1 & 0x20) != 0) {
        cVar8 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
        bVar1 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar8 * 2);
      }
      if (cVar8 == '\0') {
        param_2[7] = 0xffffffffffffffff;
        uVar7 = 1;
        param_2[8] = 0xffffffffffffffff;
        *(undefined4 *)(param_2 + 5) = 0xffffffff;
        *(undefined4 *)((long)param_2 + 0x2c) = 0xffffffff;
        *(undefined4 *)(param_2 + 6) = 0xffffffff;
        *(undefined4 *)((long)param_2 + 0x34) = 0xffffffff;
        goto LAB_007a29d2;
      }
      uVar5 = __strtoull_internal(pcVar4,&local_38,10);
      if (uVar5 >> 0x20 == 0) {
        lVar6 = (long)(int)uVar5;
        if (local_38 == pcVar4) {
          lVar6 = -1;
        }
        param_2[5] = lVar6;
        if (*local_38 == ':') {
          pcVar4 = local_38 + 1;
        }
        else {
          pcVar4 = local_38;
          if (*local_38 != '\0') goto LAB_007a29d0;
        }
        if ((*pcVar4 != '\0') &&
           (uVar5 = __strtoull_internal(pcVar4,&local_38,10,0), uVar5 < 0x100000000)) {
          if (local_38 == pcVar4) {
            lVar6 = -1;
          }
          else {
            lVar6 = (long)(int)uVar5;
          }
          param_2[6] = lVar6;
          if (*local_38 == ':') {
            local_38 = local_38 + 1;
          }
          else if (*local_38 != '\0') goto LAB_007a29d0;
          pcVar4 = local_38;
          if ((*local_38 != '\0') &&
             (uVar5 = __strtoull_internal(local_38,&local_38,10,0), uVar5 < 0x100000000)) {
            if (local_38 == pcVar4) {
              lVar6 = -1;
            }
            else {
              lVar6 = (long)(int)uVar5;
            }
            param_2[7] = lVar6;
            if (*local_38 == ':') {
              local_38 = local_38 + 1;
            }
            else if (*local_38 != '\0') goto LAB_007a29d0;
            pcVar4 = local_38;
            if (*local_38 == '\0') {
              param_2[8] = 0xffffffffffffffff;
LAB_007a2b15:
              uVar7 = 1;
              goto LAB_007a29d2;
            }
            uVar5 = __strtoull_internal(local_38,&local_38,10,0);
            if (uVar5 < 0x100000000) {
              if (local_38 == pcVar4) {
                uVar5 = 0xffffffffffffffff;
              }
              param_2[8] = uVar5;
              if (*local_38 == '\0') goto LAB_007a2b15;
            }
          }
        }
      }
    }
LAB_007a29d0:
    uVar7 = 0;
  }
LAB_007a29d2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar7;
LAB_007a27d0:
  cVar8 = param_1[1];
  param_1 = param_1 + 1;
  if (cVar8 == '\0') goto LAB_007a29d0;
  goto LAB_007a27e0;
}

