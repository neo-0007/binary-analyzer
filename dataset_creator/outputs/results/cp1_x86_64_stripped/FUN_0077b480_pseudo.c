
undefined8
FUN_0077b480(char *param_1,undefined8 *param_2,char *param_3,long param_4,undefined4 *param_5)

{
  char *pcVar1;
  ushort uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  char cVar7;
  long lVar8;
  undefined8 *puVar9;
  char *pcVar10;
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
    lVar8 = thunk_FUN_007129d0();
    pcVar12 = param_1 + lVar8 + 1;
  }
  puVar3 = (undefined1 *)FUN_00401200(param_1,&DAT_0082ea21);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  *param_2 = param_1;
  cVar7 = *param_1;
  if (cVar7 != '\0') {
    pcVar11 = param_1;
LAB_0077b4fc:
    lVar8 = (long)cVar7;
    param_1 = pcVar11 + 1;
    cVar7 = *param_1;
    if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar8 * 2) & 0x20) == 0) goto LAB_0077b4f8;
    *pcVar11 = '\0';
    param_1 = pcVar11;
    do {
      pcVar11 = param_1 + 1;
      param_1 = param_1 + 1;
    } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)*pcVar11 * 2) & 0x20) != 0);
  }
LAB_0077b530:
  uVar4 = FUN_006e94f0(param_1,&local_48,0,0);
  if ((uVar4 >> 0x20 == 0) &&
     (*(uint *)(param_2 + 2) = (uint)(ushort)((ushort)uVar4 << 8 | (ushort)uVar4 >> 8),
     local_48 != param_1)) {
    if (*local_48 == '/') {
      do {
        local_48 = local_48 + 1;
      } while (*local_48 == '/');
    }
    else if (*local_48 != '\0') goto LAB_0077b6a9;
    param_2[3] = local_48;
    lVar8 = (long)*local_48;
    pcVar11 = local_48;
    if (*local_48 != '\0') {
      pcVar10 = local_48;
LAB_0077b59c:
      cVar7 = (char)lVar8;
      pcVar11 = pcVar10 + 1;
      lVar8 = (long)*pcVar11;
      if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar7 * 2) & 0x20) == 0)
      goto LAB_0077b598;
      *pcVar10 = '\0';
      pcVar11 = pcVar10;
      do {
        lVar8 = (long)pcVar11[1];
        pcVar11 = pcVar11 + 1;
      } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + lVar8 * 2) & 0x20) != 0);
    }
LAB_0077b5d4:
    if (((pcVar12 == (char *)0x0) && (pcVar12 = param_3, param_3 <= pcVar11)) && (pcVar11 < pcVar1))
    {
      lVar6 = thunk_FUN_007129d0(pcVar11);
      lVar8 = (long)(char)lVar8;
      pcVar12 = pcVar11 + lVar6 + 1;
    }
    puVar13 = (undefined8 *)((ulong)(pcVar12 + 7) & 0xfffffffffffffff8);
    if (pcVar1 < puVar13 + 2) {
LAB_0077b705:
      *param_5 = 0x22;
      uVar5 = 0xffffffff;
    }
    else {
      cVar7 = (char)lVar8;
      puVar9 = puVar13;
      while (cVar7 != '\0') {
        lVar6 = *(long *)(in_FS_OFFSET + -0x40);
        uVar2 = *(ushort *)(lVar6 + lVar8 * 2);
        pcVar12 = pcVar11;
        if ((uVar2 & 0x2000) == 0) {
LAB_0077b655:
          while ((uVar2 & 0x2000) == 0) {
            pcVar10 = pcVar11 + 1;
            pcVar11 = pcVar11 + 1;
            if (*pcVar10 == '\0') {
              if (pcVar11 <= pcVar12) goto joined_r0x0077b6ff;
              goto LAB_0077b6e0;
            }
            uVar2 = *(ushort *)(lVar6 + (long)*pcVar10 * 2);
          }
          if (pcVar12 < pcVar11) {
LAB_0077b6e0:
            *puVar9 = pcVar12;
            puVar9 = puVar9 + 1;
            cVar7 = *pcVar11;
          }
          else {
            cVar7 = *pcVar11;
          }
          if (cVar7 != '\0') {
            *pcVar11 = '\0';
            pcVar11 = pcVar11 + 1;
          }
        }
        else {
          do {
            pcVar10 = pcVar11 + 1;
            pcVar11 = pcVar11 + 1;
            uVar2 = *(ushort *)(lVar6 + (long)*pcVar10 * 2);
          } while ((uVar2 & 0x2000) != 0);
          pcVar12 = pcVar11;
          if (*pcVar10 != '\0') goto LAB_0077b655;
        }
joined_r0x0077b6ff:
        if (pcVar1 < puVar9 + 2) goto LAB_0077b705;
        cVar7 = *pcVar11;
        lVar8 = (long)cVar7;
      }
      *puVar9 = 0;
      if (puVar13 == (undefined8 *)0x0) {
        uVar5 = 0xffffffff;
      }
      else {
        param_2[1] = puVar13;
        uVar5 = 1;
      }
    }
  }
  else {
LAB_0077b6a9:
    uVar5 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
LAB_0077b4f8:
  pcVar11 = param_1;
  if (cVar7 == '\0') goto LAB_0077b530;
  goto LAB_0077b4fc;
LAB_0077b598:
  pcVar10 = pcVar11;
  if (*pcVar11 == '\0') goto LAB_0077b5d4;
  goto LAB_0077b59c;
}

