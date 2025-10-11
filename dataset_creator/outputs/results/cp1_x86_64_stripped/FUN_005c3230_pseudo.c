
/* WARNING: Type propagation algorithm not settling */

ulong FUN_005c3230(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  ulong local_90;
  uint uStack_84;
  ulong local_80 [5];
  ulong local_58;
  ulong local_50;
  long local_40;
  
  uVar2 = param_2[1];
  uVar5 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = FUN_004b7d60(param_2);
  if (iVar3 == 0) {
    uVar11 = 0;
    iVar3 = FUN_004b77f0(param_2,&PTR_DAT_00914ce0);
    if (iVar3 < 0) {
      iVar3 = FUN_004b77f0(&PTR_DAT_00914d80,param_2);
      if (iVar3 == 0) {
        uVar11 = 1;
        FUN_004b7b50(param_1);
      }
      else if (iVar3 < 1) {
        uVar10 = uVar5;
        if (param_2 != param_1) {
          lVar6 = FUN_004b8240(param_1,4);
          if (lVar6 == 0) goto LAB_005c3571;
          uVar10 = *param_1;
          lVar6 = 0;
          do {
            *(undefined8 *)(uVar10 + lVar6) = *(undefined8 *)(uVar5 + lVar6);
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0x20);
        }
        iVar3 = (int)uVar2 + -3;
        if (iVar3 < 1) {
          iVar3 = 0;
LAB_005c3352:
          uVar4 = (4 - iVar3) * 8;
          if (3 < iVar3) {
            uVar4 = 8;
          }
          lVar6 = (long)iVar3 * 8;
          *(undefined8 *)((long)&stack0xffffffffffffff78 + (long)iVar3 * 8) = 0;
          *(undefined8 *)((long)&local_90 + (ulong)uVar4 + lVar6) = 0;
          if (7 < uVar4 - 8) {
            uVar5 = 0;
            do {
              uVar8 = (int)uVar5 + 8;
              *(undefined8 *)((long)local_80 + uVar5 + lVar6) = 0;
              uVar5 = (ulong)uVar8;
            } while (uVar8 < uVar4 - 8);
          }
        }
        else {
          uVar11 = 0;
          do {
            *(undefined8 *)((long)&stack0xffffffffffffff78 + uVar11 * 8) =
                 *(undefined8 *)(uVar5 + 0x18 + uVar11 * 8);
            bVar12 = uVar11 != (int)uVar2 - 4;
            uVar11 = uVar11 + 1;
          } while (bVar12);
          if (iVar3 < 4) goto LAB_005c3352;
        }
        puVar1 = local_80 + 3;
        local_80[3] = 0;
        *(ulong *)(uVar10 + 0x18) = *(ulong *)(uVar10 + 0x18) & 0xffffffff;
        local_90 = local_80[2];
        local_58 = local_80[0] & 0xffffffff | (local_80[0] >> 0x20) << 0x20;
        local_80[4] = (ulong)uStack_84 << 0x20;
        uVar5 = local_80[1] >> 0x20 | local_80[2] << 0x20;
        local_50 = local_80[1] & 0xffffffff;
        FUN_005c1040(uVar10,uVar10,puVar1,4);
        local_80[4] = (local_80[1] >> 0x20) << 0x20;
        local_80[3] = 0;
        local_50 = 0;
        local_58 = local_80[2] & 0xffffffff | local_90 & 0xffffffff00000000;
        FUN_005c1040(uVar10,uVar10,puVar1,4);
        local_80[3] = (ulong)uStack_84 | local_80[0] << 0x20;
        local_80[4] = local_80[0] >> 0x20 | local_80[1] << 0x20;
        local_58 = uVar5;
        local_50 = local_80[2] >> 0x20;
        FUN_005c1070(uVar10,uVar10,puVar1,4);
        local_58 = 0;
        local_50 = 0;
        local_80[3] = uVar5;
        local_80[4] = local_80[2] >> 0x20;
        FUN_005c1070(uVar10,uVar10,puVar1,4);
        uVar4 = *(uint *)(uVar10 + 0x1c);
        if ((int)uVar4 < 1) {
          pcVar9 = FUN_005c1070;
          uVar5 = 0xffffffffffffffff;
          if (uVar4 != 0) {
            iVar3 = FUN_005c1040(uVar10,uVar10,&DAT_00814960 + (long)(int)~uVar4 * 0x20,4);
            uVar5 = -(long)iVar3;
            pcVar9 = (code *)(uVar5 & 0x5c1070 | (long)iVar3 - 1U & 0x5c1040);
          }
        }
        else {
          FUN_005c1070(uVar10,uVar10,&DAT_00814960 + (long)(int)(uVar4 - 1) * 0x20,4);
          pcVar9 = FUN_005c1070;
          uVar5 = -(ulong)(~*(uint *)(uVar10 + 0x1c) & 1);
        }
        lVar6 = (*pcVar9)(&stack0xffffffffffffff78,uVar10,&DAT_00814960,4);
        lVar7 = 0;
        do {
          *(undefined8 *)(uVar10 + lVar7) =
               *(undefined8 *)
                (((ulong)&stack0xffffffffffffff78 ^
                 -lVar6 & uVar5 & (uVar10 ^ (ulong)&stack0xffffffffffffff78)) + lVar7);
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0x20);
        *(undefined4 *)(param_1 + 1) = 4;
        uVar11 = 1;
        FUN_004b8490(param_1);
      }
      else {
        uVar11 = 1;
        if (param_2 != param_1) {
          lVar6 = FUN_004b8260(param_1,param_2);
          uVar11 = (ulong)(lVar6 != 0);
        }
      }
LAB_005c3571:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar11;
      }
      goto LAB_005c367c;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar5 = FUN_004b8a20(param_1,param_2,&PTR_DAT_00914d80,param_4);
    return uVar5;
  }
LAB_005c367c:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

