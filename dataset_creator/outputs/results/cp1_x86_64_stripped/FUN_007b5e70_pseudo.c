
void FUN_007b5e70(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  char *local_80;
  long local_58;
  undefined8 local_40 [2];
  
  lVar9 = 0;
  local_40[0] = param_1;
LAB_007b5eb0:
  while( true ) {
    pcVar4 = (char *)FUN_007c03e0(local_40,param_3);
    if (pcVar4 == (char *)0x0) {
      *(undefined8 *)(param_2 + lVar9 * 8) = 0;
      return;
    }
    if (*pcVar4 == '\0') break;
    pcVar4 = (char *)FUN_007b5cf0(param_6,pcVar4);
    if (pcVar4 != (char *)0x0) {
      lVar5 = thunk_FUN_007129d0(pcVar4);
      if (lVar5 != 0) {
        do {
          lVar10 = lVar5;
          local_80 = pcVar4;
          if (lVar10 == 1) {
            uVar11 = 1;
            puVar6 = DAT_0094ae90;
            puVar1 = DAT_0094ae90;
            if (*pcVar4 == '/') goto joined_r0x007b5fb6;
            break;
          }
          lVar5 = lVar10 + -1;
        } while (pcVar4[lVar10 + -1] == '/');
        pcVar4[lVar10] = '/';
        uVar11 = lVar10 + 1;
        puVar6 = DAT_0094ae90;
        puVar1 = DAT_0094ae90;
joined_r0x007b5fb6:
        do {
          if (puVar6 == (undefined8 *)0x0) goto LAB_007b5fc0;
          if ((puVar6[4] == uVar11) &&
             (iVar3 = thunk_FUN_00713570(pcVar4,puVar6[3],uVar11), iVar3 == 0)) {
            lVar5 = 0;
            if (lVar9 != 0) goto LAB_007b5f70;
            goto LAB_007b5f80;
          }
          puVar6 = (undefined8 *)*puVar6;
        } while( true );
      }
      FUN_007104f0(pcVar4);
    }
  }
  uVar11 = 0;
  local_80 = (char *)0x0;
  puVar6 = DAT_0094ae90;
  puVar1 = DAT_0094ae90;
  goto joined_r0x007b5fb6;
  while (lVar5 = lVar5 + 1, lVar5 != lVar9) {
LAB_007b5f70:
    if (*(undefined8 **)(param_2 + lVar5 * 8) == puVar6) goto LAB_007b5f89;
  }
LAB_007b5f80:
  *(undefined8 **)(param_2 + lVar9 * 8) = puVar6;
  lVar9 = lVar9 + 1;
LAB_007b5f89:
  FUN_007104f0(local_80);
  goto LAB_007b5eb0;
LAB_007b5fc0:
  if (param_5 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = thunk_FUN_007129d0(param_5);
    local_58 = local_58 + 1;
  }
  puVar6 = (undefined8 *)FUN_007101b0(local_58 + uVar11 + 0x2d);
  if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0078db10(0xc,0,0,"cannot create cache for search path");
  }
  puVar6[3] = (long)puVar6 + 0x2c;
  puVar7 = (undefined1 *)thunk_FUN_00713820((long)puVar6 + 0x2c,pcVar4,uVar11);
  uVar2 = DAT_0094b410;
  *puVar7 = 0;
  puVar6[4] = uVar11;
  if (uVar2 < uVar11) {
    DAT_0094b410 = uVar11;
  }
  *(uint *)(puVar6 + 5) = (uint)(*pcVar4 != '/') * 2;
  puVar6[1] = param_4;
  if (param_5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = thunk_FUN_00713a50(uVar11 + 0x2d + (long)puVar6,param_5,local_58);
  }
  puVar6[2] = uVar8;
  *puVar6 = puVar1;
  DAT_0094ae90 = puVar6;
  goto LAB_007b5f80;
}

