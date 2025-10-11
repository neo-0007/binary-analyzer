
undefined4 FUN_00700190(uint *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  undefined *puVar17;
  long in_FS_OFFSET;
  undefined8 *puVar18;
  ulong local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = *param_1;
  if ((uVar12 & 0x10) == 0) {
    if ((uVar12 & 4) != 0) {
      *param_1 = uVar12 | 0x20;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
      uVar7 = 0xffffffff;
      goto LAB_00700308;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    if ((undefined4 *)*puVar2 < (undefined4 *)puVar2[1]) {
      uVar7 = *(undefined4 *)*puVar2;
      goto LAB_00700308;
    }
    uVar15 = *(ulong *)(param_1 + 2);
    uVar9 = *(ulong *)(param_1 + 4);
    uVar3 = *(undefined8 *)(param_1 + 0x26);
    if (uVar15 < uVar9) {
      puVar18 = puVar2 + 1;
      puVar2[0xc] = puVar2[0xb];
      *puVar2 = puVar2[6];
      puVar2[2] = puVar2[6];
      uVar11 = puVar2[7];
      local_60 = uVar15;
      iVar8 = FUN_00701eb0(uVar3,puVar2 + 0xb,uVar15,uVar9,&local_60);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 2);
      *(ulong *)(param_1 + 2) = local_60;
      puVar5 = (undefined4 *)**(undefined8 **)(param_1 + 0x28);
      if (puVar5 < (undefined4 *)(*(undefined8 **)(param_1 + 0x28))[1]) {
        uVar7 = *puVar5;
        goto LAB_00700308;
      }
      if (iVar8 != 2) {
        thunk_FUN_00713610(*(undefined8 *)(param_1 + 0xe),local_60,*(long *)(param_1 + 4) - local_60
                           ,puVar5,uVar11,puVar18);
        lVar10 = *(long *)(param_1 + 0xe);
        lVar4 = *(long *)(param_1 + 2);
        *(long *)(param_1 + 6) = lVar10;
        *(long *)(param_1 + 2) = lVar10;
        *(long *)(param_1 + 4) = (*(long *)(param_1 + 4) + lVar10) - lVar4;
        goto LAB_00700206;
      }
    }
    else {
      lVar10 = *(long *)(param_1 + 0xe);
      *(long *)(param_1 + 6) = lVar10;
      *(long *)(param_1 + 2) = lVar10;
      *(long *)(param_1 + 4) = lVar10;
LAB_00700206:
      if (lVar10 == 0) {
        if (*(long *)(param_1 + 0x12) != 0) {
          FUN_007104f0();
          *param_1 = *param_1 & 0xfffffeff;
        }
        FUN_00706a10(param_1);
        lVar10 = *(long *)(param_1 + 0xe);
        *(long *)(param_1 + 6) = lVar10;
        *(long *)(param_1 + 2) = lVar10;
        *(long *)(param_1 + 4) = lVar10;
      }
      *(long *)(param_1 + 0xc) = lVar10;
      *(long *)(param_1 + 8) = lVar10;
      *(long *)(param_1 + 10) = lVar10;
      if (*(long *)(*(long *)(param_1 + 0x28) + 0x30) == 0) {
        if (*(long *)(*(long *)(param_1 + 0x28) + 0x40) != 0) {
          FUN_007104f0();
          *param_1 = *param_1 & 0xfffffeff;
        }
        FUN_006ff640(param_1);
      }
      puVar6 = PTR_DAT_0093e070;
      if ((*param_1 & 0x202) != 0) {
        uVar12 = *(uint *)PTR_DAT_0093e070;
        puVar17 = PTR_DAT_0093e070;
        if ((uVar12 & 0x8000) == 0) {
          lVar10 = *(long *)(in_FS_OFFSET + 0x10);
          piVar16 = *(int **)(PTR_DAT_0093e070 + 0x88);
          if (*(long *)(piVar16 + 2) != lVar10) {
            LOCK();
            iVar8 = *piVar16;
            if (iVar8 == 0) {
              *piVar16 = 1;
            }
            UNLOCK();
            if (iVar8 != 0) {
              FUN_00709590();
            }
            puVar17 = PTR_DAT_0093e070;
            piVar16 = *(int **)(puVar6 + 0x88);
            *(long *)(piVar16 + 2) = lVar10;
            uVar12 = *(uint *)puVar17;
          }
          piVar16[1] = piVar16[1] + 1;
          if ((uVar12 & 0x288) == 0x280) {
LAB_0070074d:
            lVar10 = *(long *)(puVar17 + 0xd8);
            if (0x827 < lVar10 - 0x93f160U) {
              FUN_00703130();
              puVar17 = PTR_DAT_0093e070;
            }
                    /* try { // try from 00700780 to 007007d9 has its CatchHandler @ 00700803 */
            (**(code **)(lVar10 + 0x18))(puVar17,0xffffffff);
          }
          if ((*(uint *)puVar6 & 0x8000) == 0) {
            piVar16 = *(int **)(puVar6 + 0x88);
            iVar8 = piVar16[1];
            piVar16[1] = iVar8 + -1;
            if (iVar8 + -1 == 0) {
              piVar16[2] = 0;
              piVar16[3] = 0;
              LOCK();
              iVar8 = *piVar16;
              *piVar16 = 0;
              UNLOCK();
              if (1 < iVar8) {
                FUN_00709660();
              }
            }
          }
        }
        else if ((uVar12 & 0x288) == 0x280) goto LAB_0070074d;
      }
      FUN_00706480(param_1);
      puVar2 = *(undefined8 **)(param_1 + 0x28);
      uVar11 = puVar2[6];
      *puVar2 = uVar11;
      puVar2[1] = uVar11;
      puVar2[2] = uVar11;
      puVar2[3] = uVar11;
      puVar2[4] = uVar11;
      puVar2[5] = uVar11;
      uVar15 = 0;
LAB_007003ef:
      lVar10 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar10 - 0x93f160U) {
        FUN_00703130();
      }
      uVar9 = (**(code **)(lVar10 + 0x70))
                        (param_1,*(long *)(param_1 + 4),
                         *(long *)(param_1 + 0x10) - *(long *)(param_1 + 4));
      if ((long)uVar9 < 1) {
        if (uVar9 == 0 && uVar15 == 0) {
          uVar7 = 0xffffffff;
          param_1[0x24] = 0xffffffff;
          param_1[0x25] = 0xffffffff;
          *param_1 = *param_1 | 0x10;
        }
        else {
          *param_1 = *param_1 | 0x20;
          if (uVar15 == 0) goto LAB_00700341;
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
          uVar7 = 0xffffffff;
        }
        goto LAB_00700308;
      }
      lVar10 = *(long *)(param_1 + 4);
      *(ulong *)(param_1 + 4) = lVar10 + uVar9;
      if (*(long *)(param_1 + 0x24) != -1) {
        *(ulong *)(param_1 + 0x24) = *(long *)(param_1 + 0x24) + uVar9;
      }
      lVar4 = *(long *)(param_1 + 0x28);
      uVar11 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(lVar4 + 0x58);
      *(undefined8 *)(param_1 + 6) = uVar11;
      if (uVar15 == 0) {
        iVar8 = FUN_00701eb0(uVar3,lVar4 + 0x58,uVar11,lVar10 + uVar9,&local_60,
                             *(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x38),lVar4 + 8);
LAB_00700488:
        uVar15 = 0;
        uVar9 = local_60;
      }
      else {
        uVar13 = 0x10 - uVar15;
        if (uVar9 < 0x10 - uVar15) {
          uVar13 = uVar9;
        }
        puVar1 = local_58 + uVar15;
        uVar11 = thunk_FUN_00713820(puVar1);
        uVar15 = uVar15 + uVar13;
        iVar8 = FUN_00701eb0(uVar3,lVar4 + 0x58,local_58,uVar11,&local_60,*(undefined8 *)(lVar4 + 8)
                             ,*(undefined8 *)(lVar4 + 0x38),lVar4 + 8);
        if (uVar15 == 0) goto LAB_00700488;
        lVar10 = local_60 - (long)puVar1;
        if (lVar10 < 0) {
          lVar10 = 0;
        }
        uVar9 = lVar10 + *(long *)(param_1 + 2);
      }
      puVar2 = *(undefined8 **)(param_1 + 0x28);
      *(ulong *)(param_1 + 2) = uVar9;
      if (puVar2[1] != puVar2[6]) {
        uVar7 = *(undefined4 *)*puVar2;
        goto LAB_00700308;
      }
      if (iVar8 != 2) {
        if (iVar8 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("status == __codecvt_partial","wfileops.c",0x120,"_IO_wfile_underflow");
        }
        if (uVar15 == 0) {
          uVar13 = *(ulong *)(param_1 + 6);
          uVar14 = *(long *)(param_1 + 4) - uVar9;
          if (uVar9 <= uVar13) {
            if (uVar14 < 0x10) {
              thunk_FUN_00713a50(local_58);
              goto LAB_007003e2;
            }
            goto LAB_00700330;
          }
          thunk_FUN_00713610(uVar13);
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
          *(ulong *)(param_1 + 4) = *(long *)(param_1 + 4) - uVar14;
        }
        else {
          lVar10 = local_60 - (long)local_58;
          uVar14 = uVar15;
          if (lVar10 != 0) {
            uVar14 = uVar15 - lVar10;
            thunk_FUN_00713610(local_58,local_60,uVar14);
          }
          if (uVar14 == 0x10) goto LAB_00700330;
          uVar13 = *(ulong *)(param_1 + 6);
LAB_007003e2:
          *(ulong *)(param_1 + 2) = uVar13;
          *(ulong *)(param_1 + 4) = uVar13;
          uVar15 = uVar14;
        }
        goto LAB_007003ef;
      }
    }
LAB_00700330:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
    *param_1 = *param_1 | 0x20;
  }
LAB_00700341:
  uVar7 = 0xffffffff;
LAB_00700308:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar7;
}

