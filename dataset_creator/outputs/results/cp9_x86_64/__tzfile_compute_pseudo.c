
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __tzfile_compute(long param_1,int param_2,long *param_3,int *param_4,long param_5)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  size_t sVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  
  if (param_2 != 0) {
    _tzname = (undefined1  [16])0x0;
    if ((num_transitions == 0) || (param_1 < *transitions)) {
      uVar3 = 0;
      lVar15 = 0;
      lVar6 = types;
      lVar5 = types;
      uVar12 = num_types;
      pcVar13 = zone_names;
      uVar9 = uVar3;
      if (num_types != 0) {
        do {
          while( true ) {
            uVar3 = uVar9;
            lVar15 = uVar3 * 8;
            lVar6 = lVar5 + lVar15;
            if (*(char *)(lVar6 + 4) == '\0') goto LAB_00759b37;
            if (PTR_DAT_00931a28 == (undefined *)0x0) break;
            uVar9 = uVar3 + 1;
            if (uVar12 <= uVar3 + 1) goto LAB_00759b21;
          }
          uVar7 = __tzstring(pcVar13 + *(byte *)(lVar6 + 5));
          PTR_DAT_00931a28 = (undefined *)uVar7;
          lVar5 = types;
          uVar12 = num_types;
          pcVar13 = zone_names;
          uVar9 = uVar3 + 1;
        } while (uVar3 + 1 < num_types);
LAB_00759b21:
        uVar3 = uVar3 + 1;
        lVar15 = lVar15 + 8;
        lVar6 = lVar5 + lVar15;
        if (uVar3 == uVar12) {
          lVar15 = 0;
          uVar3 = 0;
          lVar6 = lVar5;
        }
      }
LAB_00759b37:
      puVar4 = (undefined *)__tzstring(pcVar13 + *(byte *)(lVar6 + 5));
      tzname = puVar4;
      lVar6 = types;
      if ((PTR_DAT_00931a28 == (undefined *)0x0) && (uVar3 < num_types)) {
        lVar5 = types + uVar3 * 8;
        do {
          if (*(char *)(lVar5 + 4) != '\0') {
            uVar7 = __tzstring(zone_names + *(byte *)(lVar5 + 5));
            puVar4 = tzname;
            PTR_DAT_00931a28 = (undefined *)uVar7;
            lVar6 = types;
            break;
          }
          uVar3 = uVar3 + 1;
          lVar5 = lVar5 + 8;
        } while (num_types != uVar3);
      }
    }
    else {
      if (param_1 < transitions[num_transitions - 1]) {
        uVar12 = num_transitions - 1;
        uVar9 = (ulong)(transitions[num_transitions - 1] - param_1) / 0xf0c2ac;
        if (num_transitions <= uVar9) {
          uVar3 = 0;
LAB_0075980a:
          do {
            uVar9 = uVar3;
            uVar3 = uVar12;
            do {
              uVar12 = uVar3;
              uVar14 = uVar12;
              if (uVar12 <= uVar9 + 1) goto LAB_00759829;
              uVar3 = uVar9 + uVar12 >> 1;
            } while (param_1 < transitions[uVar3]);
          } while( true );
        }
        uVar9 = num_transitions - uVar9;
        uVar14 = uVar9 - 1;
        if (param_1 < transitions[uVar14]) {
          if (9 < uVar14) {
            uVar12 = uVar9 - 0xb;
            uVar3 = 0;
            if (param_1 < transitions[uVar9 - 0xb]) goto LAB_0075980a;
          }
          lVar6 = transitions[uVar9 - 2];
          while (param_1 < lVar6) {
            lVar6 = transitions[uVar14 - 2];
            uVar9 = uVar14;
            uVar14 = uVar14 - 1;
          }
          uVar9 = uVar9 - 2;
        }
        else {
          uVar3 = uVar9 + 9;
          if ((uVar3 < num_transitions) && (transitions[uVar3] <= param_1)) goto LAB_0075980a;
          do {
            uVar9 = uVar14;
            uVar14 = uVar9 + 1;
          } while (transitions[uVar9 + 1] <= param_1);
        }
      }
      else {
        uVar14 = num_transitions;
        if (tzspec != 0) {
          __tzset_parse_tz(tzspec);
          iVar2 = __offtime(param_1,0,param_5);
          uVar14 = num_transitions;
          if (iVar2 != 0) {
            __tz_compute(param_1,param_5,1);
            if (zone_names == (char *)(num_leaps * 0x10 + leaps)) {
              if (num_types != 2) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("num_types == 2","tzfile.c",0x285,"__tzfile_compute");
              }
              uVar7 = __tzstring();
              pcVar13 = zone_names;
              tzname = (undefined *)uVar7;
              sVar8 = strlen(zone_names);
              uVar7 = __tzstring(pcVar13 + sVar8 + 1);
              PTR_DAT_00931a28 = (undefined *)uVar7;
            }
            goto LAB_0075999f;
          }
        }
LAB_00759829:
        uVar9 = uVar14 - 1;
      }
      lVar6 = types + (ulong)*(byte *)(type_idxs + uVar9) * 8;
      bVar1 = *(byte *)(lVar6 + 4);
      puVar4 = (undefined *)__tzstring(zone_names + *(byte *)(lVar6 + 5));
      uVar12 = num_transitions;
      lVar15 = type_idxs;
      (&tzname)[bVar1] = puVar4;
      lVar6 = types;
      if (uVar14 < uVar12) {
        do {
          while( true ) {
            lVar5 = lVar6 + (ulong)*(byte *)(lVar15 + uVar14) * 8;
            bVar1 = *(byte *)(lVar5 + 4);
            if ((&tzname)[bVar1] != (undefined *)0x0) break;
            puVar4 = (undefined *)__tzstring(zone_names + *(byte *)(lVar5 + 5));
            (&tzname)[bVar1] = puVar4;
            lVar6 = types;
            lVar15 = type_idxs;
            if (((&tzname)[(int)(1 - (uint)bVar1)] != (undefined *)0x0) ||
               (uVar14 = uVar14 + 1, uVar12 = num_transitions, num_transitions <= uVar14))
            goto LAB_00759900;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar12);
      }
LAB_00759900:
      puVar4 = tzname;
      if (tzname == (undefined *)0x0) {
        puVar4 = PTR_DAT_00931a28;
        tzname = puVar4;
      }
      lVar15 = (ulong)*(byte *)(lVar15 + uVar9) << 3;
    }
    piVar16 = (int *)(lVar15 + lVar6);
    timezone = -rule_stdoff;
    daylight = (uint)(rule_dstoff != rule_stdoff);
    if (puVar4 == (undefined *)0x0) {
      if (num_types != 1) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("num_types == 1","tzfile.c",0x2e5,"__tzfile_compute");
      }
      puVar4 = (undefined *)__tzstring(zone_names);
      tzname = puVar4;
    }
    if (PTR_DAT_00931a28 == (undefined *)0x0) {
      PTR_DAT_00931a28 = puVar4;
    }
    bVar1 = *(byte *)(piVar16 + 1);
    *(uint *)(param_5 + 0x20) = (uint)bVar1;
    pcVar13 = (&tzname)[bVar1];
    iVar2 = strcmp(zone_names + *(byte *)((long)piVar16 + 5),pcVar13);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("strcmp (&zone_names[info->idx], __tzname[tp->tm_isdst]) == 0","tzfile.c",0x2ec,
                    "__tzfile_compute");
    }
    iVar2 = *piVar16;
    *(char **)(param_5 + 0x30) = pcVar13;
    *(long *)(param_5 + 0x28) = (long)iVar2;
  }
LAB_0075999f:
  lVar6 = leaps;
  lVar15 = num_leaps + -1;
  *param_3 = 0;
  *param_4 = 0;
  plVar11 = (long *)(lVar15 * 0x10 + lVar6);
  do {
    plVar10 = plVar11;
    lVar5 = lVar15;
    if (lVar5 == -1) {
      return;
    }
    lVar15 = lVar5 + -1;
    plVar11 = plVar10 + -2;
  } while (param_1 < *plVar10);
  *param_3 = plVar10[1];
  if (*plVar10 == param_1) {
    if (lVar5 == 0) {
      if (0 < plVar10[1]) {
        *param_4 = 1;
      }
    }
    else if (*(long *)(lVar6 + -8 + lVar5 * 0x10) < plVar10[1]) {
      *param_4 = 1;
      plVar11 = (long *)(lVar6 + lVar5 * 0x10);
      iVar2 = (int)lVar5;
      do {
        if (*plVar11 != plVar11[-2] + 1) {
          return;
        }
        if (plVar11[1] != plVar11[-1] + 1) {
          return;
        }
        plVar11 = plVar11 + -2;
        *param_4 = (iVar2 + 2) - (int)lVar5;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}

