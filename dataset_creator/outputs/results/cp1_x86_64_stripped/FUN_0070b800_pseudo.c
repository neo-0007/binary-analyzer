
int FUN_0070b800(int param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(in_FS_OFFSET + 0x10);
  piVar6 = *(int **)(in_FS_OFFSET + 0x6b0);
  iVar4 = DAT_0093e088;
  iVar3 = DAT_0093e084;
  if (piVar6 == (int *)0x0) {
    if ((DAT_0093e088 == -1) || (DAT_0093e084 == -1)) {
      DAT_0093e084 = FUN_00769460(1);
      DAT_0093e088 = FUN_00769490(1);
    }
    iVar4 = DAT_0093e088;
    iVar3 = DAT_0093e084;
    piVar6 = (int *)FUN_00711600((long)(DAT_0093e084 - DAT_0093e088) * 4 + 8,1);
    if (piVar6 == (int *)0x0) {
      iVar3 = 0xc;
      goto LAB_0070b9d1;
    }
    *piVar6 = iVar4 + -1;
    *(int **)(in_FS_OFFSET + 0x6b0) = piVar6;
  }
  if (param_2 == -1) {
    if (param_1 != -1) {
      if ((param_1 < iVar4) || (iVar3 < param_1)) goto LAB_0070bbc9;
      iVar7 = *piVar6;
      piVar5 = piVar6 + (long)(param_1 - iVar4) + 1;
      *piVar5 = *piVar5 + -1;
      if ((*piVar5 == 0) && ((-1 < param_1 && (param_1 == iVar7)))) {
LAB_0070b8c7:
        iVar8 = param_1 + -1;
        if (iVar4 <= iVar8) {
          piVar5 = piVar6 + (long)(iVar8 - iVar4) + 1;
          do {
            if (*piVar5 != 0) break;
            iVar8 = iVar8 + -1;
            piVar5 = piVar5 + -1;
          } while (iVar4 <= iVar8);
          goto LAB_0070b8f8;
        }
        goto LAB_0070b901;
      }
    }
  }
  else {
    if ((param_2 < iVar4) || (iVar3 < param_2)) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("new_prio == -1 || (new_prio >= fifo_min_prio && new_prio <= fifo_max_prio)",
                   "tpp.c",0x53,"__pthread_tpp_change_priority");
    }
    if (param_1 == -1) {
      iVar7 = *piVar6;
      if (piVar6[(long)(param_2 - iVar4) + 1] == -1) {
LAB_0070baa0:
        iVar3 = 0xb;
        goto LAB_0070b9d1;
      }
      iVar8 = param_2;
      if (param_2 <= iVar7) {
        iVar8 = iVar7;
      }
      piVar6[(long)(param_2 - iVar4) + 1] = piVar6[(long)(param_2 - iVar4) + 1] + 1;
    }
    else {
      if ((param_1 < iVar4) || (iVar3 < param_1)) {
LAB_0070bbc9:
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("previous_prio == -1 || (previous_prio >= fifo_min_prio && previous_prio <= fifo_max_prio)"
                     ,"tpp.c",0x56,"__pthread_tpp_change_priority");
      }
      iVar7 = *piVar6;
      if (piVar6[(long)(param_2 - iVar4) + 1] == -1) goto LAB_0070baa0;
      piVar6[(long)(param_2 - iVar4) + 1] = piVar6[(long)(param_2 - iVar4) + 1] + 1;
      iVar8 = iVar7;
      if (iVar7 <= param_2) {
        iVar8 = param_2;
      }
      piVar5 = piVar6 + (long)(param_1 - iVar4) + 1;
      *piVar5 = *piVar5 + -1;
      if (((*piVar5 == 0) && (param_1 == iVar7)) && (param_2 < param_1)) goto LAB_0070b8c7;
    }
LAB_0070b8f8:
    if (iVar8 != iVar7) {
LAB_0070b901:
      piVar5 = (int *)(lVar1 + 0x618);
      LOCK();
      iVar3 = *piVar5;
      if (iVar3 == 0) {
        *piVar5 = 1;
      }
      UNLOCK();
      if (iVar3 != 0) {
        FUN_00709590(piVar5);
      }
      uVar2 = *(uint *)(lVar1 + 0x30c);
      *piVar6 = iVar8;
      if ((uVar2 & 0x20) == 0) {
        iVar3 = FUN_007693a0(*(undefined4 *)(lVar1 + 0x2d0),lVar1 + 0x638);
        if (iVar3 == 0) {
          uVar2 = *(uint *)(lVar1 + 0x30c);
          *(uint *)(lVar1 + 0x30c) = uVar2 | 0x20;
          goto LAB_0070b92c;
        }
        iVar3 = *(int *)(in_FS_OFFSET + -0x58);
        if ((*(byte *)(lVar1 + 0x30c) & 0x40) == 0) goto LAB_0070bb03;
LAB_0070bae8:
        if (iVar3 == 0) goto LAB_0070b934;
      }
      else {
LAB_0070b92c:
        if ((uVar2 & 0x40) == 0) {
          iVar3 = 0;
LAB_0070bb03:
          iVar4 = FUN_00769400(*(undefined4 *)(lVar1 + 0x2d0));
          *(int *)(lVar1 + 0x63c) = iVar4;
          if (iVar4 == -1) {
            iVar3 = *(int *)(in_FS_OFFSET + -0x58);
          }
          else {
            *(uint *)(lVar1 + 0x30c) = *(uint *)(lVar1 + 0x30c) | 0x40;
          }
          goto LAB_0070bae8;
        }
LAB_0070b934:
        local_44 = *(int *)(lVar1 + 0x638);
        if (((local_44 < iVar8) || (iVar8 = local_44, local_44 < iVar7)) &&
           (local_44 = iVar8,
           iVar3 = FUN_007693d0(*(undefined4 *)(lVar1 + 0x2d0),*(undefined4 *)(lVar1 + 0x63c),
                                &local_44), iVar3 < 0)) {
          iVar3 = *(int *)(in_FS_OFFSET + -0x58);
        }
        else {
          iVar3 = 0;
        }
      }
      LOCK();
      iVar4 = *(int *)(lVar1 + 0x618);
      *(int *)(lVar1 + 0x618) = 0;
      UNLOCK();
      if (1 < iVar4) {
        FUN_00709660(piVar5);
      }
      goto LAB_0070b9d1;
    }
  }
  iVar3 = 0;
LAB_0070b9d1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar3;
}

