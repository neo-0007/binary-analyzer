
undefined4 FUN_00707990(void)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  long in_FS_OFFSET;
  bool bVar9;
  code *local_68;
  undefined8 local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = FUN_00707720(0);
  local_60 = 0;
  local_68 = FUN_00705ef0;
  FUN_00709520(&local_68);
  lVar3 = *(long *)(in_FS_OFFSET + 0x10);
  lVar5 = DAT_00946938;
  if (lVar3 != DAT_00946938) {
    LOCK();
    bVar9 = DAT_00946930 == 0;
    if (bVar9) {
      DAT_00946930 = 1;
    }
    UNLOCK();
    lVar5 = lVar3;
    if (!bVar9) {
      FUN_00709590(&DAT_00946930);
    }
  }
  DAT_00946938 = lVar5;
  puVar7 = (uint *)PTR_DAT_0093dac0;
  iVar8 = DAT_00946934 + 1;
  if (PTR_DAT_0093dac0 != (undefined *)0x0) {
    do {
      DAT_00946934 = iVar8;
      if (((*puVar7 & 2) == 0) && (iVar8 = 0, puVar7[0x30] != 0)) {
        while (piVar4 = *(int **)(puVar7 + 0x22), piVar4 != (int *)0x0) {
          lVar3 = *(long *)(in_FS_OFFSET + 0x10);
          if (lVar3 == *(long *)(piVar4 + 2)) {
            piVar4[1] = piVar4[1] + 1;
            break;
          }
          LOCK();
          iVar2 = *piVar4;
          if (iVar2 == 0) {
            *piVar4 = 1;
          }
          UNLOCK();
          if (iVar2 == 0) {
            lVar5 = *(long *)(puVar7 + 0x22);
            *(long *)(lVar5 + 8) = lVar3;
            *(undefined4 *)(lVar5 + 4) = 1;
            break;
          }
          FUN_00769430();
          if (iVar8 == 1) {
            iVar8 = 2;
            break;
          }
          iVar8 = 1;
        }
        puVar1 = DAT_00946910;
        if ((DAT_00946918 == '\0') && ((*puVar7 & 1) == 0)) {
          DAT_00946910 = puVar7;
          *puVar7 = *puVar7 | 1;
          *(uint **)(puVar7 + 0x2a) = puVar1;
          *(undefined8 *)(puVar7 + 0x2c) = *(undefined8 *)(puVar7 + 0xe);
        }
        lVar3 = *(long *)(puVar7 + 0x36);
        if (0x827 < lVar3 - 0x93f160U) {
          FUN_00703130();
        }
        (**(code **)(lVar3 + 0x58))(puVar7,0,0);
        if (0 < (int)puVar7[0x30]) {
          FUN_006ff050(puVar7,0,0,0);
        }
        if (((iVar8 != 2) && (piVar4 = *(int **)(puVar7 + 0x22), piVar4 != (int *)0x0)) &&
           (iVar8 = piVar4[1], piVar4[1] = iVar8 + -1, iVar8 + -1 == 0)) {
          piVar4[2] = 0;
          piVar4[3] = 0;
          LOCK();
          iVar8 = *piVar4;
          *piVar4 = 0;
          UNLOCK();
          if (1 < iVar8) {
            FUN_00709660();
          }
        }
      }
      puVar7[0x30] = 0xffffffff;
      puVar1 = puVar7 + 0x1a;
      puVar7 = *(uint **)puVar1;
      iVar8 = DAT_00946934;
    } while (*(uint **)puVar1 != (uint *)0x0);
    DAT_00946934 = DAT_00946934 + -1;
  }
  if (DAT_00946934 == 0) {
    DAT_00946938 = 0;
    LOCK();
    UNLOCK();
    bVar9 = 1 < DAT_00946930;
    DAT_00946930 = DAT_00946934;
    if (bVar9) {
      FUN_00709660(&DAT_00946930);
    }
  }
  FUN_00709560(&local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

