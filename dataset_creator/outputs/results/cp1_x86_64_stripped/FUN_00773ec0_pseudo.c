
undefined4 * FUN_00773ec0(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  uint *puVar15;
  long *plVar16;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar4 = (undefined4 *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_68 = 0;
  iVar2 = FUN_007745b0(&local_68);
  if (iVar2 < 0) goto LAB_007740c3;
  iVar2 = FUN_00774240(&local_68,0x12);
  if (-1 < iVar2) {
    plVar16 = (long *)local_58._0_8_;
    if ((long *)local_58._0_8_ == (long *)0x0) {
      puVar6 = (undefined4 *)FUN_007101b0(0x10);
      puVar4 = puVar6;
      if (puVar6 == (undefined4 *)0x0) goto LAB_00774122;
    }
    else {
      iVar2 = 0;
      plVar14 = (long *)local_58._0_8_;
      do {
        puVar11 = (uint *)plVar14[1];
        uVar7 = plVar14[2];
        if (puVar11 != (uint *)0x0) {
          do {
            if (((uVar7 < 0x10) || (uVar3 = *puVar11, uVar3 < 0x10)) || (uVar7 < uVar3)) break;
            if ((puVar11[3] == local_68._4_4_) && (puVar11[2] == *(uint *)(plVar14 + 3))) {
              if ((short)puVar11[1] == 3) break;
              iVar2 = iVar2 + (uint)((short)puVar11[1] == 0x10);
            }
            uVar12 = (ulong)(uVar3 + 3 & 0xfffffffc);
            uVar7 = uVar7 - uVar12;
            puVar11 = (uint *)((long)puVar11 + uVar12);
          } while( true );
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      puVar4 = (undefined4 *)FUN_007101b0((ulong)(iVar2 + 1) << 4);
      if (puVar4 == (undefined4 *)0x0) {
LAB_00774122:
        puVar4 = (undefined4 *)0x0;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x69;
        goto LAB_007740b3;
      }
      uVar7 = 0;
      do {
        puVar11 = (uint *)plVar16[1];
        uVar12 = plVar16[2];
        if (puVar11 != (uint *)0x0) {
          do {
            if (((uVar12 < 0x10) || (uVar3 = *puVar11, uVar3 < 0x10)) || (uVar12 < uVar3)) break;
            if ((puVar11[3] == local_68._4_4_) && (puVar11[2] == *(uint *)(plVar16 + 3))) {
              if ((short)puVar11[1] == 3) break;
              if ((short)puVar11[1] == 0x10) {
                puVar15 = puVar11 + 8;
                puVar8 = puVar4 + uVar7 * 4;
                *puVar8 = puVar11[5];
                for (uVar13 = (ulong)uVar3 - 0x20; 3 < uVar13; uVar13 = uVar13 - uVar10) {
                  uVar1 = (ushort)*puVar15;
                  uVar9 = (uint)uVar1;
                  if ((uVar1 < 4) || (uVar13 < uVar9)) break;
                  if (*(ushort *)((long)puVar15 + 2) == 3) {
                    lVar5 = FUN_007128e0(puVar15 + 1,(ulong)uVar9 - 4);
                    *(long *)(puVar8 + 2) = lVar5;
                    if (lVar5 != 0) {
                      uVar3 = *puVar11;
                      uVar7 = (ulong)((int)uVar7 + 1);
                      goto LAB_00773fe8;
                    }
                    *puVar8 = 0;
                    FUN_00773e80(puVar4);
                    goto LAB_00774122;
                  }
                  uVar10 = (ulong)(uVar9 + 3 & 0x1fffc);
                  puVar15 = (uint *)((long)puVar15 + uVar10);
                }
                uVar7 = (ulong)((int)uVar7 + 1);
              }
            }
LAB_00773fe8:
            uVar13 = (ulong)(uVar3 + 3 & 0xfffffffc);
            uVar12 = uVar12 - uVar13;
            puVar11 = (uint *)((long)puVar11 + uVar13);
          } while( true );
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
      puVar6 = puVar4 + uVar7 * 4;
    }
    *puVar6 = 0;
    *(undefined8 *)(puVar6 + 2) = 0;
  }
LAB_007740b3:
  FUN_00774200(&local_68);
  FUN_007745a0(&local_68);
LAB_007740c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

