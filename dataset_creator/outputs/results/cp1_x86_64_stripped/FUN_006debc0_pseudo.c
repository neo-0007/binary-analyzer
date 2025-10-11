
char * FUN_006debc0(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  undefined **ppuVar14;
  long in_FS_OFFSET;
  long *local_158;
  undefined8 local_128;
  undefined8 local_120;
  char *local_118 [14];
  char *local_a8 [13];
  long local_40;
  
  uVar10 = (ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0xc < uVar10) {
LAB_006dee91:
    pcVar5 = (char *)0x0;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    goto LAB_006dedb0;
  }
  if (param_2 == (char *)0x0) {
    pcVar5 = (&PTR_s_C_0093da40)[uVar10];
    goto LAB_006dedb0;
  }
  FUN_0070b2d0(&DAT_00946120);
  iVar4 = thunk_FUN_00712780(param_2,(&PTR_PTR_0093d9c0)[uVar10 + 0x10]);
  if (iVar4 == 0) {
    FUN_0070b100(&DAT_00946120);
    pcVar5 = (&PTR_PTR_0093d9c0)[uVar10 + 0x10];
    goto LAB_006dedb0;
  }
  local_128 = 0;
  local_120 = 0;
  pcVar5 = (char *)FUN_006e8e30("LOCPATH");
  if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
LAB_006dec6b:
    if (param_1 != 6) {
      lVar11 = (&DAT_00939b40)[uVar10];
      local_a8[0] = param_2;
      if (lVar11 == 0) {
        local_158 = (long *)0x0;
LAB_006decd2:
        if ((local_a8[0] != "C") &&
           (local_a8[0] = (char *)FUN_007128a0(local_a8[0]), local_a8[0] == (char *)0x0))
        goto LAB_006df032;
        puVar6 = (undefined *)FUN_006de960(param_1,local_a8);
        if (puVar6 == (undefined *)0x0) {
          if (local_a8[0] != "C") {
            FUN_007104f0();
          }
          goto LAB_006df032;
        }
        if (lVar11 != 0) {
          (&PTR_PTR_0093d9c0)[uVar10] = (undefined *)local_158;
          if ((code *)(&PTR_FUN_00939ac0)[uVar10] != (code *)0x0) {
            (*(code *)(&PTR_FUN_00939ac0)[uVar10])();
          }
        }
        pcVar5 = local_a8[0];
        if (local_a8[0] != (&PTR_s_C_0093da40)[uVar10]) {
          if ((&PTR_s_C_0093da40)[uVar10] != "C") {
            FUN_007104f0();
          }
          (&PTR_s_C_0093da40)[uVar10] = pcVar5;
        }
        puVar3 = PTR_s_C_0093da70;
        if ((puVar6 != PTR_s_C_0093da70) && (puVar3 = puVar6, PTR_s_C_0093da70 != "C")) {
          FUN_007104f0();
        }
        PTR_s_C_0093da70 = puVar3;
        DAT_009463c0 = DAT_009463c0 + 1;
      }
      else {
        local_158 = (long *)FUN_006df4c0(local_128,local_120,param_1,local_a8);
        if (local_158 != (long *)0x0) {
          if (*(int *)((long)local_158 + 0x30) != -1) {
            *(undefined4 *)((long)local_158 + 0x30) = 0xffffffff;
          }
          goto LAB_006decd2;
        }
LAB_006df032:
        local_a8[0] = (char *)0x0;
      }
      FUN_0070b100(&DAT_00946120);
      FUN_007104f0(local_128);
      pcVar5 = local_a8[0];
      goto LAB_006dedb0;
    }
    local_118[0] = param_2;
    local_118[1] = param_2;
    local_118[2] = param_2;
    local_118[3] = param_2;
    local_118[4] = param_2;
    local_118[5] = param_2;
    local_118[7] = param_2;
    local_118[8] = param_2;
    local_118[9] = param_2;
    local_118[10] = param_2;
    local_118[0xb] = param_2;
    local_118[0xc] = param_2;
    local_158 = (long *)thunk_FUN_00712710(param_2,0x3b);
    if (local_158 == (long *)0x0) {
LAB_006deef3:
      iVar4 = 0xc;
      iVar9 = 0xd;
LAB_006def14:
      iVar12 = iVar4;
      pcVar5 = (char *)FUN_006df4c0(local_128,local_120,iVar12,local_118 + iVar12);
      local_a8[iVar12] = pcVar5;
      if (pcVar5 == (char *)0x0) {
        if (local_118[iVar12] != "C") {
LAB_006df068:
          lVar11 = (long)iVar9;
          if (iVar9 == 0xd) goto LAB_006df0a2;
          goto LAB_006df084;
        }
      }
      else {
        if (*(int *)(pcVar5 + 0x30) != -1) {
          pcVar5[0x30] = -1;
          pcVar5[0x31] = -1;
          pcVar5[0x32] = -1;
          pcVar5[0x33] = -1;
        }
        pcVar5 = local_118[iVar12];
        if (pcVar5 != "C") {
          pcVar2 = (&PTR_s_C_0093da40)[iVar12];
          iVar4 = thunk_FUN_00712780(pcVar5,pcVar2);
          if (iVar4 == 0) {
            local_118[iVar12] = pcVar2;
          }
          else {
            pcVar5 = (char *)FUN_007128a0(pcVar5);
            local_118[iVar12] = pcVar5;
            if (pcVar5 == (char *)0x0) goto LAB_006df068;
          }
        }
      }
      iVar1 = iVar12 + -1;
      if (iVar12 != 0) {
        iVar4 = iVar1;
        iVar9 = iVar12;
        if (iVar1 == 6) {
          iVar4 = 5;
          iVar9 = iVar1;
        }
        goto LAB_006def14;
      }
      pcVar5 = (char *)FUN_006de960(6,local_118);
      if (pcVar5 == (char *)0x0) {
        lVar11 = 0;
LAB_006df084:
        do {
          if ((int)lVar11 != 6) {
            pcVar5 = local_118[lVar11];
            if ((pcVar5 != "C") && (pcVar5 != (&PTR_s_C_0093da40)[lVar11])) {
              FUN_007104f0();
            }
            if ((int)lVar11 == 0xc) goto LAB_006df0a2;
          }
          lVar11 = lVar11 + 1;
        } while( true );
      }
      lVar11 = 0;
      ppuVar14 = &PTR_s_C_0093da40;
      do {
        if (lVar11 != 6) {
          if ((&DAT_00939b40)[lVar11] != 0) {
            ppuVar14[-0x10] = local_a8[lVar11];
            if ((code *)(&PTR_FUN_00939ac0)[lVar11] != (code *)0x0) {
              (*(code *)(&PTR_FUN_00939ac0)[lVar11])();
            }
          }
          pcVar2 = local_118[lVar11];
          if (pcVar2 != *ppuVar14) {
            if (*ppuVar14 != "C") {
              FUN_007104f0();
            }
            *ppuVar14 = pcVar2;
          }
          if (lVar11 == 0xc) goto code_r0x006df187;
        }
        lVar11 = lVar11 + 1;
        ppuVar14 = ppuVar14 + 1;
      } while( true );
    }
    local_158 = (long *)FUN_007128a0(param_2);
    plVar13 = local_158;
    if (local_158 != (long *)0x0) {
      while (lVar11 = thunk_FUN_00712710(plVar13,0x3d), lVar11 != 0) {
        lVar8 = lVar11 - (long)plVar13;
        if (lVar8 == 8) {
          if (*plVar13 == 0x45505954435f434c) {
            iVar4 = 0;
          }
          else {
            if (*plVar13 != 0x52455041505f434c) goto LAB_006dee80;
            iVar4 = 7;
          }
        }
        else if (lVar8 == 10) {
          if (((*plVar13 != 0x52454d554e5f434c) || (iVar4 = 1, (short)plVar13[1] != 0x4349)) &&
             ((*plVar13 != 0x414c4c4f435f434c || (iVar4 = 3, (short)plVar13[1] != 0x4554)))) {
            if ((*plVar13 != 0x45524444415f434c) || ((short)plVar13[1] != 0x5353))
            goto LAB_006dee80;
            iVar4 = 9;
          }
        }
        else if (lVar8 == 7) {
          if ((((int)*plVar13 != 0x545f434c) || (*(short *)((long)plVar13 + 4) != 0x4d49)) ||
             (iVar4 = 2, *(char *)((long)plVar13 + 6) != 'E')) {
            if ((((int)*plVar13 != 0x4e5f434c) || (*(short *)((long)plVar13 + 4) != 0x4d41)) ||
               (*(char *)((long)plVar13 + 6) != 'E')) goto LAB_006dee80;
            iVar4 = 8;
          }
        }
        else if (lVar8 == 0xb) {
          if (((*plVar13 != 0x54454e4f4d5f434c) || ((short)plVar13[1] != 0x5241)) ||
             (iVar4 = 4, *(char *)((long)plVar13 + 10) != 'Y')) {
            if (((*plVar13 != 0x415353454d5f434c) || ((short)plVar13[1] != 0x4547)) ||
               (*(char *)((long)plVar13 + 10) != 'S')) goto LAB_006dee80;
            iVar4 = 5;
          }
        }
        else if (lVar8 == 0xc) {
          if ((*plVar13 != 0x50454c45545f434c) || ((int)plVar13[1] != 0x454e4f48))
          goto LAB_006dee80;
          iVar4 = 10;
        }
        else if (lVar8 == 0xe) {
          if (((*plVar13 != 0x555341454d5f434c) || ((int)plVar13[1] != 0x454d4552)) ||
             (*(short *)((long)plVar13 + 0xc) != 0x544e)) goto LAB_006dee80;
          iVar4 = 0xb;
        }
        else {
          if (((lVar8 != 0x11) ||
              (plVar13[1] != 0x4f49544143494649 || *plVar13 != 0x544e4544495f434c)) ||
             ((char)plVar13[2] != 'N')) goto LAB_006dee80;
          iVar4 = 0xc;
        }
        local_118[iVar4] = (char *)(lVar11 + 1);
        puVar7 = (undefined1 *)thunk_FUN_00712710((char *)(lVar11 + 1),0x3b);
        if (puVar7 == (undefined1 *)0x0) break;
        *puVar7 = 0;
        plVar13 = (long *)(puVar7 + 1);
      }
      if (((local_118[0] != param_2) && (param_2 != local_118[1])) &&
         (((param_2 != local_118[2] && ((param_2 != local_118[3] && (param_2 != local_118[4])))) &&
          ((local_118[5] != param_2 &&
           (((((param_2 != local_118[7] && (param_2 != local_118[8])) && (param_2 != local_118[9]))
             && ((param_2 != local_118[10] && (local_118[0xb] != param_2)))) &&
            (param_2 != local_118[0xc])))))))) goto LAB_006deef3;
LAB_006dee80:
      FUN_0070b100(&DAT_00946120);
      FUN_007104f0(local_158);
      goto LAB_006dee91;
    }
  }
  else {
    iVar4 = FUN_007142a0(pcVar5,0x3a,&local_128,&local_120);
    if ((iVar4 == 0) &&
       (iVar4 = FUN_00714380(&local_128,&local_120,"/usr/lib/locale",0x3a), iVar4 == 0))
    goto LAB_006dec6b;
  }
  pcVar5 = (char *)0x0;
  FUN_0070b100(&DAT_00946120);
  goto LAB_006dedb0;
LAB_006df0a2:
  pcVar5 = (char *)0x0;
  goto LAB_006df0a5;
code_r0x006df187:
  pcVar2 = PTR_s_C_0093da70;
  if ((pcVar5 != PTR_s_C_0093da70) && (pcVar2 = pcVar5, PTR_s_C_0093da70 != "C")) {
    FUN_007104f0();
  }
  PTR_s_C_0093da70 = pcVar2;
  DAT_009463c0 = DAT_009463c0 + 1;
LAB_006df0a5:
  FUN_0070b100(&DAT_00946120);
  FUN_007104f0(local_128);
  FUN_007104f0(local_158);
LAB_006dedb0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return pcVar5;
}

