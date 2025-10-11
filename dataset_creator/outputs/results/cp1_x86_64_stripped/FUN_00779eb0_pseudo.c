
char FUN_00779eb0(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  long *plVar16;
  long in_FS_OFFSET;
  bool bVar17;
  byte bVar18;
  char local_215;
  char *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [48];
  long local_198;
  long local_190;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8 [17];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  bVar18 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x17) != 0) {
    local_215 = '\x01';
    *param_2 = param_1[(ulong)param_3 + 6];
    goto LAB_00779ef9;
  }
  local_215 = FUN_007aba10(local_1c8,"/etc/nsswitch.conf");
  if (local_215 != '\0') {
    piVar1 = (int *)(param_1 + 0x18);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 1;
    }
    UNLOCK();
    if (iVar6 != 0) {
      FUN_00709590(piVar1);
    }
    cVar4 = FUN_007ab940(local_1c8,param_1);
    if (cVar4 != '\0') {
      *param_2 = param_1[(ulong)param_3 + 6];
      LOCK();
      iVar6 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = 0;
      UNLOCK();
      if (1 < iVar6) {
        FUN_00709660(piVar1);
        local_215 = cVar4;
      }
      goto LAB_00779ef9;
    }
    iVar6 = FUN_0076d7d0(&DAT_00823afc,&local_198);
    if ((iVar6 != 0) ||
       ((param_1[0x19] != 0 &&
        ((param_1[0x19] != local_190 ||
         (bVar17 = local_198 != param_1[0x1a], local_198 = param_1[0x1a], bVar17)))))) {
      *(undefined4 *)(param_1 + 0x17) = 1;
      *param_2 = param_1[(ulong)param_3 + 6];
      LOCK();
      iVar6 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = 0;
      UNLOCK();
      if (1 < iVar6) {
        FUN_00709660(piVar1);
      }
      goto LAB_00779ef9;
    }
    param_1[0x19] = local_190;
    param_1[0x1a] = local_198;
    LOCK();
    iVar6 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = 0;
    UNLOCK();
    if (1 < iVar6) {
      FUN_00709660(piVar1);
    }
    puVar12 = &local_108;
    for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + (ulong)bVar18 * -2 + 1;
    }
    uStack_4c = CONCAT31(uStack_4c._1_3_,1);
    puVar7 = (uint *)FUN_006fda20("/etc/nsswitch.conf","rce");
    if (puVar7 == (uint *)0x0) {
      if ((*(uint *)(in_FS_OFFSET + -0x58) < 0x29) &&
         ((0x10000302006U >> ((ulong)*(uint *)(in_FS_OFFSET + -0x58) & 0x3f) & 1) != 0)) {
LAB_0077a2c8:
        if (local_d8[0x10] == 0) {
          local_d8[0x10] = local_d8[10];
        }
        if (local_d8[0xf] == 0) {
          local_d8[0xf] = local_d8[9];
        }
        if (local_d8[4] == 0) {
          local_d8[4] = local_d8[2];
        }
        plVar16 = local_d8;
        pcVar15 = "";
        do {
          pcVar13 = "files";
          if (*plVar16 == 0) {
            cVar4 = *pcVar15;
            if (cVar4 == '\x05') {
              pcVar13 = "nis nisplus";
            }
            else if (cVar4 < '\x06') {
              pcVar13 = "files dns";
              if ((cVar4 != '\x02') && (pcVar13 = "nis", cVar4 != '\x04')) {
                pcVar13 = "files";
              }
            }
            else if (cVar4 == '\x06') goto LAB_0077a330;
            lVar8 = FUN_007b0a40(pcVar13);
            *plVar16 = lVar8;
            if (lVar8 == 0) {
              if (*(int *)(in_FS_OFFSET + -0x58) != 0xc) {
                    /* WARNING: Subroutine does not return */
                FUN_006e2220("errno == ENOMEM","nss_database.c",0xa9,"nss_database_select_default");
              }
              if (puVar7 == (uint *)0x0) goto LAB_00779fe8;
              FUN_006fd190(puVar7);
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
              local_215 = '\0';
              goto LAB_00779ef9;
            }
          }
LAB_0077a330:
          plVar16 = plVar16 + 1;
          pcVar15 = pcVar15 + 1;
        } while (plVar16 != (long *)&uStack_50);
        cVar4 = FUN_007abb30(&local_108,puVar7);
        if (puVar7 != (uint *)0x0) {
          uVar3 = *(undefined4 *)(in_FS_OFFSET + -0x58);
          FUN_006fd190(puVar7);
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar3;
        }
        if (cVar4 != '\0') {
          cVar5 = FUN_007ab940(&local_108,local_1c8);
          if (cVar5 == '\0') {
            local_108 = 0xffffffffffffffff;
          }
          LOCK();
          iVar6 = *piVar1;
          if (iVar6 == 0) {
            *piVar1 = 1;
          }
          UNLOCK();
          if (iVar6 != 0) {
            FUN_00709590(piVar1);
          }
          if (*(int *)(param_1 + 0x17) == 0) {
            *param_1 = local_108;
            param_1[1] = uStack_100;
            param_1[2] = local_f8;
            param_1[3] = uStack_f0;
            param_1[4] = local_e8;
            param_1[5] = uStack_e0;
            param_1[6] = local_d8[0];
            param_1[7] = local_d8[1];
            param_1[8] = local_d8[2];
            param_1[9] = local_d8[3];
            param_1[10] = local_d8[4];
            param_1[0xb] = local_d8[5];
            param_1[0xc] = local_d8[6];
            param_1[0xd] = local_d8[7];
            param_1[0xe] = local_d8[8];
            param_1[0xf] = local_d8[9];
            param_1[0x10] = local_d8[10];
            param_1[0x11] = local_d8[0xb];
            param_1[0x12] = local_d8[0xc];
            param_1[0x13] = local_d8[0xd];
            param_1[0x14] = local_d8[0xe];
            param_1[0x15] = local_d8[0xf];
            param_1[0x16] = local_d8[0x10];
            param_1[0x17] = CONCAT44(uStack_4c,uStack_50);
          }
          *param_2 = param_1[(ulong)param_3 + 6];
          LOCK();
          iVar6 = *(int *)(param_1 + 0x18);
          *(int *)(param_1 + 0x18) = 0;
          UNLOCK();
          if (1 < iVar6) {
            FUN_00709660(piVar1);
            local_215 = cVar4;
          }
          goto LAB_00779ef9;
        }
      }
    }
    else {
      *puVar7 = *puVar7 | 0x8000;
      local_1d8 = (char *)0x0;
      local_1d0 = 0;
LAB_0077a0d0:
      lVar8 = FUN_007956f0(&local_1d8,&local_1d0,puVar7);
      if ((*puVar7 & 0x20) == 0) {
        if ((*puVar7 & 0x10) != 0) {
          FUN_007104f0(local_1d8);
          goto LAB_0077a2c8;
        }
        if (lVar8 < 1) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("ret > 0","nss_database.c",0x123,"nss_database_reload_1");
        }
        pcVar15 = local_1d8;
        while( true ) {
          uVar9 = (ulong)*pcVar15;
          uVar2 = *(ushort *)(*(long *)(in_FS_OFFSET + -0x40) + uVar9 * 2);
          if ((uVar2 & 0x2000) == 0) break;
          pcVar15 = pcVar15 + 1;
        }
        pcVar13 = pcVar15;
        if (*pcVar15 != '\0') {
          while (((uVar2 & 0x2000) == 0 && ((char)uVar9 != ':'))) {
            bVar18 = pcVar13[1];
            uVar9 = (ulong)bVar18;
            pcVar13 = pcVar13 + 1;
            if (bVar18 == 0) goto LAB_0077a0d0;
            uVar2 = *(ushort *)(*(long *)(in_FS_OFFSET + -0x40) + (long)(char)bVar18 * 2);
          }
          if (pcVar15 != pcVar13) {
            while (((uVar2 & 0x2000) != 0 || (pcVar14 = pcVar13, (char)uVar9 == ':'))) {
              bVar18 = pcVar13[1];
              uVar9 = (ulong)bVar18;
              pcVar14 = pcVar13 + 1;
              *pcVar13 = '\0';
              if (bVar18 == 0) break;
              uVar2 = *(ushort *)(*(long *)(in_FS_OFFSET + -0x40) + (long)(char)bVar18 * 2);
              pcVar13 = pcVar14;
            }
            uVar9 = 0;
            uVar10 = 0x11;
            while (uVar11 = uVar10, uVar9 < uVar11) {
              while( true ) {
                uVar10 = uVar9 + uVar11 >> 1;
                iVar6 = thunk_FUN_00712780(pcVar15,"aliases" + uVar10 * 0xe);
                if (iVar6 < 0) break;
                if (iVar6 == 0) {
                  lVar8 = FUN_007b0a40(pcVar14);
                  if (lVar8 == 0) goto LAB_00779fc0;
                  local_d8[(int)((long)(uVar10 * 0xe) >> 1) * -0x49249249] = lVar8;
                  goto LAB_0077a0d0;
                }
                uVar9 = uVar10 + 1;
                if (uVar11 <= uVar9) goto LAB_0077a0d0;
              }
            }
          }
        }
        goto LAB_0077a0d0;
      }
LAB_00779fc0:
      FUN_007104f0(local_1d8);
      uVar3 = *(undefined4 *)(in_FS_OFFSET + -0x58);
      FUN_006fd190(puVar7);
      *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar3;
    }
  }
LAB_00779fe8:
  local_215 = '\0';
LAB_00779ef9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return local_215;
}

