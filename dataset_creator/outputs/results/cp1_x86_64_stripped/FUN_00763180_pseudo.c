
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00763180(long param_1,int param_2,long *param_3,int *param_4,long param_5)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  
  if (param_2 != 0) {
    _PTR_DAT_0093ea00 = (undefined1  [16])0x0;
    if ((DAT_0094ab18 == 0) || (param_1 < *DAT_0094b5b8)) {
      uVar3 = 0;
      lVar14 = 0;
      lVar6 = DAT_0094ab00;
      lVar5 = DAT_0094ab00;
      uVar11 = DAT_0094ab08;
      lVar12 = DAT_0094aaf8;
      uVar8 = uVar3;
      if (DAT_0094ab08 != 0) {
        do {
          while( true ) {
            uVar3 = uVar8;
            lVar14 = uVar3 * 8;
            lVar6 = lVar5 + lVar14;
            if (*(char *)(lVar6 + 4) == '\0') goto LAB_00763537;
            if (PTR_DAT_0093ea08 == (undefined *)0x0) break;
            uVar8 = uVar3 + 1;
            if (uVar11 <= uVar3 + 1) goto LAB_00763521;
          }
          uVar7 = FUN_007612e0(lVar12 + (ulong)*(byte *)(lVar6 + 5));
          PTR_DAT_0093ea08 = (undefined *)uVar7;
          lVar5 = DAT_0094ab00;
          uVar11 = DAT_0094ab08;
          lVar12 = DAT_0094aaf8;
          uVar8 = uVar3 + 1;
        } while (uVar3 + 1 < DAT_0094ab08);
LAB_00763521:
        uVar3 = uVar3 + 1;
        lVar14 = lVar14 + 8;
        lVar6 = lVar5 + lVar14;
        if (uVar3 == uVar11) {
          lVar14 = 0;
          uVar3 = 0;
          lVar6 = lVar5;
        }
      }
LAB_00763537:
      puVar4 = (undefined *)FUN_007612e0(lVar12 + (ulong)*(byte *)(lVar6 + 5));
      PTR_DAT_0093ea00 = puVar4;
      lVar6 = DAT_0094ab00;
      if ((PTR_DAT_0093ea08 == (undefined *)0x0) && (uVar3 < DAT_0094ab08)) {
        lVar5 = DAT_0094ab00 + uVar3 * 8;
        do {
          if (*(char *)(lVar5 + 4) != '\0') {
            uVar7 = FUN_007612e0((ulong)*(byte *)(lVar5 + 5) + DAT_0094aaf8);
            puVar4 = PTR_DAT_0093ea00;
            PTR_DAT_0093ea08 = (undefined *)uVar7;
            lVar6 = DAT_0094ab00;
            break;
          }
          uVar3 = uVar3 + 1;
          lVar5 = lVar5 + 8;
        } while (DAT_0094ab08 != uVar3);
      }
    }
    else {
      if (param_1 < DAT_0094b5b8[DAT_0094ab18 - 1]) {
        uVar11 = DAT_0094ab18 - 1;
        uVar8 = (ulong)(DAT_0094b5b8[DAT_0094ab18 - 1] - param_1) / 0xf0c2ac;
        if (DAT_0094ab18 <= uVar8) {
          uVar3 = 0;
LAB_0076320a:
          do {
            uVar8 = uVar3;
            uVar3 = uVar11;
            do {
              uVar11 = uVar3;
              uVar13 = uVar11;
              if (uVar11 <= uVar8 + 1) goto LAB_00763229;
              uVar3 = uVar8 + uVar11 >> 1;
            } while (param_1 < DAT_0094b5b8[uVar3]);
          } while( true );
        }
        uVar8 = DAT_0094ab18 - uVar8;
        uVar13 = uVar8 - 1;
        if (param_1 < DAT_0094b5b8[uVar13]) {
          if (9 < uVar13) {
            uVar11 = uVar8 - 0xb;
            uVar3 = 0;
            if (param_1 < DAT_0094b5b8[uVar8 - 0xb]) goto LAB_0076320a;
          }
          lVar6 = DAT_0094b5b8[uVar8 - 2];
          while (param_1 < lVar6) {
            lVar6 = DAT_0094b5b8[uVar13 - 2];
            uVar8 = uVar13;
            uVar13 = uVar13 - 1;
          }
          uVar8 = uVar8 - 2;
        }
        else {
          uVar3 = uVar8 + 9;
          if ((uVar3 < DAT_0094ab18) && (DAT_0094b5b8[uVar3] <= param_1)) goto LAB_0076320a;
          do {
            uVar8 = uVar13;
            uVar13 = uVar8 + 1;
          } while (DAT_0094b5b8[uVar8 + 1] <= param_1);
        }
      }
      else {
        uVar13 = DAT_0094ab18;
        if (DAT_0094aad0 != 0) {
          FUN_007613f0(DAT_0094aad0);
          iVar2 = FUN_007aa120(param_1,0,param_5);
          uVar13 = DAT_0094ab18;
          if (iVar2 != 0) {
            FUN_00761730(param_1,param_5,1);
            if (DAT_0094aaf8 == DAT_0094aae0 * 0x10 + DAT_0094aad8) {
              if (DAT_0094ab08 != 2) {
                    /* WARNING: Subroutine does not return */
                FUN_006e2220("num_types == 2","tzfile.c",0x285,"__tzfile_compute");
              }
              uVar7 = FUN_007612e0();
              lVar6 = DAT_0094aaf8;
              PTR_DAT_0093ea00 = (undefined *)uVar7;
              lVar14 = thunk_FUN_007129d0(DAT_0094aaf8);
              uVar7 = FUN_007612e0(lVar6 + 1 + lVar14);
              PTR_DAT_0093ea08 = (undefined *)uVar7;
            }
            goto LAB_0076339f;
          }
        }
LAB_00763229:
        uVar8 = uVar13 - 1;
      }
      lVar6 = DAT_0094ab00 + (ulong)*(byte *)(DAT_0094ab10 + uVar8) * 8;
      bVar1 = *(byte *)(lVar6 + 4);
      puVar4 = (undefined *)FUN_007612e0((ulong)*(byte *)(lVar6 + 5) + DAT_0094aaf8);
      uVar11 = DAT_0094ab18;
      lVar14 = DAT_0094ab10;
      (&PTR_DAT_0093ea00)[bVar1] = puVar4;
      lVar6 = DAT_0094ab00;
      if (uVar13 < uVar11) {
        do {
          while( true ) {
            lVar5 = lVar6 + (ulong)*(byte *)(lVar14 + uVar13) * 8;
            bVar1 = *(byte *)(lVar5 + 4);
            if ((&PTR_DAT_0093ea00)[bVar1] != (undefined *)0x0) break;
            puVar4 = (undefined *)FUN_007612e0((ulong)*(byte *)(lVar5 + 5) + DAT_0094aaf8);
            (&PTR_DAT_0093ea00)[bVar1] = puVar4;
            lVar6 = DAT_0094ab00;
            lVar14 = DAT_0094ab10;
            if (((&PTR_DAT_0093ea00)[(int)(1 - (uint)bVar1)] != (undefined *)0x0) ||
               (uVar13 = uVar13 + 1, uVar11 = DAT_0094ab18, DAT_0094ab18 <= uVar13))
            goto LAB_00763300;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar11);
      }
LAB_00763300:
      puVar4 = PTR_DAT_0093ea00;
      if (PTR_DAT_0093ea00 == (undefined *)0x0) {
        puVar4 = PTR_DAT_0093ea08;
        PTR_DAT_0093ea00 = puVar4;
      }
      lVar14 = (ulong)*(byte *)(lVar14 + uVar8) << 3;
    }
    piVar15 = (int *)(lVar14 + lVar6);
    _DAT_0094aa40 = -DAT_0094aaf0;
    _DAT_0094aa48 = (uint)(DAT_0094aae8 != DAT_0094aaf0);
    if (puVar4 == (undefined *)0x0) {
      if (DAT_0094ab08 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("num_types == 1","tzfile.c",0x2e5,"__tzfile_compute");
      }
      puVar4 = (undefined *)FUN_007612e0(DAT_0094aaf8);
      PTR_DAT_0093ea00 = puVar4;
    }
    if (PTR_DAT_0093ea08 == (undefined *)0x0) {
      PTR_DAT_0093ea08 = puVar4;
    }
    bVar1 = *(byte *)(piVar15 + 1);
    *(uint *)(param_5 + 0x20) = (uint)bVar1;
    puVar4 = (&PTR_DAT_0093ea00)[bVar1];
    iVar2 = thunk_FUN_00712780((ulong)*(byte *)((long)piVar15 + 5) + DAT_0094aaf8,puVar4);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("strcmp (&zone_names[info->idx], __tzname[tp->tm_isdst]) == 0","tzfile.c",0x2ec,
                   "__tzfile_compute");
    }
    iVar2 = *piVar15;
    *(undefined **)(param_5 + 0x30) = puVar4;
    *(long *)(param_5 + 0x28) = (long)iVar2;
  }
LAB_0076339f:
  lVar6 = DAT_0094aad8;
  lVar14 = DAT_0094aae0 + -1;
  *param_3 = 0;
  *param_4 = 0;
  plVar10 = (long *)(lVar14 * 0x10 + lVar6);
  do {
    plVar9 = plVar10;
    lVar5 = lVar14;
    if (lVar5 == -1) {
      return;
    }
    lVar14 = lVar5 + -1;
    plVar10 = plVar9 + -2;
  } while (param_1 < *plVar9);
  *param_3 = plVar9[1];
  if (*plVar9 == param_1) {
    if (lVar5 == 0) {
      if (0 < plVar9[1]) {
        *param_4 = 1;
      }
    }
    else if (*(long *)(lVar6 + -8 + lVar5 * 0x10) < plVar9[1]) {
      *param_4 = 1;
      plVar10 = (long *)(lVar6 + lVar5 * 0x10);
      iVar2 = (int)lVar5;
      do {
        if (*plVar10 != plVar10[-2] + 1) {
          return;
        }
        if (plVar10[1] != plVar10[-1] + 1) {
          return;
        }
        plVar10 = plVar10 + -2;
        *param_4 = (iVar2 + 2) - (int)lVar5;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}

