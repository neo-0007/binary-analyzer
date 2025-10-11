
ulong FUN_005c2c70(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  byte bVar13;
  undefined *puStack_90;
  ulong local_88 [9];
  long local_40;
  
  bVar13 = 0;
  uVar2 = param_2[1];
  uVar5 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_90 = (undefined *)0x5c2caa;
  iVar3 = FUN_004b7d60(param_2);
  if (iVar3 == 0) {
    uVar11 = 0;
    puStack_90 = (undefined *)0x5c2cc0;
    iVar3 = FUN_004b77f0(param_2,&PTR_DAT_00914c80);
    if (iVar3 < 0) {
      puStack_90 = (undefined *)0x5c2d0f;
      iVar3 = FUN_004b77f0(&PTR_DAT_00914d20,param_2);
      if (iVar3 == 0) {
        uVar11 = 1;
        puStack_90 = (undefined *)0x5c2ee6;
        FUN_004b7b50(param_1);
      }
      else if (iVar3 < 1) {
        uVar10 = uVar5;
        if (param_2 != param_1) {
          puStack_90 = (undefined *)0x5c2d33;
          lVar6 = FUN_004b8240(param_1,9);
          if (lVar6 == 0) goto LAB_005c2e87;
          uVar10 = *param_1;
          lVar6 = 0;
          do {
            *(undefined8 *)(uVar10 + lVar6) = *(undefined8 *)(uVar5 + lVar6);
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0x48);
        }
        iVar3 = (int)uVar2 + -8;
        if (iVar3 < 1) {
          iVar3 = 0;
LAB_005c2d8a:
          uVar4 = (9 - iVar3) * 8;
          lVar6 = (long)iVar3;
          if (8 < iVar3) {
            uVar4 = 8;
          }
          local_88[lVar6] = 0;
          *(undefined8 *)((long)&puStack_90 + (ulong)uVar4 + lVar6 * 8) = 0;
          puVar7 = local_88 + lVar6 + 1;
          for (uVar5 = (ulong)(uVar4 - 8 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar7 = 0;
            puVar7 = puVar7 + (ulong)bVar13 * -2 + 1;
          }
        }
        else {
          uVar11 = 0;
          do {
            local_88[uVar11] = *(ulong *)(uVar5 + 0x40 + uVar11 * 8);
            bVar12 = (int)uVar2 - 9 != uVar11;
            uVar11 = uVar11 + 1;
          } while (bVar12);
          if (iVar3 < 9) goto LAB_005c2d8a;
        }
        puVar7 = local_88;
        do {
          local_88[8] = puVar7[1];
          puVar8 = puVar7 + 1;
          *puVar7 = local_88[8] << 0x37 | local_88[0] >> 9;
          puVar7 = puVar8;
          local_88[0] = local_88[8];
        } while (local_88 + 8 != puVar8);
        local_88[8] = local_88[8] >> 9;
        *(ulong *)(uVar10 + 0x40) = *(ulong *)(uVar10 + 0x40) & 0x1ff;
        puStack_90 = (undefined *)0x5c2e26;
        FUN_005c1040(uVar10,uVar10,local_88,9);
        puStack_90 = (undefined *)0x5c2e3d;
        lVar6 = FUN_005c1070(local_88,uVar10,&DAT_00814680,9);
        puVar9 = (undefined8 *)(lVar6 - 1U & (ulong)local_88 | -lVar6 & uVar10);
        puVar1 = puVar9 + 9;
        lVar6 = uVar10 - (long)puVar9;
        do {
          *(undefined8 *)(lVar6 + (long)puVar9) = *puVar9;
          puVar9 = puVar9 + 1;
        } while (puVar1 != puVar9);
        *(undefined4 *)(param_1 + 1) = 9;
        uVar11 = 1;
        puStack_90 = (undefined *)0x5c2e87;
        FUN_004b8490(param_1);
      }
      else {
        uVar11 = 1;
        if (param_2 != param_1) {
          puStack_90 = (undefined *)0x5c2ec9;
          lVar6 = FUN_004b8260(param_1,param_2);
          uVar11 = (ulong)(lVar6 != 0);
        }
      }
LAB_005c2e87:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar11;
      }
      goto LAB_005c2f0a;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar5 = FUN_004b8a20(param_1,param_2,&PTR_DAT_00914d20,param_4);
    return uVar5;
  }
LAB_005c2f0a:
                    /* WARNING: Subroutine does not return */
  puStack_90 = &UNK_005c2f0f;
  FUN_00771f60();
}

