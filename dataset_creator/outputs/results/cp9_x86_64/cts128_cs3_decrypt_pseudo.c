
ulong cts128_cs3_decrypt(long param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long in_FS_OFFSET;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  byte local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar14 = 0;
  if (param_4 < 0x10) goto LAB_00449769;
  if (param_4 == 0x10) {
    iVar7 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2,0x10);
    uVar14 = (ulong)(iVar7 != 0) << 4;
    goto LAB_00449769;
  }
  uVar14 = (ulong)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) == 0) {
    uVar14 = 0x10;
  }
  lVar15 = (param_4 - 0x10) - uVar14;
  lVar12 = param_3;
  puVar13 = param_2;
  if (lVar15 == 0) {
LAB_00449724:
    uVar3 = *puVar13;
    uVar4 = puVar13[1];
    uVar5 = *(undefined8 *)(param_1 + 0x94);
    uVar6 = *(undefined8 *)(param_1 + 0x9c);
    *(undefined1 (*) [16])(param_1 + 0x94) = (undefined1  [16])0x0;
    iVar7 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,local_58,puVar13,0x10);
    if (iVar7 != 0) {
      lVar15 = __memcpy_chk(local_68,puVar13 + 2,uVar14,0x10);
      if (uVar14 != 0x10) {
        pbVar1 = (byte *)(lVar15 + uVar14);
        pbVar2 = local_58 + uVar14;
        uVar9 = 0x10 - uVar14;
        uVar8 = (uint)uVar9;
        if (uVar8 < 8) {
          if ((uVar9 & 4) == 0) {
            if ((uVar8 != 0) && (*pbVar1 = *pbVar2, (uVar9 & 2) != 0)) {
              *(undefined2 *)(pbVar1 + ((uVar9 & 0xffffffff) - 2)) =
                   *(undefined2 *)(local_58 + (uVar9 & 0xffffffff) + uVar14 + -2);
            }
          }
          else {
            *(undefined4 *)pbVar1 = *(undefined4 *)pbVar2;
            *(undefined4 *)(pbVar1 + ((uVar9 & 0xffffffff) - 4)) =
                 *(undefined4 *)(local_58 + (uVar9 & 0xffffffff) + uVar14 + -4);
          }
        }
        else {
          *(undefined8 *)pbVar1 = *(undefined8 *)pbVar2;
          *(undefined8 *)(pbVar1 + ((uVar9 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)&uStack_60 + (uVar9 & 0xffffffff) + uVar14);
          lVar11 = (long)pbVar1 - ((ulong)(pbVar1 + 8) & 0xfffffffffffffff8);
          uVar8 = uVar8 + (int)lVar11 & 0xfffffff8;
          if (7 < uVar8) {
            uVar10 = 0;
            do {
              uVar9 = (ulong)uVar10;
              uVar10 = uVar10 + 8;
              *(undefined8 *)(((ulong)(pbVar1 + 8) & 0xfffffffffffffff8) + uVar9) =
                   *(undefined8 *)(pbVar2 + (uVar9 - lVar11));
            } while (uVar10 < uVar8);
          }
        }
      }
      uVar9 = 0;
      do {
        *(byte *)(lVar12 + 0x10 + uVar9) = *(byte *)(lVar15 + uVar9) ^ local_58[uVar9];
        uVar9 = uVar9 + 1;
      } while (uVar14 != uVar9);
      *(undefined8 *)(param_1 + 0x94) = uVar5;
      *(undefined8 *)(param_1 + 0x9c) = uVar6;
      iVar7 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,lVar12,lVar15,0x10);
      if (iVar7 != 0) {
        *(undefined8 *)(param_1 + 0x94) = uVar3;
        *(undefined8 *)(param_1 + 0x9c) = uVar4;
        uVar14 = param_4;
        goto LAB_00449769;
      }
    }
  }
  else {
    puVar13 = (undefined8 *)((long)param_2 + lVar15);
    lVar12 = param_3 + lVar15;
    iVar7 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_3,param_2,lVar15);
    if (iVar7 != 0) goto LAB_00449724;
  }
  uVar14 = 0;
LAB_00449769:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar14;
}

