
undefined8
FUN_0044bd00(long param_1,long param_2,ulong *param_3,ulong param_4,long param_5,ulong param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((0xf < param_6) && (param_6 <= param_4)) {
    uVar8 = param_6;
    if (param_2 == 0) {
LAB_0044bde7:
      *param_3 = uVar8;
      uVar9 = 1;
      goto LAB_0044bd6a;
    }
    if ((*(byte *)(param_1 + 0x3c) & 8) == 0) {
      iVar6 = *(int *)(param_1 + 0x38);
      if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
        if (iVar6 != 0) {
          if (iVar6 == 1) {
            if ((param_6 & 0xf) == 0) goto LAB_0044bfd2;
          }
          else if (iVar6 != 2) goto LAB_0044bd68;
          uVar8 = FUN_0044b860(param_1,param_5,param_2,param_6);
          goto LAB_0044bdde;
        }
        uVar8 = param_6 & 0xfffffffffffffff0;
        iVar6 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,uVar8);
        if (iVar6 == 0) goto LAB_0044bd68;
        if ((param_6 & 0xf) != 0) {
          local_58 = (undefined1  [16])0x0;
          uVar9 = FUN_00771fb0(local_58,param_5 + uVar8,(uint)param_6 & 0xf,0x10);
          iVar6 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))
                            (param_1,param_2 + -0x10 + param_6,uVar9,0x10);
          uVar8 = param_6;
          if (iVar6 == 0) goto LAB_0044bd68;
        }
LAB_0044bde3:
        *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 8;
        goto LAB_0044bde7;
      }
      if (iVar6 == 0) {
        uVar14 = (ulong)((uint)param_6 & 0xf);
        if ((param_6 & 0xf) == 0) {
LAB_0044bfd2:
          iVar6 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,param_6);
          if (iVar6 != 0) goto LAB_0044bde3;
        }
        else {
          lVar10 = (param_6 - 0x10) - uVar14;
          if (lVar10 != 0) {
            iVar6 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,lVar10);
            if (iVar6 == 0) goto LAB_0044bd68;
            param_2 = param_2 + lVar10;
            param_5 = param_5 + lVar10;
          }
          puVar1 = (undefined8 *)(param_5 + uVar14);
          uVar9 = *(undefined8 *)(param_1 + 0x94);
          uVar3 = *(undefined8 *)(param_1 + 0x9c);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          *(undefined1 (*) [16])(param_1 + 0x94) = (undefined1  [16])0x0;
          iVar6 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,local_58,puVar1,0x10);
          if (iVar6 != 0) {
            lVar10 = FUN_00771fb0(local_68,param_5,uVar14,0x10);
            puVar1 = (undefined8 *)(local_58 + uVar14);
            puVar2 = (undefined8 *)(lVar10 + uVar14);
            uVar11 = 0x10 - uVar14;
            uVar7 = (uint)uVar11;
            if (uVar7 < 8) {
              if ((uVar11 & 4) == 0) {
                if ((uVar7 != 0) &&
                   (*(undefined1 *)puVar2 = *(undefined1 *)puVar1, (uVar11 & 2) != 0)) {
                  *(undefined2 *)((long)puVar2 + ((uVar11 & 0xffffffff) - 2)) =
                       *(undefined2 *)(local_58 + (uVar11 & 0xffffffff) + uVar14 + -2);
                }
              }
              else {
                *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
                *(undefined4 *)((long)puVar2 + ((uVar11 & 0xffffffff) - 4)) =
                     *(undefined4 *)(local_58 + (uVar11 & 0xffffffff) + uVar14 + -4);
              }
            }
            else {
              *puVar2 = *puVar1;
              *(undefined8 *)((long)puVar2 + ((uVar11 & 0xffffffff) - 8)) =
                   *(undefined8 *)((long)&uStack_60 + (uVar11 & 0xffffffff) + uVar14);
              lVar13 = (long)puVar2 - ((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
              uVar7 = uVar7 + (int)lVar13 & 0xfffffff8;
              if (7 < uVar7) {
                uVar11 = 0;
                do {
                  uVar12 = (int)uVar11 + 8;
                  *(undefined8 *)(((ulong)(puVar2 + 1) & 0xfffffffffffffff8) + uVar11) =
                       *(undefined8 *)((long)puVar1 + (uVar11 - lVar13));
                  uVar11 = (ulong)uVar12;
                } while (uVar12 < uVar7);
              }
            }
            uVar11 = 0;
            do {
              *(byte *)(param_2 + 0x10 + uVar11) = *(byte *)(lVar10 + uVar11) ^ local_58[uVar11];
              uVar11 = uVar11 + 1;
            } while (uVar14 != uVar11);
            *(undefined8 *)(param_1 + 0x94) = uVar9;
            *(undefined8 *)(param_1 + 0x9c) = uVar3;
            iVar6 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,lVar10,0x10);
            if (iVar6 != 0) {
              *(undefined8 *)(param_1 + 0x94) = uVar4;
              *(undefined8 *)(param_1 + 0x9c) = uVar5;
              goto LAB_0044bde3;
            }
          }
        }
      }
      else {
        if (iVar6 == 1) {
          if ((param_6 & 0xf) == 0) goto LAB_0044bfd2;
        }
        else if (iVar6 != 2) goto LAB_0044bd68;
        uVar8 = FUN_0044ba10(param_1,param_5,param_2,param_6);
LAB_0044bdde:
        if (uVar8 != 0) goto LAB_0044bde3;
      }
    }
  }
LAB_0044bd68:
  uVar9 = 0;
LAB_0044bd6a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar9;
}

