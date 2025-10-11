
undefined8
_nss_files_parse_servent
          (char *param_1,undefined8 *param_2,char *param_3,long param_4,undefined4 *param_5)

{
  char *pcVar1;
  ushort uVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  size_t sVar7;
  char cVar8;
  long lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  pcVar1 = param_3 + param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar12 = param_3;
  if ((param_1 < pcVar1) && (param_3 <= param_1)) {
    sVar7 = strlen(param_1);
    pcVar12 = param_1 + sVar7 + 1;
  }
  pcVar4 = strpbrk(param_1,"#\n");
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
  *param_2 = param_1;
  cVar8 = *param_1;
  if (cVar8 != '\0') {
    pcVar4 = param_1;
LAB_00771bcc:
    lVar9 = (long)cVar8;
    param_1 = pcVar4 + 1;
    cVar8 = *param_1;
    if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar9 * 2) & 0x20) == 0) goto LAB_00771bc8;
    *pcVar4 = '\0';
    param_1 = pcVar4;
    do {
      pcVar4 = param_1 + 1;
      param_1 = param_1 + 1;
    } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*pcVar4 * 2) & 0x20) != 0);
  }
LAB_00771c00:
  uVar5 = __strtoull_internal(param_1,&local_48,0,0);
  if ((uVar5 >> 0x20 == 0) &&
     (*(uint *)(param_2 + 2) = (uint)(ushort)((ushort)uVar5 << 8 | (ushort)uVar5 >> 8),
     local_48 != param_1)) {
    if (*local_48 == '/') {
      do {
        local_48 = local_48 + 1;
      } while (*local_48 == '/');
    }
    else if (*local_48 != '\0') goto LAB_00771d79;
    param_2[3] = local_48;
    lVar9 = (long)*local_48;
    pcVar4 = local_48;
    if (*local_48 != '\0') {
      pcVar11 = local_48;
LAB_00771c6c:
      cVar8 = (char)lVar9;
      pcVar4 = pcVar11 + 1;
      lVar9 = (long)*pcVar4;
      if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar8 * 2) & 0x20) == 0)
      goto LAB_00771c68;
      *pcVar11 = '\0';
      pcVar4 = pcVar11;
      do {
        lVar9 = (long)pcVar4[1];
        pcVar4 = pcVar4 + 1;
      } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar9 * 2) & 0x20) != 0);
    }
LAB_00771ca4:
    if (((pcVar12 == (char *)0x0) && (pcVar12 = param_3, param_3 <= pcVar4)) && (pcVar4 < pcVar1)) {
      sVar7 = strlen(pcVar4);
      lVar9 = (long)(char)lVar9;
      pcVar12 = pcVar4 + sVar7 + 1;
    }
    puVar13 = (undefined8 *)((ulong)(pcVar12 + 7) & 0xfffffffffffffff8);
    if (pcVar1 < puVar13 + 2) {
LAB_00771dd5:
      *param_5 = 0x22;
      uVar6 = 0xffffffff;
    }
    else {
      cVar8 = (char)lVar9;
      puVar10 = puVar13;
      while (cVar8 != '\0') {
        lVar3 = *(long *)(in_FS_OFFSET + -0x40);
        uVar2 = *(ushort *)(lVar3 + lVar9 * 2);
        pcVar12 = pcVar4;
        if ((uVar2 & 0x2000) == 0) {
LAB_00771d25:
          while ((uVar2 & 0x2000) == 0) {
            pcVar11 = pcVar4 + 1;
            pcVar4 = pcVar4 + 1;
            if (*pcVar11 == '\0') {
              if (pcVar4 <= pcVar12) goto joined_r0x00771dcf;
              goto LAB_00771db0;
            }
            uVar2 = *(ushort *)(lVar3 + (long)*pcVar11 * 2);
          }
          if (pcVar12 < pcVar4) {
LAB_00771db0:
            *puVar10 = pcVar12;
            puVar10 = puVar10 + 1;
            cVar8 = *pcVar4;
          }
          else {
            cVar8 = *pcVar4;
          }
          if (cVar8 != '\0') {
            *pcVar4 = '\0';
            pcVar4 = pcVar4 + 1;
          }
        }
        else {
          do {
            pcVar11 = pcVar4 + 1;
            pcVar4 = pcVar4 + 1;
            uVar2 = *(ushort *)(lVar3 + (long)*pcVar11 * 2);
          } while ((uVar2 & 0x2000) != 0);
          pcVar12 = pcVar4;
          if (*pcVar11 != '\0') goto LAB_00771d25;
        }
joined_r0x00771dcf:
        if (pcVar1 < puVar10 + 2) goto LAB_00771dd5;
        cVar8 = *pcVar4;
        lVar9 = (long)cVar8;
      }
      *puVar10 = 0;
      if (puVar13 == (undefined8 *)0x0) {
        uVar6 = 0xffffffff;
      }
      else {
        param_2[1] = puVar13;
        uVar6 = 1;
      }
    }
  }
  else {
LAB_00771d79:
    uVar6 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
LAB_00771bc8:
  pcVar4 = param_1;
  if (cVar8 == '\0') goto LAB_00771c00;
  goto LAB_00771bcc;
LAB_00771c68:
  pcVar11 = pcVar4;
  if (*pcVar4 == '\0') goto LAB_00771ca4;
  goto LAB_00771c6c;
}

