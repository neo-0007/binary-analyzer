
long read_alias_file(void *param_1,int param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  char **ppcVar6;
  byte *pbVar7;
  byte bVar8;
  char *pcVar9;
  FILE *__stream;
  size_t sVar10;
  void *pvVar11;
  long *plVar12;
  byte *pbVar13;
  char *__n;
  char **ppcVar14;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  char *pcVar20;
  byte *__s;
  byte *__s_00;
  long in_FS_OFFSET;
  char *local_228;
  char *local_220;
  size_t local_218;
  size_t local_210;
  char *local_208;
  char *local_200;
  char *local_1f8;
  char *local_1f0;
  ulong local_1e8;
  long local_1e0;
  byte local_1d8;
  byte local_1d7 [407];
  long local_40;
  char **ppcVar15;
  
  ppcVar14 = &local_228;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = (long)param_2 + 0x25;
  ppcVar15 = &local_228;
  ppcVar6 = &local_228;
  while (ppcVar15 != (char **)((long)&local_228 - (uVar16 & 0xfffffffffffff000))) {
    ppcVar14 = (char **)((long)ppcVar6 + -0x1000);
    *(undefined8 *)((long)ppcVar6 + -8) = *(undefined8 *)((long)ppcVar6 + -8);
    ppcVar15 = (char **)((long)ppcVar6 + -0x1000);
    ppcVar6 = (char **)((long)ppcVar6 + -0x1000);
  }
  uVar16 = (ulong)((uint)uVar16 & 0xff0);
  lVar5 = -uVar16;
  if (uVar16 != 0) {
    *(undefined8 *)((long)ppcVar14 + -8) = *(undefined8 *)((long)ppcVar14 + -8);
  }
  *(undefined8 *)((long)ppcVar14 + lVar5 + -8) = 0x6dbaed;
  pcVar9 = (char *)mempcpy((char *)((ulong)((long)ppcVar14 + lVar5 + 0xf) & 0xfffffffffffffff0),
                           param_1,(long)param_2);
  *(undefined8 *)pcVar9 = aliasfile_0._0_8_;
  *(undefined4 *)(pcVar9 + 8) = aliasfile_0._8_4_;
  *(undefined2 *)(pcVar9 + 0xc) = aliasfile_0._12_2_;
  *(undefined8 *)((long)ppcVar14 + lVar5 + -8) = 0x6dbb1a;
  __stream = fopen((char *)((ulong)((long)ppcVar14 + lVar5 + 0xf) & 0xfffffffffffffff0),"rce");
  if (__stream == (FILE *)0x0) {
    local_1e0 = 0;
  }
  else {
    uVar3 = __stream->_flags;
    local_1e0 = 0;
    __stream->_flags = uVar3 | 0x8000;
    if ((uVar3 & 0x10) == 0) {
      do {
        *(undefined8 *)((long)ppcVar14 + lVar5 + -8) = 0x6dbb60;
        pcVar9 = fgets_unlocked((char *)&local_1d8,400,__stream);
        if (pcVar9 == (char *)0x0) break;
        *(undefined8 *)((long)ppcVar14 + lVar5 + -8) = 0x6dbb75;
        pcVar9 = strchr((char *)&local_1d8,10);
        lVar4 = *(long *)(in_FS_OFFSET + -0x40);
        bVar2 = *(byte *)(lVar4 + 1 + (ulong)local_1d8 * 2);
        __s = &local_1d8;
        bVar8 = local_1d8;
        while ((bVar2 & 0x20) != 0) {
          bVar8 = __s[1];
          __s = __s + 1;
          bVar2 = *(byte *)(lVar4 + 1 + (ulong)bVar8 * 2);
        }
        if ((bVar8 != 0) && (bVar8 != 0x23)) {
          bVar2 = __s[1];
          pbVar7 = __s + 1;
          uVar16 = (ulong)bVar2;
          do {
            __s_00 = pbVar7;
            if (bVar2 == 0) goto LAB_006dbc85;
            bVar2 = __s_00[1];
            lVar1 = uVar16 * 2;
            pbVar7 = __s_00 + 1;
            uVar16 = (ulong)bVar2;
          } while ((*(byte *)(lVar4 + 1 + lVar1) & 0x20) == 0);
          *__s_00 = 0;
          __s_00 = __s_00 + 1;
LAB_006dbc85:
          bVar8 = (byte)uVar16;
          bVar2 = *(byte *)(lVar4 + 1 + uVar16 * 2);
          while ((bVar2 & 0x20) != 0) {
            bVar8 = __s_00[1];
            __s_00 = __s_00 + 1;
            bVar2 = *(byte *)(lVar4 + 1 + (ulong)bVar8 * 2);
          }
          if (bVar8 != 0) {
            bVar2 = __s_00[1];
            pbVar7 = __s_00;
            while (bVar2 != 0) {
              pbVar13 = pbVar7 + 1;
              if ((*(byte *)(lVar4 + 1 + (ulong)bVar2 * 2) & 0x20) != 0) {
                if (bVar2 == 10) {
                  pbVar13[0] = 0;
                  pbVar13[1] = 10;
                }
                else {
                  *pbVar13 = 0;
                }
                break;
              }
              bVar2 = pbVar7[2];
              pbVar7 = pbVar13;
            }
            local_1e8 = nmap;
            uVar16 = maxmap;
            plVar12 = map;
            if (maxmap <= nmap) {
              if (maxmap == 0) {
                sVar10 = 0x640;
                uVar16 = 100;
              }
              else {
                uVar16 = maxmap * 2;
                sVar10 = maxmap << 5;
              }
              *(undefined8 *)((long)ppcVar14 + lVar5 + -8) = 0x6dbebf;
              local_1f0 = pcVar9;
              plVar12 = (long *)realloc(map,sVar10);
              pcVar9 = local_1f0;
              if (plVar12 == (long *)0x0) break;
            }
            map = plVar12;
            maxmap = uVar16;
            *(undefined8 *)((long)ppcVar14 + lVar5 + -8) = 0x6dbd13;
            local_200 = pcVar9;
            sVar10 = strlen((char *)__s);
            local_1f0 = (char *)(sVar10 + 1);
            *(undefined8 *)((long)ppcVar14 + lVar5 + -8) = 0x6dbd26;
            sVar10 = strlen((char *)__s_00);
            sVar10 = sVar10 + 1;
            pcVar9 = string_space_act + (long)local_1f0;
            local_1f8 = pcVar9 + sVar10;
            __n = local_1f0;
            local_210 = sVar10;
            pcVar20 = string_space_act;
            plVar12 = map;
            if (string_space_max < local_1f8) {
              uVar16 = (long)local_1f0 + sVar10;
              local_228 = string_space_act;
              local_220 = local_200;
              if (uVar16 < 0x400) {
                uVar16 = 0x400;
              }
              local_210 = (size_t)local_1f0;
              local_208 = string_space_max + uVar16;
              local_200 = (char *)string_space;
              *(undefined8 *)((long)ppcVar14 + lVar5 + -8) = 0x6dbdbe;
              local_218 = sVar10;
              local_1f0 = pcVar9;
              pvVar11 = realloc(string_space,(size_t)local_208);
              plVar12 = map;
              if (pvVar11 == (void *)0x0) break;
              if (((char *)pvVar11 != local_200) && (local_1e8 != 0)) {
                plVar19 = map + local_1e8 * 2;
                plVar17 = map;
                do {
                  plVar18 = plVar17 + 2;
                  *plVar17 = (long)pvVar11 + (*plVar17 - (long)local_200);
                  plVar17[1] = (long)pvVar11 + (plVar17[1] - (long)local_200);
                  plVar17 = plVar18;
                } while (plVar18 != plVar19);
              }
              string_space_max = local_208;
              local_200 = local_220;
              __n = (char *)local_210;
              local_210 = local_218;
              pcVar20 = local_228;
              string_space = pvVar11;
              pcVar9 = local_1f0;
            }
            local_1f0 = pcVar9;
            lVar4 = local_1e8 * 2;
            *(undefined8 *)((long)ppcVar14 + lVar5 + -8) = 0x6dbe41;
            local_208 = local_200;
            local_200 = (char *)string_space;
            pvVar11 = memcpy((char *)((long)string_space + (long)pcVar20),__s,(size_t)__n);
            plVar12[lVar4] = (long)pvVar11;
            *(undefined8 *)((long)ppcVar14 + lVar5 + -8) = 0x6dbe64;
            pvVar11 = memcpy(local_1f0 + (long)local_200,__s_00,local_210);
            local_1e0 = local_1e0 + 1;
            nmap = local_1e8 + 1;
            string_space_act = local_1f8;
            (plVar12 + lVar4)[1] = (long)pvVar11;
            pcVar9 = local_208;
          }
        }
        while (pcVar9 == (char *)0x0) {
          *(undefined8 *)((long)ppcVar14 + lVar5 + -8) = 0x6dbc42;
          pcVar9 = fgets_unlocked((char *)&local_1d8,400,__stream);
          if (pcVar9 == (char *)0x0) break;
          *(undefined8 *)((long)ppcVar14 + lVar5 + -8) = 0x6dbc2d;
          pcVar9 = strchr((char *)&local_1d8,10);
        }
      } while ((__stream->_flags & 0x10) == 0);
      *(undefined8 *)((long)ppcVar14 + lVar5 + -8) = 0x6dbbcb;
      fclose(__stream);
      if (local_1e0 != 0) {
        *(undefined8 *)((long)ppcVar14 + lVar5 + -8) = 0x6dbbf4;
        qsort(map,nmap,0x10,alias_compare);
      }
    }
    else {
      *(undefined8 *)((long)ppcVar14 + lVar5 + -8) = 0x6dbf5d;
      fclose(__stream);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_1e0;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)ppcVar14 + lVar5 + -8) = &UNK_006dbf67;
  __stack_chk_fail_local();
}

