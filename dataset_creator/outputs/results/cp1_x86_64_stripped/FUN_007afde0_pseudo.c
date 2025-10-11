
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_007afde0(undefined8 *param_1,long *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  ulong *puVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  short *psVar7;
  undefined4 *puVar8;
  long *plVar9;
  code *pcVar10;
  undefined8 uVar11;
  int iVar12;
  char cVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 (*pauVar16) [16];
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  bool bVar20;
  undefined1 auVar21 [16];
  ulong local_50;
  
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("conf->__refcount > 0","resolv_conf.c",0x244,"__resolv_conf_attach");
  }
  LOCK();
  bVar20 = DAT_0094b3f8 == 0;
  if (bVar20) {
    DAT_0094b3f8 = 1;
  }
  UNLOCK();
  if (!bVar20) {
    FUN_00709590(&DAT_0094b3f8);
  }
  pauVar16 = DAT_0094b400;
  if (DAT_0094b400 == (undefined1 (*) [16])0x0) {
    pauVar16 = (undefined1 (*) [16])FUN_00711600(1,0x58);
    if (pauVar16 == (undefined1 (*) [16])0x0) {
      return 0;
    }
    DAT_0094b400 = pauVar16;
    *(undefined8 *)pauVar16[1] = 0;
    *pauVar16 = (undefined1  [16])0x0;
    uVar18 = *(ulong *)(pauVar16[1] + 8);
    local_50 = (ulong)((uint)uVar18 & 1);
    if ((uVar18 & 1) != 0) {
      local_50 = uVar18 >> 1;
      uVar18 = 0;
      goto LAB_007b029c;
    }
LAB_007b019e:
    cVar13 = FUN_007a2e50(pauVar16,0,8);
    if (cVar13 != '\0') {
      lVar17 = *(long *)*pauVar16;
      *(long *)*pauVar16 = lVar17 + 1;
      *(long **)(*(long *)pauVar16[1] + lVar17 * 8) = param_2;
      goto LAB_007b01d0;
    }
  }
  else {
    uVar18 = *(ulong *)*DAT_0094b400;
    if ((*(ulong *)(DAT_0094b400[1] + 8) & 1) == 0) {
      if (*(ulong *)(*DAT_0094b400 + 8) == 0xffffffffffffffff) goto LAB_007b01db;
      local_50 = uVar18;
      if (uVar18 == *(ulong *)(*DAT_0094b400 + 8)) goto LAB_007b019e;
      pauVar1 = DAT_0094b400 + 1;
      *(ulong *)*DAT_0094b400 = uVar18 + 1;
      *(long **)(*(long *)*pauVar1 + uVar18 * 8) = param_2;
LAB_007b01d0:
      if (*(long *)(*pauVar16 + 8) != -1) {
LAB_007afe6c:
        *param_2 = *param_2 + 1;
        iVar12 = DAT_0094b3f8;
        if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("conf->__refcount > 0","resolv_conf.c",0x26a,"__resolv_conf_attach");
        }
        LOCK();
        DAT_0094b3f8 = 0;
        UNLOCK();
        if (1 < iVar12) {
          FUN_00709660(&DAT_0094b3f8);
        }
        *(byte *)((long)param_1 + 0x189) = *(byte *)((long)param_1 + 0x189) & 0xfe;
        *(undefined1 *)(param_1 + 0x10) = 0;
        *(undefined8 *)((long)param_1 + 500) = 0xffffffff;
        uVar15 = *(undefined8 *)((long)param_2 + 0x3c);
        param_1[0x30] = 0;
        *param_1 = uVar15;
        uVar5 = *(uint *)(param_2 + 7);
        bVar4 = *(byte *)((long)param_2 + 0x44);
        *(undefined1 (*) [16])(param_1 + 0x3c) = (undefined1  [16])0x0;
        param_1[1] = (ulong)uVar5;
        *(undefined4 *)(param_1 + 2) = 0;
        *(undefined2 *)(param_1 + 0x40) = 0;
        *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) & 0xf0 | bVar4 & 0xf;
        uVar18 = param_2[2];
        uVar19 = 3;
        if (uVar18 < 4) {
          uVar19 = uVar18;
        }
        if (uVar18 != 0) {
          lVar17 = param_2[1];
          uVar18 = 0;
          do {
            psVar7 = *(short **)(lVar17 + uVar18 * 8);
            if (*psVar7 == 2) {
              uVar15 = *(undefined8 *)(psVar7 + 4);
              puVar14 = (undefined8 *)((long)param_1 + uVar18 * 0x10 + 0x14);
              *puVar14 = *(undefined8 *)psVar7;
              puVar14[1] = uVar15;
              puVar14 = (undefined8 *)0x0;
            }
            else {
              if (*psVar7 != 10) {
                    /* WARNING: Subroutine does not return */
                FUN_006e2220("conf->nameserver_list[i]->sa_family == AF_INET6","resolv_conf.c",0x1f2
                             ,"update_from_conf");
              }
              *(undefined2 *)((long)param_1 + uVar18 * 0x10 + 0x14) = 0;
              puVar14 = (undefined8 *)FUN_007101b0(0x1c);
              if (puVar14 == (undefined8 *)0x0) {
                if (uVar18 != 0) {
                  puVar14 = param_1 + uVar18;
                  do {
                    puVar2 = param_1 + 0x43;
                    param_1 = param_1 + 1;
                    FUN_007104f0(*puVar2);
                  } while (puVar14 != param_1);
                }
                LOCK();
                bVar20 = DAT_0094b3f8 == 0;
                if (bVar20) {
                  DAT_0094b3f8 = 1;
                }
                UNLOCK();
                if (!bVar20) {
                  FUN_00709590(&DAT_0094b3f8);
                }
                pauVar16 = DAT_0094b400;
                if (DAT_0094b400 == (undefined1 (*) [16])0x0) {
                  pauVar16 = (undefined1 (*) [16])FUN_00711600(1,0x58);
                  if (pauVar16 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)invalidInstructionException();
                    (*pcVar10)();
                  }
                  DAT_0094b400 = pauVar16;
                  *(undefined8 *)pauVar16[1] = 0;
                  *pauVar16 = (undefined1  [16])0x0;
                }
                else if (local_50 < *(ulong *)*DAT_0094b400) {
                  puVar3 = (ulong *)(*(long *)DAT_0094b400[1] + local_50 * 8);
                  plVar9 = (long *)*puVar3;
                  if (((ulong)plVar9 & 1) == 0) {
                    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_007af000();
                    }
                    lVar17 = *plVar9 + -1;
                    if (lVar17 == 0) {
                      FUN_007104f0();
                    }
                    else {
                      *plVar9 = lVar17;
                    }
                    *puVar3 = *(ulong *)(pauVar16[1] + 8);
                    *(ulong *)(pauVar16[1] + 8) = local_50 * 2 + 1;
                  }
                }
                iVar12 = DAT_0094b3f8;
                LOCK();
                DAT_0094b3f8 = 0;
                UNLOCK();
                if (iVar12 < 2) {
                  DAT_0094b3f8 = 0;
                  return 0;
                }
                FUN_00709660(&DAT_0094b3f8);
                return 0;
              }
              uVar15 = *(undefined8 *)(psVar7 + 4);
              *puVar14 = *(undefined8 *)psVar7;
              puVar14[1] = uVar15;
              puVar14[2] = *(undefined8 *)(psVar7 + 8);
              *(undefined4 *)(puVar14 + 3) = *(undefined4 *)(psVar7 + 0xc);
            }
            param_1[uVar18 + 0x43] = puVar14;
            *(undefined4 *)((long)param_1 + uVar18 * 4 + 0x208) = 0xffffffff;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar19);
        }
        puVar14 = param_1 + 0x10;
        *(int *)(param_1 + 2) = (int)uVar19;
        auVar21._8_8_ = param_1 + 0x30;
        auVar21._0_8_ = puVar14;
        if ((undefined8 *)0xfffffffffffffeff < puVar14) {
          FUN_007a3000(puVar14,0x100);
        }
        uVar18 = param_2[4];
        uVar19 = uVar18;
        if (uVar18 != 0) {
          uVar19 = 0;
          while( true ) {
            uVar15 = auVar21._0_8_;
            auVar21 = FUN_007a2fc0(uVar15,auVar21._8_8_,*(undefined8 *)(param_2[3] + uVar19 * 8));
            if (auVar21._0_8_ == 0) break;
            param_1[uVar19 + 9] = uVar15;
            uVar19 = uVar19 + 1;
            if ((uVar18 <= uVar19) || (5 < uVar19)) goto LAB_007affd0;
          }
          param_1[uVar19 + 9] = 0;
        }
LAB_007affd0:
        uVar18 = param_2[6];
        param_1[uVar19 + 9] = 0;
        uVar19 = 10;
        if (uVar18 < 0xb) {
          uVar19 = uVar18;
        }
        if (uVar18 != 0) {
          puVar8 = (undefined4 *)param_2[5];
          *(undefined4 *)((long)param_1 + 0x18c) = *puVar8;
          *(undefined4 *)(param_1 + 0x32) = puVar8[1];
          if (1 < uVar18) {
            *(undefined4 *)((long)param_1 + 0x194) = puVar8[2];
            *(undefined4 *)(param_1 + 0x33) = puVar8[3];
            if (uVar18 != 2) {
              *(undefined4 *)((long)param_1 + 0x19c) = puVar8[4];
              *(undefined4 *)(param_1 + 0x34) = puVar8[5];
              if (uVar18 != 3) {
                *(undefined4 *)((long)param_1 + 0x1a4) = puVar8[6];
                *(undefined4 *)(param_1 + 0x35) = puVar8[7];
                if (uVar18 != 4) {
                  *(undefined4 *)((long)param_1 + 0x1ac) = puVar8[8];
                  *(undefined4 *)(param_1 + 0x36) = puVar8[9];
                  if (uVar18 != 5) {
                    *(undefined4 *)((long)param_1 + 0x1b4) = puVar8[10];
                    *(undefined4 *)(param_1 + 0x37) = puVar8[0xb];
                    if (uVar18 != 6) {
                      *(undefined4 *)((long)param_1 + 0x1bc) = puVar8[0xc];
                      *(undefined4 *)(param_1 + 0x38) = puVar8[0xd];
                      if (uVar18 != 7) {
                        *(undefined4 *)((long)param_1 + 0x1c4) = puVar8[0xe];
                        *(undefined4 *)(param_1 + 0x39) = puVar8[0xf];
                        if (uVar18 != 8) {
                          *(undefined4 *)((long)param_1 + 0x1cc) = puVar8[0x10];
                          *(undefined4 *)(param_1 + 0x3a) = puVar8[0x11];
                          if (9 < uVar18) {
                            uVar6 = puVar8[0x13];
                            *(undefined4 *)((long)param_1 + 0x1d4) = puVar8[0x12];
                            *(undefined4 *)(param_1 + 0x3b) = uVar6;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) & 0xf | (byte)((int)uVar19 << 4);
        uVar15 = FUN_007af030(param_1,param_2);
        if ((char)uVar15 != '\0') {
          param_1[0x46] = local_50 ^ 0x26a8fa5e48af8061;
          return uVar15;
        }
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("resolv_conf_matches (resp, conf)","resolv_conf.c",0x227,"update_from_conf");
      }
      goto LAB_007b01db;
    }
    local_50 = *(ulong *)(DAT_0094b400[1] + 8) >> 1;
    if (local_50 < uVar18) {
      puVar3 = (ulong *)(*(long *)DAT_0094b400[1] + local_50 * 8);
      uVar18 = *puVar3;
      *(ulong *)(DAT_0094b400[1] + 8) = uVar18;
      if ((uVar18 != 0) && ((uVar18 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("global_copy->free_list_start == 0 || global_copy->free_list_start & 1",
                     "resolv_conf.c",0x253,"__resolv_conf_attach");
      }
      *puVar3 = (ulong)param_2;
      goto LAB_007afe6c;
    }
LAB_007b029c:
    FUN_007c02d0(uVar18,local_50);
  }
  FUN_007104f0(*(undefined8 *)pauVar16[1]);
  uVar11 = _UNK_0082eb88;
  uVar15 = _DAT_0082eb80;
  *(undefined8 *)pauVar16[1] = 0;
  *(undefined8 *)*pauVar16 = uVar15;
  *(undefined8 *)(*pauVar16 + 8) = uVar11;
LAB_007b01db:
  iVar12 = DAT_0094b3f8;
  LOCK();
  DAT_0094b3f8 = 0;
  UNLOCK();
  if (1 < iVar12) {
    FUN_00709660(&DAT_0094b3f8);
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
  return 0;
}

