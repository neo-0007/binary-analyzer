
uint getanswer_r(u_char *param_1,int param_2,undefined8 *param_3,long param_4,ulong param_5,
                undefined4 *param_6,undefined4 *param_7,int param_8)

{
  ushort *puVar1;
  u_char *puVar2;
  undefined8 uVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  ushort *puVar9;
  size_t sVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ushort uVar15;
  uint uVar16;
  byte *pbVar17;
  byte *__s1;
  char *__s;
  uint uVar18;
  int iVar19;
  u_char *puVar20;
  long in_FS_OFFSET;
  bool bVar21;
  undefined8 *local_1a0;
  int local_198;
  undefined8 *local_178;
  int local_150;
  u_char local_148 [264];
  long local_40;
  
  uVar11 = (ulong)(-(int)param_4 & 7);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < uVar11 + 0x180) {
LAB_007b9d78:
    uVar16 = 0xfffffffe;
    *param_6 = 0x22;
    *param_7 = 0xffffffff;
  }
  else {
    iVar13 = (int)(param_5 - uVar11) + -0x180;
    local_198 = 0x7fffffff;
    if ((param_5 - uVar11) + -0x180 == (long)iVar13) {
      local_198 = iVar13;
    }
    uVar15 = *(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8;
    uVar16 = (uint)uVar15;
    uVar5 = *(ushort *)(param_1 + 6);
    if (uVar15 == 0) {
      if ((param_1[2] & 4) != 0) {
        *(undefined4 *)(in_FS_OFFSET + -0x18) = 1;
        goto LAB_007b999f;
      }
    }
    else {
      puVar20 = param_1 + 0xc;
      uVar16 = uVar15 - 1;
      puVar2 = param_1 + param_2;
      do {
        iVar13 = dn_skipname(puVar20,puVar2);
        if ((iVar13 < 0) || ((long)puVar2 - (long)(puVar20 + iVar13) < 4)) goto LAB_007b9a14;
        puVar20 = puVar20 + (long)iVar13 + 4;
        bVar21 = uVar16 != 0;
        uVar16 = uVar16 - 1;
      } while (bVar21);
      local_178 = (undefined8 *)(param_4 + uVar11);
      param_3[1] = local_178;
      *local_178 = 0;
      local_1a0._0_4_ = (ushort)(uVar5 << 8 | uVar5 >> 8) - 1;
      if ((puVar20 < puVar2) && ((int)local_1a0 != -1)) {
        local_150 = 0;
        pcVar8 = (char *)(local_178 + 0x30);
        __s = pcVar8;
        while (iVar13 = ns_name_unpack(param_1,puVar2,puVar20,local_148,0xff), iVar13 != -1) {
          iVar12 = ns_name_ntop(local_148,__s,(long)local_198);
          if (iVar12 == -1) {
            if (*(int *)(in_FS_OFFSET + -0x58) == 0x5a) goto LAB_007b9d78;
            break;
          }
          if ((iVar13 < 0) || (iVar12 = res_dnok(__s), iVar12 == 0)) break;
          puVar9 = (ushort *)(puVar20 + iVar13);
          if ((long)puVar2 - (long)puVar9 < 10) goto LAB_007b9a14;
          puVar1 = puVar9 + 5;
          uVar11 = (ulong)(ushort)(puVar9[4] << 8 | puVar9[4] >> 8);
          if ((long)puVar2 - (long)puVar1 < (long)uVar11) goto LAB_007b9a14;
          if (((ushort)(puVar9[1] << 8 | puVar9[1] >> 8) == 1) &&
             ((ushort)(*puVar9 << 8 | *puVar9 >> 8) == 0xc)) {
            iVar13 = ns_name_unpack(param_1,puVar2,(u_char *)puVar1,local_148,0xff);
            if (iVar13 == -1) goto LAB_007b999f;
            iVar12 = ns_name_ntop(local_148,__s,(long)local_198);
            if (iVar12 == -1) {
              if (*(int *)(in_FS_OFFSET + -0x58) != 0x5a) goto LAB_007b999f;
              goto LAB_007b9d78;
            }
            if ((iVar13 < 0) || (iVar13 = res_hnok(__s), iVar13 == 0)) goto LAB_007b999f;
            if (local_178 + 2 < pcVar8) {
              *local_178 = __s;
              local_178 = local_178 + 1;
              sVar10 = strlen(__s);
              local_150 = local_150 + 1;
              iVar13 = (int)sVar10 + 1;
              local_198 = local_198 - iVar13;
              __s = __s + iVar13;
              *(undefined4 *)(param_3 + 2) = 2;
            }
          }
          puVar20 = (u_char *)((long)puVar1 + uVar11);
          local_1a0._0_4_ = (int)local_1a0 + -1;
          if ((puVar2 <= puVar20) || ((int)local_1a0 == -1)) break;
        }
        if (local_150 != 0) {
          *local_178 = 0;
          local_1a0 = (undefined8 *)param_3[1];
          if (param_8 != 1) {
            uVar3 = *local_1a0;
            uVar16 = 1;
            *(undefined4 *)((long)param_3 + 0x14) = 0;
            *param_3 = uVar3;
            param_3[1] = local_1a0 + 1;
            goto LAB_007b999f;
          }
          __s1 = (byte *)*local_1a0;
          if (__s1 != (byte *)0x0) {
            lVar6 = *(long *)(in_FS_OFFSET + -0x40);
            lVar7 = *(long *)(in_FS_OFFSET + -0x50);
            do {
              uVar16 = (uint)*__s1;
              uVar18 = 0;
              iVar13 = 0;
              do {
                bVar4 = __s1[1];
                uVar14 = 10;
                if (((char)uVar16 == '0') && (bVar4 != 0x2e)) {
                  if ((bVar4 & 0xdf) != 0x58) {
                    __s1 = __s1 + 1;
                    if (bVar4 != 0) {
                      uVar14 = 8;
                      goto LAB_007b9b3e;
                    }
                    break;
                  }
                  bVar4 = __s1[2];
                  uVar11 = (ulong)(char)bVar4;
                  if ((bVar4 == 0x2e) || (bVar4 == 0)) break;
                  iVar12 = 0;
                  __s1 = __s1 + 2;
                  do {
                    pbVar17 = __s1;
                    uVar16 = (int)(char)uVar11 - 0x30;
                    if ((uVar16 < 10) && (uVar16 < 0x10)) {
                      iVar12 = iVar12 * 0x10 + uVar16;
                    }
                    else if ((*(byte *)(lVar6 + 1 + uVar11 * 2) & 0x10) != 0) {
                      iVar12 = iVar12 * 0x10 + -0x57 + *(int *)(lVar7 + uVar11 * 4);
                    }
                    bVar4 = pbVar17[1];
                    uVar11 = (ulong)(char)bVar4;
                    __s1 = pbVar17 + 1;
                    if (bVar4 == 0) goto LAB_007b9b75;
                  } while (bVar4 != 0x2e);
                }
                else {
LAB_007b9b3e:
                  uVar11 = (ulong)(uint)(int)(char)*__s1;
                  iVar12 = 0;
                  do {
                    pbVar17 = __s1;
                    uVar16 = (int)uVar11 - 0x30;
                    if ((uVar16 < 10) && (uVar16 < uVar14)) {
                      iVar12 = iVar12 * uVar14 + uVar16;
                    }
                    bVar4 = pbVar17[1];
                    uVar11 = (ulong)(uint)(int)(char)bVar4;
                    __s1 = pbVar17 + 1;
                    if (bVar4 == 0x2e) goto LAB_007b9b79;
                  } while (bVar4 != 0);
LAB_007b9b75:
                  if ((char)uVar11 != '.') break;
                }
LAB_007b9b79:
                uVar16 = (uint)(char)__s1[1];
                __s1 = pbVar17 + 2;
                iVar19 = iVar13 + 8;
                uVar18 = uVar18 | iVar12 << ((byte)iVar13 & 0x1f);
                if ((9 < uVar16 - 0x30) &&
                   (iVar13 = strcasecmp((char *)__s1,"in-addr.arpa"), iVar13 == 0)) {
                  uVar16 = 1;
                  *(uint *)((long)param_3 + 0x14) = uVar18;
                  goto LAB_007b999f;
                }
                iVar13 = iVar19;
              } while (iVar19 != 0x20);
              local_1a0 = local_1a0 + 1;
              __s1 = (byte *)*local_1a0;
            } while (__s1 != (byte *)0x0);
          }
        }
      }
    }
    *(undefined4 *)(in_FS_OFFSET + -0x18) = 2;
    uVar16 = 0xfffffffe;
  }
  goto LAB_007b999f;
LAB_007b9a14:
  uVar16 = 0xffffffff;
  *(undefined4 *)(in_FS_OFFSET + -0x18) = 3;
LAB_007b999f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar16;
}

