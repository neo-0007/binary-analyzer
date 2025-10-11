
int __gconv_open(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  char *__src;
  int iVar3;
  size_t sVar4;
  undefined2 *puVar5;
  ulong *puVar6;
  void *pvVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar11;
  char *pcVar12;
  undefined4 uVar13;
  char *pcVar14;
  long lVar15;
  long in_FS_OFFSET;
  undefined1 auStack_98 [8];
  undefined8 *local_90;
  int local_84;
  ulong *local_80;
  size_t local_78;
  size_t local_70;
  ulong local_68;
  char *local_60;
  size_t local_50;
  ulong local_48;
  long local_40;
  undefined1 *puVar10;
  
  puVar10 = auStack_98;
  puVar9 = auStack_98;
  pcVar12 = (char *)param_1[1];
  cVar1 = *(char *)(param_1 + 2);
  bVar2 = *(byte *)((long)param_1 + 0x11);
  pcVar14 = (char *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar11 = auStack_98;
  local_90 = param_2;
  if (((*pcVar12 == '/') && (puVar11 = auStack_98, pcVar12[1] == '/')) &&
     (puVar11 = auStack_98, pcVar12[2] == '\0')) {
    local_60 = *(char **)(**(long **)(in_FS_OFFSET + -0xd8) + 0xb0);
    sVar4 = strlen(local_60);
    puVar11 = auStack_98;
    while (puVar10 != auStack_98 + -(sVar4 + 0x1a & 0xfffffffffffff000)) {
      puVar9 = puVar11 + -0x1000;
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      puVar10 = puVar11 + -0x1000;
      puVar11 = puVar11 + -0x1000;
    }
    uVar8 = (ulong)((uint)(sVar4 + 0x1a) & 0xff0);
    lVar15 = -uVar8;
    puVar11 = puVar9 + lVar15;
    if (uVar8 != 0) {
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    }
    pcVar12 = (char *)((ulong)(puVar9 + lVar15 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar9 + lVar15 + -8) = 0x6c90cb;
    puVar5 = (undefined2 *)mempcpy(pcVar12,local_60,sVar4);
    *puVar5 = 0x2f2f;
    *(undefined1 *)(puVar5 + 1) = 0;
  }
  if (((*pcVar14 == '/') && (pcVar14[1] == '/')) && (pcVar14[2] == '\0')) {
    pcVar14 = *(char **)(**(long **)(in_FS_OFFSET + -0xd8) + 0xb0);
    local_60 = pcVar14;
    *(undefined8 *)(puVar11 + -8) = 0x6c9121;
    sVar4 = strlen(pcVar14);
    __src = local_60;
    for (puVar9 = puVar11; puVar9 != puVar11 + -(sVar4 + 0x1a & 0xfffffffffffff000);
        puVar9 = puVar9 + -0x1000) {
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    }
    uVar8 = (ulong)((uint)(sVar4 + 0x1a) & 0xff0);
    lVar15 = -uVar8;
    puVar11 = puVar9 + lVar15;
    if (uVar8 != 0) {
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
    }
    pcVar14 = (char *)((ulong)(puVar9 + lVar15 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar9 + lVar15 + -8) = 0x6c917c;
    puVar5 = (undefined2 *)mempcpy(pcVar14,__src,sVar4);
    *puVar5 = 0x2f2f;
    *(undefined1 *)(puVar5 + 1) = 0;
  }
  *(undefined8 *)(puVar11 + -8) = 0x6c91a6;
  local_84 = __gconv_find_transform(pcVar12,pcVar14,&local_50,&local_48,param_3);
  uVar8 = local_48;
  local_80 = (ulong *)0x0;
  if (local_84 != 0) goto LAB_006c91b5;
  local_68 = local_48;
  sVar4 = local_48 * 0x30;
  *(undefined8 *)(puVar11 + -8) = 0x6c920d;
  puVar6 = (ulong *)malloc(sVar4 + 0x10);
  local_70 = local_50;
  local_78 = local_50;
  if (puVar6 != (ulong *)0x0) {
    puVar6[1] = local_50;
    *puVar6 = uVar8;
    local_80 = puVar6;
    *(undefined8 *)(puVar11 + -8) = 0x6c923e;
    memset(puVar6 + 2,0,sVar4);
    if (uVar8 != 0) {
      local_60 = (char *)CONCAT44(local_60._4_4_,(uint)bVar2 + (uint)bVar2);
      if (cVar1 == '\0') {
        lVar15 = 0;
        uVar8 = 0;
        puVar6 = puVar6 + 7;
        while( true ) {
          puVar6[-1] = (ulong)puVar6;
          if (local_68 == uVar8 + 1) break;
          *(uint *)(puVar6 + -3) = (uint)local_60;
          sVar4 = (size_t)(*(int *)(local_70 + 0x54 + lVar15) * 0x1fe0);
          *(undefined8 *)(puVar11 + -8) = 0x6c9287;
          pvVar7 = malloc(sVar4);
          puVar6[-5] = (ulong)pvVar7;
          if (pvVar7 == (void *)0x0) goto LAB_006c93a3;
          lVar15 = lVar15 + 0x68;
          puVar6[-4] = (long)pvVar7 + sVar4;
          uVar8 = uVar8 + 1;
          puVar6 = puVar6 + 6;
        }
LAB_006c92b4:
        *(uint *)(local_80 + uVar8 * 6 + 4) = (uint)local_60 | 1;
      }
      else {
        lVar15 = 0;
        uVar8 = 0;
        puVar6 = local_80 + 7;
        do {
          puVar6[-1] = (ulong)puVar6;
          pcVar12 = *(char **)(local_78 + 0x18 + lVar15);
          *(undefined8 *)(puVar11 + -8) = 0x6c9360;
          iVar3 = strcasecmp_l(pcVar12,"INTERNAL",(__locale_t)_nl_C_locobj);
          if (iVar3 == 0) {
            local_60 = (char *)((ulong)local_60 | 8);
          }
          local_68 = local_48;
          if (local_48 - 1 <= uVar8) goto LAB_006c92b4;
          *(uint *)(puVar6 + -3) = (uint)local_60;
          local_78 = local_50;
          sVar4 = (size_t)(*(int *)(local_50 + 0x54 + lVar15) * 0x1fe0);
          local_70 = sVar4;
          *(undefined8 *)(puVar11 + -8) = 0x6c9317;
          pvVar7 = malloc(sVar4);
          puVar6[-5] = (ulong)pvVar7;
          if (pvVar7 == (void *)0x0) goto LAB_006c93a3;
          uVar8 = uVar8 + 1;
          lVar15 = lVar15 + 0x68;
          puVar6[-4] = (long)pvVar7 + local_70;
          puVar6 = puVar6 + 6;
        } while (uVar8 < local_68);
      }
    }
    goto LAB_006c91b5;
  }
  uVar13 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  local_80 = puVar6;
LAB_006c93f3:
  local_70 = local_50;
  *(undefined8 *)(puVar11 + -8) = 0x6c93fc;
  __gconv_close_transform(local_50,local_48);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar13;
  local_84 = 3;
  local_80 = (ulong *)0x0;
LAB_006c91b5:
  *local_90 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_84;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar11 + -8) = 0x6c941a;
  __stack_chk_fail_local();
LAB_006c93a3:
  lVar15 = uVar8 - 1;
  uVar13 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  if (uVar8 != 0) {
    puVar6 = local_80 + uVar8 * 6 + -4;
    do {
      pvVar7 = (void *)*puVar6;
      lVar15 = lVar15 + -1;
      puVar6 = puVar6 + -6;
      *(undefined8 *)(puVar11 + -8) = 0x6c93d9;
      free(pvVar7);
    } while (lVar15 != -1);
  }
  puVar6 = local_80;
  *(undefined8 *)(puVar11 + -8) = 0x6c93e8;
  free(puVar6);
  goto LAB_006c93f3;
}

