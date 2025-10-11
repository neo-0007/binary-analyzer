
ulong FUN_005c27e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  code *pcVar20;
  long in_FS_OFFSET;
  uint local_a8;
  uint uStack_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined1 local_78 [56];
  long local_40;
  
  puVar8 = &local_a8;
  iVar5 = *(int *)(param_2 + 1);
  puVar2 = (uint *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = FUN_004b7d60(param_2);
  if (iVar3 == 0) {
    uVar6 = 0;
    iVar3 = FUN_004b77f0(param_2,&PTR_DAT_00914ca0);
    if (iVar3 < 0) {
      iVar3 = FUN_004b77f0(&PTR_DAT_00914d40);
      if (iVar3 == 0) {
        uVar6 = 1;
        FUN_004b7b50(param_1);
      }
      else if (iVar3 < 1) {
        puVar14 = puVar2;
        if (param_2 != param_1) {
          lVar7 = FUN_004b8240(param_1);
          if (lVar7 == 0) goto LAB_005c2b61;
          puVar14 = (uint *)*param_1;
          lVar7 = 0;
          do {
            *(undefined8 *)((long)puVar14 + lVar7) = *(undefined8 *)((long)puVar2 + lVar7);
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0x30);
        }
        iVar3 = iVar5 + -6;
        if (iVar3 < 1) {
          iVar3 = 0;
LAB_005c28fc:
          uVar4 = (6 - iVar3) * 8;
          if (5 < iVar3) {
            uVar4 = 8;
          }
          puVar1 = (undefined8 *)((long)puVar8 + (long)iVar3 * 8);
          *puVar1 = 0;
          *(undefined8 *)((long)puVar1 + ((ulong)uVar4 - 8)) = 0;
          if (7 < uVar4 - 8) {
            uVar6 = 0;
            do {
              uVar11 = (int)uVar6 + 8;
              *(undefined8 *)((long)puVar1 + uVar6 + 8) = 0;
              uVar6 = (ulong)uVar11;
            } while (uVar11 < uVar4 - 8);
          }
        }
        else {
          puVar8 = (uint *)thunk_FUN_00713a50(&local_a8,puVar2 + 0xc,(ulong)(iVar5 - 7) * 8 + 8);
          if (iVar3 < 6) goto LAB_005c28fc;
        }
        uVar6 = (ulong)local_a8;
        uVar19 = (ulong)local_84;
        uVar17 = (ulong)local_88;
        uVar16 = (ulong)local_7c;
        uVar18 = (ulong)local_80;
        uVar12 = (ulong)local_a0;
        lVar7 = (*puVar14 + uVar6 + uVar19 + uVar17) - uVar16;
        *puVar14 = (uint)lVar7;
        uVar10 = (ulong)uStack_a4;
        lVar7 = (((ulong)puVar14[1] + (lVar7 >> 0x20) + uVar10 + uVar18 + uVar16) - uVar6) - uVar17;
        puVar14[1] = (uint)lVar7;
        lVar7 = (((lVar7 >> 0x20) + (ulong)puVar14[2] + uVar12 + uVar16) - uVar10) - uVar19;
        puVar14[2] = (uint)lVar7;
        uVar15 = (ulong)local_9c;
        lVar7 = ((((ulong)puVar14[3] + (lVar7 >> 0x20) + uVar15 + uVar6 + uVar17 + uVar19) - uVar12)
                - uVar18) - uVar16;
        puVar14[3] = (uint)lVar7;
        uVar13 = (ulong)local_98;
        lVar7 = (((lVar7 >> 0x20) + (ulong)puVar14[4] + uVar19 * 2 + uVar13 + uVar10 + uVar6 +
                  uVar17 + uVar18) - uVar15) + uVar16 * -2;
        puVar14[4] = (uint)lVar7;
        uVar6 = (ulong)local_94;
        lVar7 = (uVar10 + (lVar7 >> 0x20) + (ulong)puVar14[5] + uVar18 * 2 + uVar6 + uVar12 + uVar19
                + uVar16) - uVar13;
        puVar14[5] = (uint)lVar7;
        uVar10 = (ulong)local_90;
        lVar7 = (uVar12 + (ulong)puVar14[6] + (lVar7 >> 0x20) + uVar16 * 2 + uVar10 + uVar15 +
                uVar18) - uVar6;
        puVar14[6] = (uint)lVar7;
        uVar12 = (ulong)local_8c;
        lVar7 = (uVar15 + (lVar7 >> 0x20) + (ulong)puVar14[7] + uVar12 + uVar13 + uVar16) - uVar10;
        puVar14[7] = (uint)lVar7;
        lVar7 = (uVar13 + (lVar7 >> 0x20) + (ulong)puVar14[8] + uVar17 + uVar6) - uVar12;
        puVar14[8] = (uint)lVar7;
        lVar7 = (uVar6 + (ulong)puVar14[9] + (lVar7 >> 0x20) + uVar19 + uVar10) - uVar17;
        puVar14[9] = (uint)lVar7;
        lVar7 = (uVar10 + (lVar7 >> 0x20) + (ulong)puVar14[10] + uVar18 + uVar12) - uVar19;
        puVar14[10] = (uint)lVar7;
        lVar7 = (uVar12 + uVar17 + uVar16 + (ulong)puVar14[0xb] + (lVar7 >> 0x20)) - uVar18;
        puVar14[0xb] = (uint)lVar7;
        uVar4 = (uint)((ulong)lVar7 >> 0x20);
        if (lVar7 >> 0x20 < 1) {
          pcVar20 = FUN_005c1070;
          uVar6 = 0xffffffffffffffff;
          if (lVar7 >> 0x20 != 0) {
            iVar5 = FUN_005c1040(puVar14,puVar14,&DAT_00814740 + (long)(int)~uVar4 * 0x30,6);
            uVar6 = -(long)iVar5;
            pcVar20 = (code *)(uVar6 & 0x5c1070 | (long)iVar5 - 1U & 0x5c1040);
          }
        }
        else {
          iVar5 = FUN_005c1070(puVar14,puVar14,&DAT_00814740 + (long)(int)(uVar4 - 1) * 0x30,6);
          pcVar20 = FUN_005c1070;
          uVar6 = -(long)iVar5;
        }
        lVar7 = (*pcVar20)(local_78,puVar14,&DAT_00814740,6);
        lVar9 = 0;
        do {
          *(undefined8 *)((long)puVar14 + lVar9) =
               *(undefined8 *)
                (((ulong)local_78 ^ -lVar7 & uVar6 & ((ulong)puVar14 ^ (ulong)local_78)) + lVar9);
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0x30);
        *(undefined4 *)(param_1 + 1) = 6;
        uVar6 = 1;
        FUN_004b8490(param_1);
      }
      else {
        uVar6 = 1;
        if (param_2 != param_1) {
          lVar7 = FUN_004b8260(param_1,param_2);
          uVar6 = (ulong)(lVar7 != 0);
        }
      }
LAB_005c2b61:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar6;
      }
      goto LAB_005c2c6b;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar6 = FUN_004b8a20(param_1,param_2,&PTR_DAT_00914d40,param_4);
    return uVar6;
  }
LAB_005c2c6b:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

