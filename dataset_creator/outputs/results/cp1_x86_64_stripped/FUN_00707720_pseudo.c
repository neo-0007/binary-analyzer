
undefined4 FUN_00707720(int param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  code *local_68;
  undefined8 local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = FUN_00705ef0;
  FUN_00709520(&local_68);
  lVar2 = *(long *)(in_FS_OFFSET + 0x10);
  lVar3 = DAT_00946938;
  if (DAT_00946938 != lVar2) {
    LOCK();
    bVar8 = DAT_00946930 == 0;
    if (bVar8) {
      DAT_00946930 = 1;
    }
    UNLOCK();
    lVar3 = lVar2;
    if (!bVar8) {
      FUN_00709590(&DAT_00946930);
    }
  }
  DAT_00946938 = lVar3;
  uVar7 = 0;
  puVar5 = (uint *)PTR_DAT_0093dac0;
  iVar4 = DAT_00946934 + 1;
  if (PTR_DAT_0093dac0 != (undefined *)0x0) {
    do {
      DAT_00946934 = iVar4;
      DAT_00946920 = puVar5;
      if ((param_1 != 0) && ((*puVar5 & 0x8000) == 0)) {
        lVar2 = *(long *)(in_FS_OFFSET + 0x10);
        piVar6 = *(int **)(puVar5 + 0x22);
        if (*(long *)(piVar6 + 2) != lVar2) {
          LOCK();
          iVar4 = *piVar6;
          if (iVar4 == 0) {
            *piVar6 = 1;
          }
          UNLOCK();
          if (iVar4 != 0) {
            FUN_00709590();
          }
          piVar6 = *(int **)(puVar5 + 0x22);
          *(long *)(piVar6 + 2) = lVar2;
        }
        piVar6[1] = piVar6[1] + 1;
      }
      if ((int)puVar5[0x30] < 1) {
        if (*(ulong *)(puVar5 + 8) < *(ulong *)(puVar5 + 10)) {
LAB_007077e1:
          lVar2 = *(long *)(puVar5 + 0x36);
          if (0x827 < lVar2 - 0x93f160U) {
            FUN_00703130();
          }
          iVar4 = (**(code **)(lVar2 + 0x18))(puVar5,0xffffffff);
          if (iVar4 == -1) {
            uVar7 = 0xffffffff;
          }
        }
      }
      else if (*(ulong *)(*(long *)(puVar5 + 0x28) + 0x18) <
               *(ulong *)(*(long *)(puVar5 + 0x28) + 0x20)) goto LAB_007077e1;
      if ((param_1 != 0) && ((*puVar5 & 0x8000) == 0)) {
        piVar6 = *(int **)(puVar5 + 0x22);
        iVar4 = piVar6[1];
        piVar6[1] = iVar4 + -1;
        if (iVar4 + -1 == 0) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          LOCK();
          iVar4 = *piVar6;
          *piVar6 = 0;
          UNLOCK();
          if (1 < iVar4) {
            FUN_00709660();
          }
        }
      }
      DAT_00946920 = (uint *)0x0;
      puVar1 = puVar5 + 0x1a;
      puVar5 = *(uint **)puVar1;
      iVar4 = DAT_00946934;
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
  FUN_00709560(&local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar7;
}

