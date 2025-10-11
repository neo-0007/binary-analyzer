
ulong FUN_00664e70(long *param_1)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  ulong unaff_R13;
  long unaff_R14;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(param_1 + 0xf) & 8) == 0) {
LAB_00665210:
    uVar9 = 0xffffffff;
  }
  else {
    pcVar14 = (char *)param_1;
    if (*(char *)((long)param_1 + 0xaa) != '\0') goto LAB_00665100;
    puVar6 = (uint *)param_1[2];
    if ((char)param_1[0x18] != '\0') goto LAB_00665153;
LAB_00664ebd:
    if ((uint *)param_1[3] <= puVar6) {
LAB_00664eca:
      uVar9 = 2;
      if (1 < (ulong)param_1[0x14]) {
        uVar9 = param_1[0x14];
      }
      uVar1 = uVar9 - 1;
      if ((long *)param_1[0x19] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403826();
      }
      cVar3 = (**(code **)(*(long *)param_1[0x19] + 0x30))();
      if (cVar3 == '\0') {
        iVar4 = (**(code **)(*(long *)param_1[0x19] + 0x28))();
        if (iVar4 < 1) {
          iVar4 = (**(code **)(*(long *)param_1[0x19] + 0x40))();
          unaff_R13 = (uVar9 - 2) + (long)iVar4;
          uVar9 = uVar1;
        }
        else {
          unaff_R13 = (long)iVar4 * uVar1;
          uVar9 = unaff_R13;
        }
        uVar12 = param_1[0x1d] - param_1[0x1c];
        unaff_R14 = uVar9 - uVar12;
        if ((long)uVar9 <= (long)uVar12) {
          unaff_R14 = 0;
        }
        lVar7 = param_1[0x1b];
        if ((*(char *)((long)param_1 + 0xa9) == '\0') || (param_1[1] != param_1[3])) {
          if (lVar7 < (long)unaff_R13) goto LAB_00665358;
          if (uVar12 == 0) goto LAB_00664f74;
        }
        else {
          if (uVar12 == 0) {
            if (lVar7 < (long)unaff_R13) {
              uVar9 = thunk_FUN_006c31f0(unaff_R13);
              goto LAB_00665368;
            }
            goto LAB_00664f74;
          }
          unaff_R14 = 0;
          if (lVar7 < (long)unaff_R13) {
            unaff_R14 = 0;
            uVar9 = thunk_FUN_006c31f0(unaff_R13);
            goto LAB_006653a7;
          }
        }
        thunk_FUN_00713610(param_1[0x1a],param_1[0x1c],uVar12);
LAB_00664f74:
        uVar9 = param_1[0x1a];
        goto LAB_00664f7b;
      }
      uVar12 = FUN_006c3f20(param_1 + 0xd,param_1[1],uVar1);
      if (uVar12 != 0) {
        if ((long)uVar12 < 1) {
LAB_00665342:
          puVar10 = (undefined4 *)FUN_006d2700();
          FUN_00404399("basic_filebuf::underflow error reading the file",*puVar10);
LAB_00665358:
          uVar9 = thunk_FUN_006c31f0(unaff_R13);
          if (uVar12 != 0) {
LAB_006653a7:
            thunk_FUN_00713a50(uVar9,param_1[0x1c],uVar12);
          }
LAB_00665368:
          if (param_1[0x1a] != 0) {
            thunk_FUN_007104f0();
          }
          param_1[0x1a] = uVar9;
          param_1[0x1b] = unaff_R13;
LAB_00664f7b:
          uVar13 = uVar9 + uVar12;
          param_1[0x1c] = uVar9;
          param_1[0x1d] = uVar13;
          *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)((long)param_1 + 0x84);
          if (unaff_R14 != 0) {
            unaff_R13 = 0;
            goto LAB_00665042;
          }
          lVar7 = param_1[1];
          unaff_R13 = 0;
          if (uVar13 <= uVar9) goto LAB_0066502b;
          unaff_R14 = 0;
LAB_00664fc0:
          uVar5 = (**(code **)(*(long *)param_1[0x19] + 0x20))
                            ((long *)param_1[0x19],(long)param_1 + 0x84,uVar9,uVar13,param_1 + 0x1c,
                             lVar7,lVar7 + uVar1 * 4);
          unaff_R13 = (ulong)uVar5;
          if (uVar5 == 3) {
            uVar13 = param_1[0x1d];
            lVar7 = param_1[1];
            goto LAB_0066522b;
          }
          lVar7 = lVar7 - param_1[1];
          uVar12 = lVar7 >> 2;
          if (uVar5 != 2) goto code_r0x00665015;
          if (0 < lVar7) goto LAB_006652d9;
          if ((char)unaff_R14 == '\0') {
            FUN_004042e0("basic_filebuf::underflow invalid byte sequence in file");
            goto LAB_006652d0;
          }
          goto LAB_006651dc;
        }
LAB_006652d9:
        puVar6 = (uint *)param_1[0x13];
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[1] = (long)puVar6;
        puVar11 = puVar6 + uVar12;
        if ((*(byte *)(param_1 + 0xf) & 8) == 0) {
          puVar11 = puVar6;
        }
        param_1[2] = (long)puVar6;
        uVar9 = (ulong)*puVar6;
        param_1[6] = 0;
        param_1[3] = (long)puVar11;
        *(undefined1 *)((long)param_1 + 0xa9) = 1;
        goto LAB_0066519a;
      }
LAB_006651dc:
      lVar7 = param_1[0x13];
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = lVar7;
      param_1[2] = lVar7;
      param_1[3] = lVar7;
      param_1[6] = 0;
      *(undefined1 *)((long)param_1 + 0xa9) = 0;
      goto LAB_00665210;
    }
LAB_00665198:
    uVar9 = (ulong)*puVar6;
  }
LAB_0066519a:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
LAB_00665409:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
code_r0x00665015:
  uVar5 = (uint)(lVar7 == 0) & ((uint)unaff_R14 ^ 1);
  while ((char)uVar5 != '\0') {
LAB_0066502b:
    while( true ) {
      uVar13 = param_1[0x1d];
      unaff_R14 = 1;
      uVar12 = uVar13 - param_1[0x1a];
LAB_00665042:
      uVar12 = uVar12 + unaff_R14;
      if (param_1[0x1b] < (long)uVar12) {
        FUN_004042e0("basic_filebuf::underflow codecvt::max_length() is not valid");
        goto LAB_00665409;
      }
      lVar8 = FUN_006c3f20(param_1 + 0xd,uVar13,unaff_R14);
      if (lVar8 == 0) {
        unaff_R14 = 1;
      }
      else {
        if (lVar8 == -1) goto LAB_00665342;
        unaff_R14 = 0;
      }
      lVar7 = param_1[1];
      uVar9 = param_1[0x1c];
      uVar13 = lVar8 + param_1[0x1d];
      param_1[0x1d] = uVar13;
      if (uVar9 < uVar13) goto LAB_00664fc0;
      if ((int)unaff_R13 == 3) break;
      if ((char)unaff_R14 != '\0') goto LAB_006650b0;
    }
LAB_0066522b:
    lVar8 = param_1[0x1a];
    uVar12 = uVar13 - lVar8;
    uVar9 = uVar1;
    if ((uVar1 < uVar12) || (uVar9 = uVar12, uVar12 != 0)) {
      uVar12 = uVar9;
      FUN_00771ea0(lVar7,lVar8,uVar12,0x3fffffffffffffff);
      lVar8 = param_1[0x1a] + uVar12;
    }
    param_1[0x1c] = lVar8;
    unaff_R13 = 3;
    uVar5 = (uint)(uVar12 == 0) & ((uint)unaff_R14 ^ 1);
  }
LAB_006652d0:
  if (0 < (long)uVar12) goto LAB_006652d9;
  if ((char)unaff_R14 == '\0') goto LAB_00665342;
LAB_006650b0:
  lVar7 = param_1[0x13];
  uVar5 = (int)unaff_R13 - 1;
  unaff_R13 = (ulong)uVar5;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = lVar7;
  param_1[2] = lVar7;
  param_1[3] = lVar7;
  param_1[6] = 0;
  *(undefined1 *)((long)param_1 + 0xa9) = 0;
  if (uVar5 != 0) goto LAB_00665210;
  pcVar14 = "basic_filebuf::underflow incomplete character in file";
  FUN_004042e0();
LAB_00665100:
  uVar9 = (**(code **)(*(long *)pcVar14 + 0x68))();
  if ((int)uVar9 == -1) goto LAB_0066519a;
  puVar6 = (uint *)param_1[0x13];
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = (long)puVar6;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)puVar6;
  param_1[6] = 0;
  *(undefined1 *)((long)param_1 + 0xaa) = 0;
  if ((char)param_1[0x18] == '\0') goto LAB_00664ebd;
LAB_00665153:
  *(undefined1 *)(param_1 + 0x18) = 0;
  puVar6 = (uint *)(param_1[0x16] + (ulong)((uint *)param_1[1] != puVar6) * 4);
  param_1[0x16] = (long)puVar6;
  param_1[1] = param_1[0x13];
  param_1[2] = (long)puVar6;
  param_1[3] = param_1[0x17];
  if (puVar6 < (uint *)param_1[0x17]) goto LAB_00665198;
  goto LAB_00664eca;
}

