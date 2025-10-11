
ulong FUN_00616b70(long param_1,ulong param_2,ulong param_3,int *param_4)

{
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  char *pcVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined1 local_41;
  long local_40;
  
  piVar2 = *(int **)(param_1 + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = (int)param_2;
  if (0x1d < iVar4) {
    iVar9 = (int)param_3;
    if (iVar4 == 0x75) {
      iVar4 = iVar9;
      if (param_4 != (int *)0x0) {
        if (*param_4 == 0) {
          iVar9 = piVar2[1];
        }
        else {
          iVar4 = *piVar2;
        }
      }
      lVar5 = *(long *)(piVar2 + 6);
      lVar8 = *(long *)(piVar2 + 2);
      if ((iVar4 < 0x1001) || (*piVar2 == iVar4)) {
        uVar7 = 1;
        if (0x1000 < iVar9) {
          lVar11 = lVar5;
          if (iVar9 == piVar2[1]) goto LAB_00616fd4;
LAB_0061707b:
          lVar5 = FUN_0041ad90(param_3,"../crypto/bio/bf_buff.c",0x148);
          if (lVar5 != 0) goto LAB_00616f9f;
          if (*(long *)(piVar2 + 2) != lVar8) {
            FUN_0041ad60(lVar8,"../crypto/bio/bf_buff.c",0x14b);
          }
LAB_006170b8:
          FUN_0051f420();
          FUN_0051f540("../crypto/bio/bf_buff.c",0x199,"buffer_ctrl");
          FUN_0051f8f0(0x20,0xc0100,0);
          goto LAB_00616cd8;
        }
      }
      else {
        if ((long)param_3 < 1) goto LAB_00616cd8;
        lVar8 = FUN_0041ad90(param_3,"../crypto/bio/bf_buff.c",0x143);
        if (lVar8 == 0) goto LAB_006170b8;
        if ((0x1000 < iVar9) && (piVar2[1] != iVar9)) goto LAB_0061707b;
LAB_00616f9f:
        if (*(long *)(piVar2 + 2) == lVar8) {
          lVar11 = *(long *)(piVar2 + 6);
        }
        else {
          FUN_0041ad60(*(long *)(piVar2 + 2),"../crypto/bio/bf_buff.c",0x150);
          *piVar2 = iVar4;
          *(long *)(piVar2 + 2) = lVar8;
          piVar2[4] = 0;
          piVar2[5] = 0;
          lVar11 = *(long *)(piVar2 + 6);
        }
LAB_00616fd4:
        if (lVar5 == lVar11) {
          uVar7 = 1;
        }
        else {
          uVar7 = 1;
          FUN_0041ad60(lVar11,"../crypto/bio/bf_buff.c",0x157);
          *(long *)(piVar2 + 6) = lVar5;
          piVar2[8] = 0;
          piVar2[9] = 0;
          piVar2[1] = iVar9;
        }
      }
    }
    else if (iVar4 < 0x76) {
      if (iVar4 == 0x65) {
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_00616cd8;
        FUN_004ab6c0(param_1,0xf);
        uVar7 = FUN_004abd40(*(undefined8 *)(param_1 + 0x48),0x65,param_3,param_4);
        FUN_004ac5f0(param_1);
      }
      else {
        if (iVar4 != 0x74) goto switchD_00616bc5_caseD_4;
        if (piVar2[4] < 1) goto LAB_00616cd8;
        uVar7 = 0;
        pcVar1 = (char *)(*(long *)(piVar2 + 2) + (long)piVar2[5]) + 1;
        pcVar3 = pcVar1;
        pcVar10 = (char *)(*(long *)(piVar2 + 2) + (long)piVar2[5]);
        while (pcVar6 = pcVar3, uVar7 = uVar7 + (*pcVar10 == '\n'),
              pcVar6 != pcVar1 + (piVar2[4] - 1)) {
          pcVar10 = pcVar6;
          pcVar3 = pcVar6 + 1;
        }
      }
    }
    else {
      if (iVar4 != 0x7a) {
switchD_00616bc5_caseD_4:
        lVar5 = *(long *)(param_1 + 0x48);
        if (lVar5 != 0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00616d2b:
            uVar7 = FUN_004abd40(lVar5,param_2,param_3,param_4);
            return uVar7;
          }
          goto LAB_00616ea5;
        }
        goto LAB_00616cd8;
      }
      if ((long)*piVar2 < (long)param_3) {
        if ((long)param_3 < 1) goto LAB_00616cd8;
        lVar5 = FUN_0041ad90(param_3,"../crypto/bio/bf_buff.c",0x124);
        if (lVar5 == 0) goto LAB_006170b8;
        FUN_0041ad60(*(undefined8 *)(piVar2 + 2),"../crypto/bio/bf_buff.c",0x127);
        *(long *)(piVar2 + 2) = lVar5;
      }
      else {
        lVar5 = *(long *)(piVar2 + 2);
      }
      piVar2[4] = iVar9;
      piVar2[5] = 0;
      uVar7 = 1;
      thunk_FUN_00713a50(lVar5,param_4,(long)iVar9);
    }
    goto LAB_00616cdb;
  }
  switch(param_2 & 0xffffffff) {
  case 1:
    lVar5 = *(long *)(param_1 + 0x48);
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    if (lVar5 != 0) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00616ea5;
      param_2 = 1;
      goto LAB_00616d2b;
    }
    goto LAB_00616cd8;
  case 2:
    if (piVar2[4] < 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        lVar5 = *(long *)(param_1 + 0x48);
        param_2 = 2;
        goto LAB_00616d2b;
      }
      goto LAB_00616ea5;
    }
    goto LAB_00616cd8;
  case 3:
    uVar7 = (ulong)piVar2[8];
    break;
  default:
    goto switchD_00616bc5_caseD_4;
  case 10:
    uVar7 = (ulong)piVar2[4];
    if (uVar7 == 0) {
      lVar5 = *(long *)(param_1 + 0x48);
      if (lVar5 != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          param_2 = 10;
          goto LAB_00616d2b;
        }
        goto LAB_00616ea5;
      }
      goto LAB_00616cd8;
    }
    break;
  case 0xb:
    lVar5 = *(long *)(param_1 + 0x48);
    if (lVar5 != 0) {
      if (piVar2[8] < 1) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00616ea5;
      }
      else {
        while (FUN_004ab6c0(param_1,0xf), 0 < piVar2[8]) {
          iVar4 = FUN_004ab7e0(*(undefined8 *)(param_1 + 0x48),
                               (long)piVar2[9] + *(long *)(piVar2 + 6));
          uVar7 = (ulong)iVar4;
          FUN_004ac5f0(param_1);
          if (iVar4 < 1) goto LAB_00616cdb;
          piVar2[9] = piVar2[9] + iVar4;
          piVar2[8] = piVar2[8] - iVar4;
        }
        piVar2[8] = 0;
        piVar2[9] = 0;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00616ea5;
        lVar5 = *(long *)(param_1 + 0x48);
      }
      param_2 = 0xb;
      goto LAB_00616d2b;
    }
LAB_00616cd8:
    uVar7 = 0;
    break;
  case 0xc:
    lVar5 = FUN_004abfe0(param_4,0x75,(long)*piVar2,0);
    if (lVar5 == 0) goto LAB_00616cd8;
    lVar5 = FUN_004abfe0(param_4,0x75,(long)piVar2[1],1);
    uVar7 = (ulong)(lVar5 != 0);
    break;
  case 0xd:
    uVar7 = (ulong)piVar2[8];
    if (uVar7 == 0) {
      lVar5 = *(long *)(param_1 + 0x48);
      if (lVar5 != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          param_2 = 0xd;
          goto LAB_00616d2b;
        }
        goto LAB_00616ea5;
      }
      goto LAB_00616cd8;
    }
    break;
  case 0x1d:
    FUN_00616a20(param_1,&local_41,0);
    uVar7 = param_3;
    if ((long)piVar2[4] <= (long)param_3) {
      uVar7 = (long)piVar2[4];
    }
    thunk_FUN_00713a50(param_4,(long)piVar2[5] + *(long *)(piVar2 + 2),uVar7);
  }
LAB_00616cdb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
LAB_00616ea5:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

