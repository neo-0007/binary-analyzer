
void FUN_00707c50(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  int *piVar7;
  long in_FS_OFFSET;
  bool bVar8;
  code *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = FUN_00705ef0;
  FUN_00709520(&local_58);
  lVar4 = *(long *)(in_FS_OFFSET + 0x10);
  lVar5 = DAT_00946938;
  if (DAT_00946938 != lVar4) {
    LOCK();
    bVar8 = DAT_00946930 == 0;
    if (bVar8) {
      DAT_00946930 = 1;
    }
    UNLOCK();
    lVar5 = lVar4;
    if (!bVar8) {
      FUN_00709590(&DAT_00946930);
    }
  }
  DAT_00946938 = lVar5;
  puVar6 = (uint *)PTR_DAT_0093dac0;
  iVar3 = DAT_00946934 + 1;
  if (PTR_DAT_0093dac0 != (undefined *)0x0) {
    do {
      DAT_00946934 = iVar3;
      DAT_00946920 = puVar6;
      if ((*puVar6 & 0x8000) == 0) {
        lVar4 = *(long *)(in_FS_OFFSET + 0x10);
        piVar7 = *(int **)(puVar6 + 0x22);
        if (*(long *)(piVar7 + 2) != lVar4) {
          LOCK();
          iVar3 = *piVar7;
          if (iVar3 == 0) {
            *piVar7 = 1;
          }
          UNLOCK();
          if (iVar3 != 0) {
            FUN_00709590();
          }
          piVar7 = *(int **)(puVar6 + 0x22);
          *(long *)(piVar7 + 2) = lVar4;
        }
        uVar2 = *puVar6;
        piVar7[1] = piVar7[1] + 1;
        if ((uVar2 & 0x208) == 0x200) goto LAB_00707d92;
LAB_00707d2d:
        if ((*puVar6 & 0x8000) == 0) {
          piVar7 = *(int **)(puVar6 + 0x22);
          iVar3 = piVar7[1];
          piVar7[1] = iVar3 + -1;
          if (iVar3 + -1 == 0) {
            piVar7[2] = 0;
            piVar7[3] = 0;
            LOCK();
            iVar3 = *piVar7;
            *piVar7 = 0;
            UNLOCK();
            if (1 < iVar3) {
              FUN_00709660();
            }
          }
        }
      }
      else if ((*puVar6 & 0x208) == 0x200) {
LAB_00707d92:
        lVar4 = *(long *)(puVar6 + 0x36);
        if (0x827 < lVar4 - 0x93f160U) {
          FUN_00703130();
        }
        (**(code **)(lVar4 + 0x18))(puVar6,0xffffffff);
        goto LAB_00707d2d;
      }
      DAT_00946920 = (uint *)0x0;
      puVar1 = puVar6 + 0x1a;
      puVar6 = *(uint **)puVar1;
      iVar3 = DAT_00946934;
    } while (*(uint **)puVar1 != (uint *)0x0);
    DAT_00946934 = DAT_00946934 + -1;
  }
  if (DAT_00946934 == 0) {
    DAT_00946938 = 0;
    LOCK();
    UNLOCK();
    bVar8 = 1 < DAT_00946930;
    DAT_00946930 = DAT_00946934;
    if (bVar8) {
      FUN_00709660(&DAT_00946930);
    }
  }
  FUN_00709560(&local_58);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

