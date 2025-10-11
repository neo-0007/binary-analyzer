
undefined * FUN_006df4c0(char *param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  char *pcVar22;
  int iVar23;
  char *pcVar24;
  long *plVar25;
  char *pcVar26;
  long lVar27;
  undefined8 *puVar28;
  long in_FS_OFFSET;
  undefined1 auStack_98 [8];
  char *local_90;
  undefined *local_88;
  undefined8 local_80;
  char *local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  long local_40;
  undefined1 *puVar17;
  
  puVar17 = auStack_98;
  puVar16 = auStack_98;
  puVar15 = auStack_98;
  local_70 = (char *)*param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = param_2;
  if (((*local_70 == '\0') &&
      ((local_70 = (char *)FUN_006e8e30("LC_ALL"), local_70 == (char *)0x0 || (*local_70 == '\0'))))
     && (((local_70 = (char *)FUN_006e8e30("LC_COLLATE" + (byte)(&DAT_00823a20)[param_3]),
          local_70 == (char *)0x0 || (*local_70 == '\0')) &&
         ((local_70 = (char *)FUN_006e8e30(&DAT_00823ad0), local_70 == (char *)0x0 ||
          (*local_70 == '\0')))))) {
    pcVar26 = "C";
    local_70 = "C";
    iVar5 = thunk_FUN_00712780("C","C");
  }
  else {
    pcVar26 = local_70;
    iVar5 = thunk_FUN_00712780(local_70,"C");
  }
  if ((iVar5 == 0) || (iVar5 = thunk_FUN_00712780(pcVar26,"POSIX"), iVar5 == 0)) {
    *param_4 = "C";
    puVar9 = (&PTR_PTR_00939bc0)[param_3];
    goto LAB_006df5cc;
  }
  uVar7 = thunk_FUN_007129d0(pcVar26);
  if ((uVar7 < 0x100) && (lVar8 = FUN_00713ef0(pcVar26,uVar7,&DAT_00823af9,4), lVar8 == 0)) {
    if (uVar7 == 2) {
      if (*pcVar26 == '.') {
        if ((pcVar26[1] == '.') || (lVar8 = thunk_FUN_007134f0(pcVar26,0x2f,2), lVar8 != 0))
        goto LAB_006df620;
      }
      else {
LAB_006df58c:
        lVar8 = thunk_FUN_007134f0(pcVar26,0x2f,uVar7);
        if ((lVar8 != 0) && (*pcVar26 != '/')) goto LAB_006df620;
      }
      *param_4 = local_70;
      if (param_1 == (char *)0x0) {
        puVar9 = (undefined *)FUN_006e0430(param_3,param_4);
        puVar15 = auStack_98;
        if (puVar9 != (undefined *)0x0) goto LAB_006df5cc;
        local_70 = (char *)FUN_006e5980(*param_4);
        if (local_70 != (char *)0x0) {
          puVar9 = (undefined *)FUN_006e0430(param_3,&local_70);
          puVar15 = auStack_98;
          if (puVar9 != (undefined *)0x0) goto LAB_006df5cc;
          local_80 = 0x10;
          param_1 = "/usr/lib/locale";
          goto LAB_006df6f4;
        }
        local_80 = 0x10;
        param_1 = "/usr/lib/locale";
LAB_006df9a7:
        local_70 = (char *)*param_4;
      }
      else {
        local_70 = (char *)FUN_006e5980();
LAB_006df6f4:
        if (local_70 == (char *)0x0) goto LAB_006df9a7;
      }
      pcVar26 = local_70;
      lVar8 = thunk_FUN_007129d0(local_70);
      puVar15 = auStack_98;
      while (puVar17 != auStack_98 + -(lVar8 + 0x18U & 0xfffffffffffff000)) {
        puVar16 = puVar15 + -0x1000;
        *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
        puVar17 = puVar15 + -0x1000;
        puVar15 = puVar15 + -0x1000;
      }
      uVar7 = (ulong)((uint)(lVar8 + 0x18U) & 0xff0);
      lVar27 = -uVar7;
      puVar20 = puVar16 + lVar27;
      puVar18 = puVar16 + lVar27;
      puVar15 = puVar16 + lVar27;
      if (uVar7 != 0) {
        *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + -8);
      }
      *(undefined8 *)(puVar16 + lVar27 + -8) = 0x6df762;
      uVar10 = thunk_FUN_00713a50((ulong)(puVar16 + lVar27 + 0xf) & 0xfffffffffffffff0,pcVar26,
                                  lVar8 + 1);
      *(undefined8 *)(puVar16 + lVar27 + -8) = 0x6df77e;
      uVar6 = FUN_006e6230(uVar10,&local_68,&local_60,&local_58,&local_50,&local_48);
      puVar21 = puVar16 + lVar27;
      if (uVar6 == 0xffffffff) {
LAB_006dfc40:
        puVar9 = (undefined *)0x0;
        puVar15 = puVar21;
      }
      else {
        lVar8 = (long)param_3;
        *(undefined8 *)(puVar16 + lVar27 + -0x10) = 0;
        local_90 = "LC_COLLATE" + (byte)(&DAT_00823a20)[lVar8];
        *(char **)(puVar16 + lVar27 + -0x18) = local_90;
        local_88 = &DAT_00946160 + lVar8 * 8;
        *(long *)(puVar16 + lVar27 + -0x20) = local_60;
        *(undefined8 *)(puVar16 + lVar27 + -0x28) = local_48;
        *(char **)(puVar16 + lVar27 + -0x30) = local_50;
        *(undefined8 *)(puVar16 + lVar27 + -0x38) = 0x6df7e1;
        puVar11 = (undefined8 *)FUN_006e5b30(local_88,param_1,local_80,uVar6,local_68,local_58);
        if (puVar11 == (undefined8 *)0x0) {
          *(undefined8 *)(puVar16 + lVar27 + -0x10) = 1;
          *(char **)(puVar16 + lVar27 + -0x18) = local_90;
          *(long *)(puVar16 + lVar27 + -0x20) = local_60;
          *(undefined8 *)(puVar16 + lVar27 + -0x28) = local_48;
          *(char **)(puVar16 + lVar27 + -0x30) = local_50;
          *(undefined8 *)(puVar16 + lVar27 + -0x38) = 0x6dfc28;
          puVar11 = (undefined8 *)FUN_006e5b30(local_88,param_1,local_80,uVar6,local_68,local_58);
          puVar21 = puVar16 + lVar27;
          if (puVar11 == (undefined8 *)0x0) goto LAB_006dfc40;
        }
        if ((uVar6 & 1) != 0) {
          *(undefined8 *)(puVar16 + lVar27 + -8) = 0x6dfc69;
          FUN_007104f0(local_48);
        }
        if (*(int *)(puVar11 + 1) == 0) {
          *(undefined8 *)(puVar16 + lVar27 + -8) = 0x6dfc5b;
          FUN_006e0030(puVar11,param_3);
        }
        plVar25 = (long *)puVar11[2];
        puVar14 = puVar11;
        if (plVar25 == (long *)0x0) {
          puVar14 = (undefined8 *)puVar11[4];
          if (puVar14 != (undefined8 *)0x0) {
            puVar28 = puVar11 + 4;
            do {
              if (*(int *)(puVar14 + 1) == 0) {
                *(undefined8 *)(puVar16 + lVar27 + -8) = 0x6dfcb1;
                FUN_006e0030(puVar14,param_3);
                puVar14 = (undefined8 *)*puVar28;
              }
              plVar25 = (long *)puVar14[2];
              if (plVar25 != (long *)0x0) {
                puVar11[4] = puVar14;
                goto LAB_006df81e;
              }
              puVar14 = (undefined8 *)puVar28[1];
              puVar28 = puVar28 + 1;
            } while (puVar14 != (undefined8 *)0x0);
          }
          puVar11[4] = 0;
          puVar9 = (undefined *)0x0;
          puVar15 = puVar16 + lVar27;
          goto LAB_006df5cc;
        }
LAB_006df81e:
        if (local_50 != (char *)0x0) {
          pcVar26 = (char *)plVar25[(long)*(int *)(&DAT_00823b20 + lVar8 * 4) + 8];
          if (pcVar26 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar16 + lVar27 + -8) = 0x6dfd61;
            FUN_006e2220("locale_codeset != NULL","findlocale.c",0x11a,"_nl_find_locale");
          }
          *(undefined8 *)(puVar16 + lVar27 + -8) = 0x6df84c;
          lVar8 = thunk_FUN_007129d0(pcVar26);
          puVar3 = PTR_DAT_00939cb8;
          puVar9 = PTR_DAT_00939ca8;
          puVar21 = puVar16 + lVar27;
          while (puVar18 != puVar16 + (lVar27 - (lVar8 + 0x1aU & 0xfffffffffffff000))) {
            puVar15 = puVar21 + -0x1000;
            *(undefined8 *)(puVar21 + -8) = *(undefined8 *)(puVar21 + -8);
            puVar18 = puVar21 + -0x1000;
            puVar21 = puVar21 + -0x1000;
          }
          uVar7 = (ulong)((uint)(lVar8 + 0x1aU) & 0xff0);
          lVar8 = -uVar7;
          puVar19 = puVar15 + lVar8;
          puVar16 = puVar15 + lVar8;
          if (uVar7 != 0) {
            *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
          }
          cVar1 = *pcVar26;
          pcVar24 = (char *)((ulong)(puVar15 + lVar8 + 0xf) & 0xfffffffffffffff0);
          if (cVar1 == '\0') {
            iVar5 = 1;
            pcVar22 = pcVar24;
LAB_006dfa9a:
            lVar27 = (ulong)(2 - iVar5) + 1;
            if (2 < iVar5) {
              lVar27 = 1;
            }
            *(undefined8 *)(puVar15 + lVar8 + -8) = 0x6dfac0;
            lVar13 = thunk_FUN_00713720(pcVar22,0x2f,lVar27);
            pcVar22 = (char *)(lVar13 + lVar27);
          }
          else {
            iVar23 = 0;
            pcVar12 = pcVar24;
            do {
              bVar4 = (byte)(*(ushort *)(puVar9 + (long)cVar1 * 2) >> 3) & 1;
              if ((byte)(cVar1 - 0x2cU) < 0x34) {
                bVar4 = bVar4 | (byte)(-0x8000000004008 >> (cVar1 - 0x2cU & 0x3f)) & 1 ^ 1;
              }
              if (bVar4 == 0) {
                pcVar22 = pcVar12;
                if (cVar1 == '/') {
                  iVar23 = iVar23 + 1;
                  if (iVar23 == 3) goto LAB_006dfac6;
                  *pcVar12 = '/';
                  pcVar22 = pcVar12 + 1;
                }
              }
              else {
                pcVar22 = pcVar12 + 1;
                *pcVar12 = (char)*(undefined4 *)(puVar3 + (long)cVar1 * 4);
              }
              cVar1 = pcVar26[1];
              pcVar26 = pcVar26 + 1;
              pcVar12 = pcVar22;
            } while (cVar1 != '\0');
            iVar5 = iVar23 + 1;
            if (iVar23 < 2) goto LAB_006dfa9a;
          }
LAB_006dfac6:
          *pcVar22 = '\0';
          *(undefined8 *)(puVar15 + lVar8 + -8) = 0x6dfad1;
          lVar27 = thunk_FUN_007129d0(local_50);
          puVar9 = PTR_DAT_00939ca8;
          puVar21 = puVar15 + lVar8;
          while (puVar19 != puVar15 + (lVar8 - (lVar27 + 0x1aU & 0xfffffffffffff000))) {
            puVar16 = puVar21 + -0x1000;
            *(undefined8 *)(puVar21 + -8) = *(undefined8 *)(puVar21 + -8);
            puVar19 = puVar21 + -0x1000;
            puVar21 = puVar21 + -0x1000;
          }
          uVar7 = (ulong)((uint)(lVar27 + 0x1aU) & 0xff0);
          lVar8 = -uVar7;
          puVar20 = puVar16 + lVar8;
          if (uVar7 != 0) {
            *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + -8);
          }
          cVar1 = *local_50;
          pcVar26 = (char *)((ulong)(puVar16 + lVar8 + 0xf) & 0xfffffffffffffff0);
          if (cVar1 == '\0') {
            iVar5 = 1;
            pcVar22 = pcVar26;
LAB_006df9c2:
            lVar27 = (ulong)(2 - iVar5) + 1;
            if (2 < iVar5) {
              lVar27 = 1;
            }
            *(undefined8 *)(puVar16 + lVar8 + -8) = 0x6df9e8;
            lVar13 = thunk_FUN_00713720(pcVar22,0x2f,lVar27);
            pcVar22 = (char *)(lVar13 + lVar27);
          }
          else {
            iVar23 = 0;
            pcVar12 = pcVar26;
            do {
              bVar4 = (byte)(*(ushort *)(puVar9 + (long)cVar1 * 2) >> 3) & 1;
              if ((byte)(cVar1 - 0x2cU) < 0x34) {
                bVar4 = bVar4 | (byte)(-0x8000000004008 >> (cVar1 - 0x2cU & 0x3f)) & 1 ^ 1;
              }
              if (bVar4 == 0) {
                pcVar22 = pcVar12;
                if (cVar1 == '/') {
                  iVar23 = iVar23 + 1;
                  if (iVar23 == 3) goto LAB_006df9ee;
                  *pcVar12 = '/';
                  pcVar22 = pcVar12 + 1;
                }
              }
              else {
                pcVar22 = pcVar12 + 1;
                *pcVar12 = (char)*(undefined4 *)(puVar3 + (long)cVar1 * 4);
              }
              cVar1 = local_50[1];
              local_50 = local_50 + 1;
              pcVar12 = pcVar22;
            } while (cVar1 != '\0');
            iVar5 = iVar23 + 1;
            if (iVar23 < 2) goto LAB_006df9c2;
          }
LAB_006df9ee:
          *pcVar22 = '\0';
          pcVar22 = pcVar24;
          do {
            uVar2 = *(undefined4 *)(puVar3 + (long)*pcVar22 * 4);
            *pcVar22 = (char)uVar2;
            pcVar12 = pcVar26;
            pcVar22 = pcVar22 + 1;
          } while ((char)uVar2 != '\0');
          do {
            uVar2 = *(undefined4 *)(puVar3 + (long)*pcVar12 * 4);
            *pcVar12 = (char)uVar2;
            pcVar12 = pcVar12 + 1;
          } while ((char)uVar2 != '\0');
          *(undefined8 *)(puVar16 + lVar8 + -8) = 0x6dfa2f;
          iVar5 = FUN_006d3ec0(pcVar26,pcVar24);
          puVar21 = puVar16 + lVar8;
          if (iVar5 != 0) goto LAB_006dfc40;
          plVar25 = (long *)puVar14[2];
        }
        if (*plVar25 == 0) {
          uVar10 = *puVar14;
          *(undefined8 *)(puVar20 + -8) = 0x6dfccd;
          lVar27 = thunk_FUN_00712bd0(uVar10,0x2f);
          lVar8 = lVar27 + -1;
          if (*(char *)(lVar27 + -2) == '/') {
            lVar27 = 1;
          }
          else {
            do {
              lVar13 = lVar8 + -1;
              pcVar26 = (char *)(lVar8 + -2);
              lVar8 = lVar13;
            } while (*pcVar26 != '/');
            lVar27 = lVar27 - lVar13;
          }
          *(undefined8 *)(puVar20 + -8) = 0x6dfcf5;
          lVar8 = FUN_007128e0(lVar8,lVar27);
          *plVar25 = lVar8;
        }
        if (local_60 == 0) {
          puVar9 = (undefined *)puVar14[2];
        }
        else {
          *(undefined8 *)(puVar20 + -8) = 0x6dfa66;
          iVar5 = thunk_FUN_007139b0(local_60,"TRANSLIT",&PTR_PTR_00939c40);
          puVar9 = (undefined *)puVar14[2];
          if (iVar5 == 0) {
            *(undefined4 *)(puVar9 + 0x34) = 1;
          }
        }
        puVar15 = puVar20;
        if (*(uint *)(puVar9 + 0x30) < 0xfffffffe) {
          *(uint *)(puVar9 + 0x30) = *(uint *)(puVar9 + 0x30) + 1;
        }
      }
      goto LAB_006df5cc;
    }
    if ((uVar7 < 3) ||
       ((((*pcVar26 != '.' || (pcVar26[1] != '.')) || (pcVar26[2] != '/')) &&
        (((pcVar26[uVar7 - 3] != '/' || (pcVar26[uVar7 - 2] != '.')) || (pcVar26[uVar7 - 1] != '.'))
        )))) goto LAB_006df58c;
  }
LAB_006df620:
  puVar9 = (undefined *)0x0;
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  puVar15 = auStack_98;
LAB_006df5cc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar15 + -8) = 0x6dfd42;
  FUN_00771f60();
}

