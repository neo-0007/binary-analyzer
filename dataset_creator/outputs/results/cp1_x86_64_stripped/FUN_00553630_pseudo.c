
undefined8
FUN_00553630(undefined8 *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong param_5,
            int param_6)

{
  undefined1 uVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong *puVar12;
  long in_FS_OFFSET;
  ulong local_68;
  undefined8 uStack_60;
  ulong auStack_58 [5];
  
  auStack_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 0x10) {
    uVar4 = 0xffffffff;
  }
  else {
    local_68 = *param_2;
    uStack_60 = param_2[1];
    (*(code *)param_1[3])(&local_68,&local_68,param_1[1]);
    if (((param_6 != 0) || ((param_5 & 0xf) == 0)) || (param_5 = param_5 - 0x10, 0xf < param_5)) {
      do {
        puVar3 = param_4;
        auStack_58[0] = local_68 ^ *param_3;
        auStack_58[1] = uStack_60 ^ param_3[1];
        param_3 = param_3 + 2;
        param_4 = puVar3 + 2;
        (*(code *)param_1[2])(auStack_58,auStack_58,*param_1);
        auStack_58[0] = auStack_58[0] ^ local_68;
        *puVar3 = auStack_58[0];
        uVar6 = auStack_58[0];
        puVar3[1] = auStack_58[1] ^ uStack_60;
        auStack_58[1] = auStack_58[1] ^ uStack_60;
        param_5 = param_5 - 0x10;
        if (param_5 == 0) {
          uVar4 = 0;
          goto LAB_00553732;
        }
        uVar7 = local_68 >> 0x3f | uStack_60 * 2;
        uVar2 = uStack_60._4_4_ >> 0x1f;
        uStack_60 = uVar7;
        local_68 = (ulong)(uVar2 & 0x87) ^ local_68 * 2;
      } while (0xf < param_5);
      if (param_6 != 0) {
        uVar5 = 1;
        if (param_5 != 0) {
          uVar5 = param_5;
        }
        uVar2 = (uint)uVar5;
        if ((param_3 < (ulong *)((long)param_4 + uVar5)) &&
           (param_4 < (ulong *)((long)param_3 + uVar5))) {
          uVar6 = 0;
          do {
            uVar1 = *(undefined1 *)((long)auStack_58 + uVar6);
            *(undefined1 *)((long)auStack_58 + uVar6) = *(undefined1 *)((long)param_3 + uVar6);
            *(undefined1 *)((long)param_4 + uVar6) = uVar1;
            uVar6 = uVar6 + 1;
          } while (uVar6 < param_5);
        }
        else {
          if (uVar2 < 8) {
            if ((uVar5 & 4) == 0) {
              if (uVar2 != 0) {
                *(undefined1 *)param_4 = (undefined1)auStack_58[0];
                if ((uVar5 & 2) != 0) {
                  *(undefined2 *)((long)puVar3 + (uVar5 & 0xffffffff) + 0xe) =
                       *(undefined2 *)((long)auStack_58 + ((uVar5 & 0xffffffff) - 2));
                }
              }
            }
            else {
              *(undefined4 *)param_4 = (undefined4)auStack_58[0];
              *(undefined4 *)((long)puVar3 + (uVar5 & 0xffffffff) + 0xc) =
                   *(undefined4 *)((long)auStack_58 + ((uVar5 & 0xffffffff) - 4));
            }
          }
          else {
            *param_4 = auStack_58[0];
            *(undefined8 *)((long)puVar3 + (uVar5 & 0xffffffff) + 8) =
                 *(undefined8 *)((long)auStack_58 + ((uVar5 & 0xffffffff) - 8));
            lVar9 = (long)param_4 - ((ulong)(puVar3 + 3) & 0xfffffffffffffff8);
            uVar8 = (int)lVar9 + uVar2 & 0xfffffff8;
            if (7 < uVar8) {
              uVar10 = 0;
              do {
                uVar11 = (int)uVar10 + 8;
                *(undefined8 *)(((ulong)(puVar3 + 3) & 0xfffffffffffffff8) + uVar10) =
                     *(undefined8 *)((long)auStack_58 + (uVar10 - lVar9));
                uVar10 = (ulong)uVar11;
              } while (uVar11 < uVar8);
            }
          }
          puVar12 = auStack_58;
          auStack_58[0] = uVar6;
          if (7 < uVar2) {
            uVar6 = 0;
            do {
              uVar8 = (int)uVar6 + 8;
              uVar10 = (ulong)uVar8;
              *(undefined8 *)((long)auStack_58 + uVar6) = *(undefined8 *)((long)param_3 + uVar6);
              uVar6 = uVar10;
            } while (uVar8 < (uVar2 & 0xfffffff8));
            puVar12 = (ulong *)((long)auStack_58 + uVar10);
            param_3 = (ulong *)(uVar10 + (long)param_3);
          }
          lVar9 = 0;
          if ((uVar5 & 4) != 0) {
            *(int *)puVar12 = (int)*param_3;
            lVar9 = 4;
          }
          if ((uVar5 & 2) != 0) {
            *(undefined2 *)((long)puVar12 + lVar9) = *(undefined2 *)((long)param_3 + lVar9);
            lVar9 = lVar9 + 2;
          }
          if ((uVar5 & 1) != 0) {
            *(undefined1 *)((long)puVar12 + lVar9) = *(undefined1 *)((long)param_3 + lVar9);
          }
        }
        auStack_58[0] = auStack_58[0] ^ local_68;
        auStack_58[1] = auStack_58[1] ^ uVar7;
        (*(code *)param_1[2])(auStack_58,auStack_58,*param_1);
        auStack_58[0] = auStack_58[0] ^ local_68;
        auStack_58[1] = auStack_58[1] ^ uStack_60;
        uVar4 = 0;
        *puVar3 = auStack_58[0];
        puVar3[1] = auStack_58[1];
        goto LAB_00553732;
      }
    }
    uVar6 = local_68 >> 0x3f | uStack_60 * 2;
    uVar7 = (ulong)(uStack_60._4_4_ >> 0x1f & 0x87) ^ local_68 * 2;
    auStack_58[0] = uVar7 ^ *param_3;
    auStack_58[1] = param_3[1] ^ uVar6;
    (*(code *)param_1[2])(auStack_58,auStack_58,*param_1);
    auStack_58[0] = uVar7 ^ auStack_58[0];
    auStack_58[1] = auStack_58[1] ^ uVar6;
    uVar6 = auStack_58[0];
    if (param_5 != 0) {
      puVar3 = param_3 + 2;
      puVar12 = param_4 + 2;
      if ((puVar3 < (ulong *)((long)param_4 + param_5 + 0x10)) &&
         (puVar12 < (ulong *)(param_5 + 0x10 + (long)param_3))) {
        uVar6 = 0;
        do {
          uVar1 = *(undefined1 *)((long)auStack_58 + uVar6);
          *(undefined1 *)((long)auStack_58 + uVar6) = *(undefined1 *)((long)param_3 + uVar6 + 0x10);
          *(undefined1 *)((long)param_4 + uVar6 + 0x10) = uVar1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_5);
      }
      else {
        uVar2 = (uint)param_5;
        uVar7 = param_5 & 0xffffffff;
        if (uVar2 < 8) {
          if ((param_5 & 4) == 0) {
            if (uVar2 != 0) {
              *(undefined1 *)puVar12 = (undefined1)auStack_58[0];
              if ((param_5 & 2) != 0) {
                *(undefined2 *)((long)param_4 + uVar7 + 0xe) =
                     *(undefined2 *)((long)auStack_58 + (uVar7 - 2));
              }
            }
          }
          else {
            *(undefined4 *)puVar12 = (undefined4)auStack_58[0];
            *(undefined4 *)((long)param_4 + uVar7 + 0xc) =
                 *(undefined4 *)((long)auStack_58 + (uVar7 - 4));
          }
        }
        else {
          *puVar12 = auStack_58[0];
          *(undefined8 *)((long)param_4 + (param_5 & 0xffffffff) + 8) =
               *(undefined8 *)((long)auStack_58 + ((param_5 & 0xffffffff) - 8));
          lVar9 = (long)puVar12 - ((ulong)(param_4 + 3) & 0xfffffffffffffff8);
          uVar8 = uVar2 + (int)lVar9 & 0xfffffff8;
          if (7 < uVar8) {
            uVar7 = 0;
            do {
              uVar11 = (int)uVar7 + 8;
              *(undefined8 *)(((ulong)(param_4 + 3) & 0xfffffffffffffff8) + uVar7) =
                   *(undefined8 *)((long)auStack_58 + (uVar7 - lVar9));
              uVar7 = (ulong)uVar11;
            } while (uVar11 < uVar8);
          }
        }
        puVar12 = auStack_58;
        auStack_58[0] = uVar6;
        if (7 < uVar2) {
          uVar6 = 0;
          do {
            uVar8 = (int)uVar6 + 8;
            uVar7 = (ulong)uVar8;
            *(undefined8 *)((long)auStack_58 + uVar6) = *(undefined8 *)((long)puVar3 + uVar6);
            uVar6 = uVar7;
          } while (uVar8 < (uVar2 & 0xfffffff8));
          puVar12 = (ulong *)((long)auStack_58 + uVar7);
          puVar3 = (ulong *)(uVar7 + (long)puVar3);
        }
        lVar9 = 0;
        if ((param_5 & 4) != 0) {
          *(int *)puVar12 = (int)*puVar3;
          lVar9 = 4;
        }
        if ((param_5 & 2) != 0) {
          *(undefined2 *)((long)puVar12 + lVar9) = *(undefined2 *)((long)puVar3 + lVar9);
          lVar9 = lVar9 + 2;
        }
        if ((param_5 & 1) != 0) {
          *(undefined1 *)((long)puVar12 + lVar9) = *(undefined1 *)((long)puVar3 + lVar9);
        }
      }
    }
    auStack_58[0] = auStack_58[0] ^ local_68;
    auStack_58[1] = auStack_58[1] ^ uStack_60;
    (*(code *)param_1[2])(auStack_58,auStack_58,*param_1);
    *param_4 = auStack_58[0] ^ local_68;
    param_4[1] = auStack_58[1] ^ uStack_60;
    uVar4 = 0;
  }
LAB_00553732:
  if (auStack_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

