
void FUN_006e2330(undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  
  FUN_0070b2d0(&DAT_009462c0);
  for (puVar6 = DAT_009462f8; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
    iVar3 = thunk_FUN_00712780(param_1,puVar6 + 3);
    if (iVar3 == 0) {
      bVar2 = false;
      if (param_2 == (long *)0x0) {
LAB_006e2444:
        if (param_3 == (long *)0x0) goto LAB_006e249f;
LAB_006e2449:
        lVar8 = *param_3;
        lVar5 = puVar6[2];
        if (lVar8 == 0) {
LAB_006e25dd:
          *param_3 = lVar5;
          goto LAB_006e249f;
        }
      }
      else {
        lVar8 = *param_2;
        pcVar7 = (char *)puVar6[1];
        if (lVar8 == 0) {
          *param_2 = (long)pcVar7;
          goto LAB_006e2444;
        }
        iVar3 = thunk_FUN_00712780(lVar8,pcVar7);
        if (iVar3 == 0) {
          *param_2 = (long)pcVar7;
          if (param_3 != (long *)0x0) {
            lVar8 = *param_3;
            lVar5 = puVar6[2];
            if (lVar8 != 0) goto LAB_006e2459;
            goto LAB_006e25dd;
          }
          goto LAB_006e249f;
        }
        iVar3 = thunk_FUN_00712780(lVar8,"/usr/share/locale");
        pcVar4 = "/usr/share/locale";
        if (iVar3 != 0) {
          pcVar4 = (char *)FUN_007128a0(lVar8);
          if (pcVar4 != (char *)0x0) {
            pcVar7 = (char *)puVar6[1];
            goto LAB_006e23ff;
          }
          *param_2 = 0;
          if (param_3 != (long *)0x0) goto LAB_006e2449;
          goto LAB_006e249f;
        }
LAB_006e23ff:
        if (pcVar7 != "/usr/share/locale") {
          FUN_007104f0(pcVar7);
        }
        puVar6[1] = pcVar4;
        *param_2 = (long)pcVar4;
        if (param_3 == (long *)0x0) goto LAB_006e2498;
        lVar8 = *param_3;
        lVar5 = puVar6[2];
        bVar2 = true;
        if (lVar8 == 0) {
          *param_3 = lVar5;
          goto LAB_006e2498;
        }
      }
LAB_006e2459:
      if (((lVar5 == 0) || (iVar3 = thunk_FUN_00712780(lVar8,lVar5), iVar3 != 0)) &&
         (lVar5 = FUN_007128a0(lVar8), lVar5 != 0)) {
        FUN_007104f0(puVar6[2]);
        puVar6[2] = lVar5;
        *param_3 = lVar5;
        goto LAB_006e2498;
      }
      *param_3 = lVar5;
      if (bVar2) goto LAB_006e2498;
      goto LAB_006e249f;
    }
    if (iVar3 < 0) break;
  }
  if (param_2 == (long *)0x0) {
    if (param_3 == (long *)0x0) goto LAB_006e249f;
    if (*param_3 != 0) {
      lVar8 = thunk_FUN_007129d0(param_1);
      puVar6 = (undefined8 *)FUN_007101b0(lVar8 + 0x19);
      if (puVar6 != (undefined8 *)0x0) {
        thunk_FUN_00713a50(puVar6 + 3,param_1,lVar8 + 1);
        puVar6[1] = "/usr/share/locale";
LAB_006e253e:
        lVar8 = *param_3;
        if ((lVar8 == 0) || (lVar8 = FUN_007128a0(), lVar8 != 0)) {
          *param_3 = lVar8;
          goto LAB_006e2562;
        }
        if ((char *)puVar6[1] != "/usr/share/locale") {
          FUN_007104f0();
        }
        FUN_007104f0(puVar6);
        if (param_2 != (long *)0x0) goto LAB_006e270f;
      }
    }
  }
  else {
    lVar8 = *param_2;
    if (lVar8 == 0) {
      if (param_3 == (long *)0x0) {
        *param_2 = (long)"/usr/share/locale";
        goto LAB_006e249f;
      }
      if (*param_3 != 0) {
        lVar8 = thunk_FUN_007129d0(param_1);
        puVar6 = (undefined8 *)FUN_007101b0(lVar8 + 0x19);
        if (puVar6 != (undefined8 *)0x0) {
          thunk_FUN_00713a50(puVar6 + 3,param_1,lVar8 + 1);
          lVar8 = *param_2;
          if (lVar8 != 0) goto LAB_006e2503;
          pcVar7 = "/usr/share/locale";
          goto LAB_006e252f;
        }
        goto LAB_006e270f;
      }
      *param_2 = (long)"/usr/share/locale";
    }
    else {
      lVar5 = thunk_FUN_007129d0(param_1);
      puVar6 = (undefined8 *)FUN_007101b0(lVar5 + 0x19);
      if (puVar6 == (undefined8 *)0x0) {
LAB_006e270f:
        *param_2 = 0;
      }
      else {
        thunk_FUN_00713a50(puVar6 + 3,param_1,lVar5 + 1);
LAB_006e2503:
        iVar3 = thunk_FUN_00712780(lVar8,"/usr/share/locale");
        pcVar7 = "/usr/share/locale";
        if ((iVar3 == 0) || (pcVar7 = (char *)FUN_007128a0(), pcVar7 != (char *)0x0)) {
LAB_006e252f:
          *param_2 = (long)pcVar7;
          lVar8 = 0;
          puVar6[1] = pcVar7;
          if (param_3 != (long *)0x0) goto LAB_006e253e;
LAB_006e2562:
          puVar1 = DAT_009462f8;
          puVar6[2] = lVar8;
          if ((puVar1 == (undefined8 *)0x0) ||
             (iVar3 = thunk_FUN_00712780(param_1,puVar1 + 3), iVar3 < 0)) {
            *puVar6 = puVar1;
            DAT_009462f8 = puVar6;
          }
          else {
            do {
              puVar9 = puVar1;
              puVar1 = (undefined8 *)*puVar9;
              if (puVar1 == (undefined8 *)0x0) break;
              iVar3 = thunk_FUN_00712780(param_1,puVar1 + 3);
            } while (0 < iVar3);
            *puVar6 = puVar1;
            *puVar9 = puVar6;
          }
LAB_006e2498:
          DAT_009463c0 = DAT_009463c0 + 1;
          goto LAB_006e249f;
        }
        FUN_007104f0(puVar6);
        if (param_2 != (long *)0x0) goto LAB_006e270f;
      }
      if (param_3 == (long *)0x0) goto LAB_006e249f;
    }
  }
  *param_3 = 0;
LAB_006e249f:
  FUN_0070b100(&DAT_009462c0);
  return;
}

