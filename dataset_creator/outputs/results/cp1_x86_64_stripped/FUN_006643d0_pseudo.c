
ulong FUN_006643d0(long *param_1)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  char *pcVar11;
  int unaff_R13D;
  ulong uVar12;
  long unaff_R14;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(param_1 + 0xf) & 8) == 0) {
LAB_00664892:
    uVar12 = 0xffffffff;
  }
  else {
    pcVar11 = (char *)param_1;
    if (*(char *)((long)param_1 + 0xaa) != '\0') goto LAB_00664658;
    pbVar6 = (byte *)param_1[2];
    if ((char)param_1[0x18] != '\0') goto LAB_006646ab;
LAB_0066441d:
    if ((byte *)param_1[3] <= pbVar6) {
      do {
        uVar12 = 2;
        if (1 < (ulong)param_1[0x14]) {
          uVar12 = param_1[0x14];
        }
        uVar1 = uVar12 - 1;
        if ((long *)param_1[0x19] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00403826();
        }
        cVar2 = (**(code **)(*(long *)param_1[0x19] + 0x30))();
        if (cVar2 == '\0') {
          iVar3 = (**(code **)(*(long *)param_1[0x19] + 0x28))();
          if (iVar3 < 1) {
            iVar3 = (**(code **)(*(long *)param_1[0x19] + 0x40))();
            uVar12 = (uVar12 - 2) + (long)iVar3;
            uVar9 = uVar1;
          }
          else {
            uVar12 = (long)iVar3 * uVar1;
            uVar9 = uVar12;
          }
          lVar8 = param_1[0x1d] - param_1[0x1c];
          unaff_R14 = uVar9 - lVar8;
          if ((long)uVar9 <= lVar8) {
            unaff_R14 = 0;
          }
          lVar5 = param_1[0x1b];
          if ((*(char *)((long)param_1 + 0xa9) == '\0') || (param_1[1] != param_1[3])) {
            if (lVar5 < (long)uVar12) {
              uVar9 = thunk_FUN_006c31f0(uVar12);
              if (lVar8 != 0) goto LAB_00664923;
              goto LAB_006648b0;
            }
            if (lVar8 != 0) goto LAB_006648e0;
LAB_006644d4:
            uVar9 = param_1[0x1a];
          }
          else {
            if (lVar8 == 0) {
              if (lVar5 < (long)uVar12) {
                uVar9 = thunk_FUN_006c31f0(uVar12);
                goto LAB_006648b0;
              }
              goto LAB_006644d4;
            }
            unaff_R14 = 0;
            if ((long)uVar12 <= lVar5) {
LAB_006648e0:
              thunk_FUN_00713610(param_1[0x1a],param_1[0x1c],lVar8);
              goto LAB_006644d4;
            }
            unaff_R14 = 0;
            uVar9 = thunk_FUN_006c31f0(uVar12);
LAB_00664923:
            thunk_FUN_00713a50(uVar9,param_1[0x1c],lVar8);
LAB_006648b0:
            if (param_1[0x1a] != 0) {
              thunk_FUN_007104f0();
            }
            param_1[0x1a] = uVar9;
            param_1[0x1b] = uVar12;
          }
          uVar12 = uVar9 + lVar8;
          param_1[0x1c] = uVar9;
          param_1[0x1d] = uVar12;
          *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)((long)param_1 + 0x84);
          if (unaff_R14 != 0) {
            unaff_R13D = 0;
            goto LAB_0066459e;
          }
          lVar8 = param_1[1];
          unaff_R13D = 0;
          local_48 = lVar8;
          if (uVar12 <= uVar9) goto LAB_00664587;
          unaff_R14 = 0;
LAB_00664520:
          local_48 = lVar8;
          unaff_R13D = (**(code **)(*(long *)param_1[0x19] + 0x20))
                                 ((long *)param_1[0x19],(long)param_1 + 0x84,uVar9,uVar12,
                                  param_1 + 0x1c,lVar8,lVar8 + uVar1);
          if (unaff_R13D == 3) {
            uVar12 = param_1[0x1d];
            lVar8 = param_1[1];
            goto LAB_00664743;
          }
          uVar9 = local_48 - param_1[1];
          if (unaff_R13D != 2) {
            uVar4 = ((uint)unaff_R14 ^ 1) & (uint)(uVar9 == 0);
            do {
              if ((char)uVar4 == '\0') goto LAB_006647e8;
LAB_00664587:
              while( true ) {
                uVar12 = param_1[0x1d];
                unaff_R14 = 1;
                lVar8 = uVar12 - param_1[0x1a];
LAB_0066459e:
                uVar9 = lVar8 + unaff_R14;
                if (param_1[0x1b] < (long)uVar9) {
                  FUN_004042e0("basic_filebuf::underflow codecvt::max_length() is not valid");
                  goto LAB_0066495f;
                }
                lVar5 = FUN_006c3f20(param_1 + 0xd,uVar12,unaff_R14);
                if (lVar5 == 0) {
                  unaff_R14 = 1;
                }
                else {
                  if (lVar5 == -1) goto LAB_006647ce;
                  unaff_R14 = 0;
                }
                lVar8 = param_1[1];
                uVar9 = param_1[0x1c];
                uVar12 = lVar5 + param_1[0x1d];
                param_1[0x1d] = uVar12;
                if (uVar9 < uVar12) goto LAB_00664520;
                local_48 = lVar8;
                if (unaff_R13D == 3) break;
                if ((char)unaff_R14 != '\0') goto LAB_0066460c;
              }
LAB_00664743:
              lVar5 = param_1[0x1a];
              uVar9 = uVar12 - lVar5;
              uVar12 = uVar1;
              if ((uVar1 < uVar9) || (uVar12 = uVar9, uVar9 != 0)) {
                uVar9 = uVar12;
                thunk_FUN_00713a50(lVar8,lVar5,uVar9);
                lVar5 = param_1[0x1a] + uVar9;
              }
              param_1[0x1c] = lVar5;
              unaff_R13D = 3;
              uVar4 = ((uint)unaff_R14 ^ 1) & (uint)(uVar9 == 0);
            } while( true );
          }
          if (0 < (long)uVar9) {
LAB_006647f1:
            pbVar6 = (byte *)param_1[0x13];
            param_1[5] = 0;
            param_1[4] = 0;
            param_1[1] = (long)pbVar6;
            pbVar10 = pbVar6 + uVar9;
            if ((*(byte *)(param_1 + 0xf) & 8) == 0) {
              pbVar10 = pbVar6;
            }
            param_1[2] = (long)pbVar6;
            param_1[6] = 0;
            param_1[3] = (long)pbVar10;
            *(undefined1 *)((long)param_1 + 0xa9) = 1;
            uVar12 = (ulong)*pbVar6;
            goto LAB_006646f0;
          }
          if ((char)unaff_R14 == '\0') {
            FUN_004042e0("basic_filebuf::underflow invalid byte sequence in file",uVar9,&local_48);
          }
LAB_00664860:
          lVar8 = param_1[0x13];
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[1] = lVar8;
          param_1[2] = lVar8;
          param_1[3] = lVar8;
          param_1[6] = 0;
          *(undefined1 *)((long)param_1 + 0xa9) = 0;
          goto LAB_00664892;
        }
        uVar9 = FUN_006c3f20(param_1 + 0xd,param_1[1],uVar1);
        if (uVar9 == 0) goto LAB_00664860;
        if (0 < (long)uVar9) goto LAB_006647f1;
LAB_006647ce:
        do {
          puVar7 = (undefined4 *)FUN_006d2700();
          FUN_00404399("basic_filebuf::underflow error reading the file",*puVar7);
LAB_006647e8:
          if (0 < (long)uVar9) goto LAB_006647f1;
        } while ((char)unaff_R14 == '\0');
LAB_0066460c:
        lVar8 = param_1[0x13];
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[1] = lVar8;
        param_1[2] = lVar8;
        param_1[3] = lVar8;
        param_1[6] = 0;
        *(undefined1 *)((long)param_1 + 0xa9) = 0;
        if (unaff_R13D != 1) goto LAB_00664892;
        pcVar11 = "basic_filebuf::underflow incomplete character in file";
        FUN_004042e0();
        unaff_R13D = 0;
LAB_00664658:
        uVar12 = (**(code **)(*(long *)pcVar11 + 0x68))();
        if ((int)uVar12 == -1) goto LAB_006646f0;
        pbVar6 = (byte *)param_1[0x13];
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[1] = (long)pbVar6;
        param_1[2] = (long)pbVar6;
        param_1[3] = (long)pbVar6;
        param_1[6] = 0;
        *(undefined1 *)((long)param_1 + 0xaa) = 0;
        if ((char)param_1[0x18] == '\0') goto LAB_0066441d;
LAB_006646ab:
        *(undefined1 *)(param_1 + 0x18) = 0;
        pbVar6 = (byte *)((ulong)((byte *)param_1[1] != pbVar6) + param_1[0x16]);
        param_1[3] = param_1[0x17];
        param_1[0x16] = (long)pbVar6;
        param_1[1] = param_1[0x13];
        param_1[2] = (long)pbVar6;
        if (pbVar6 < (byte *)param_1[0x17]) break;
      } while( true );
    }
    uVar12 = (ulong)*pbVar6;
  }
LAB_006646f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
LAB_0066495f:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

