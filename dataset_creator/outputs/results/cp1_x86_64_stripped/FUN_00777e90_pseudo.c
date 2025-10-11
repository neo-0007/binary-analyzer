
void FUN_00777e90(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  undefined8 *puVar14;
  long lVar15;
  long in_FS_OFFSET;
  bool bVar16;
  int local_4c;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((DAT_0094ac40 & 8) == 0) || (*(int *)(param_1 + 0x10) != 2)) goto LAB_00777ec4;
  iVar10 = DAT_0093ea48;
  if (DAT_0093ea48 < 1) {
    uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    iVar8 = FUN_00771200(2,0x80002,0);
    if (iVar8 < 0) goto LAB_00777ec4;
    LOCK();
    bVar16 = DAT_0094ac48 == 0;
    if (bVar16) {
      DAT_0094ac48 = 1;
    }
    UNLOCK();
    if (!bVar16) {
      FUN_00709590(&DAT_0094ac48);
    }
    if (DAT_0093ea48 < 1) {
      FUN_007ad600(&local_48,&local_4c,iVar8);
      lVar15 = local_48;
      iVar10 = local_4c;
      if (local_48 == 0) {
        iVar11 = 0;
      }
      else {
        lVar7 = FUN_007101b0((long)local_4c * 0xc);
        if (lVar7 == 0) {
          iVar11 = 0;
          DAT_0094b5d0 = 0;
        }
        else {
          DAT_0094b5d0 = lVar7;
          if (iVar10 < 1) {
            lVar9 = 0;
            iVar11 = 0;
          }
          else {
            iVar11 = 0;
            iVar13 = 0;
            do {
              lVar9 = (long)iVar11 * 0xc;
              if (*(short *)(lVar15 + 0x10) == 2) {
                uVar2 = *(undefined4 *)(lVar15 + 0x14);
                *(undefined4 *)(lVar7 + lVar9) = 2;
                ((undefined4 *)(lVar7 + lVar9))[1] = uVar2;
                iVar5 = FUN_0076ebb0(iVar8,0x891b,lVar15);
                lVar7 = DAT_0094b5d0;
                iVar10 = local_4c;
                if (-1 < iVar5) {
                  iVar11 = iVar11 + 1;
                  *(undefined4 *)(DAT_0094b5d0 + 8 + lVar9) = *(undefined4 *)(lVar15 + 0x14);
                  lVar9 = lVar9 + 0xc;
                }
              }
              iVar13 = iVar13 + 1;
              lVar15 = lVar15 + 0x28;
            } while (iVar13 < iVar10);
          }
          DAT_0094b5d0 = FUN_00710840(lVar7,lVar9);
          if (DAT_0094b5d0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("ifaddrs != NULL","res_hconf.c",0x1c1,"_res_hconf_reorder_addrs");
          }
        }
        FUN_007104f0(local_48);
      }
      *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
      DAT_0093ea48 = iVar11;
    }
    iVar11 = DAT_0094ac48;
    iVar10 = DAT_0093ea48;
    LOCK();
    DAT_0094ac48 = 0;
    UNLOCK();
    if (1 < iVar11) {
      FUN_00709660(&DAT_0094ac48);
    }
    FUN_0076dc30(iVar8);
    if (iVar10 == 0) goto LAB_00777ec4;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  puVar4 = (uint *)*puVar3;
  if (puVar4 != (uint *)0x0) {
    puVar12 = puVar4;
    puVar14 = puVar3;
    do {
      iVar8 = 0;
      puVar6 = (uint *)(DAT_0094b5d0 + 4);
      do {
        if (((*puVar6 ^ *puVar12) & puVar6[1]) == 0) {
          *puVar14 = puVar4;
          *puVar3 = puVar12;
          goto LAB_00777ec4;
        }
        iVar8 = iVar8 + 1;
        puVar6 = puVar6 + 3;
      } while (iVar8 < iVar10);
      puVar12 = (uint *)puVar14[1];
      puVar14 = puVar14 + 1;
    } while (puVar12 != (uint *)0x0);
  }
LAB_00777ec4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

