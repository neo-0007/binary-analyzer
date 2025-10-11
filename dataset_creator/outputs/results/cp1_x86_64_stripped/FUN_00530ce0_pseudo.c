
undefined8 FUN_00530ce0(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined1 local_28 [16];
  undefined8 uStack_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0 || param_3 != (undefined8 *)0x0) {
    lVar7 = *(long *)(param_1 + 0x78);
    *(undefined8 *)(lVar7 + 0xa8) = 0;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
    *(undefined8 *)(lVar7 + 0xb8) = 0;
    *(undefined8 *)(lVar7 + 200) = 0xffffffffffffffff;
    if (param_3 == (undefined8 *)0x0) {
      FUN_00530a40(param_1,param_2,0);
    }
    else {
      uVar1 = *(uint *)(lVar7 + 0xc4);
      uVar3 = (ulong)(int)uVar1;
      local_28 = (undefined1  [16])0x0;
      if ((int)uVar1 < 0x11) {
        puVar4 = (undefined8 *)((long)&uStack_18 + -uVar3);
        if (uVar3 < 8) {
          if ((uVar3 & 4) == 0) {
            if ((uVar3 != 0) && (*(undefined1 *)puVar4 = *(undefined1 *)param_3, (uVar1 & 2) != 0))
            {
              local_28._0_14_ = SUB1614((undefined1  [16])0x0,0);
              local_28._14_2_ = *(undefined2 *)((long)param_3 + (uVar3 - 2));
            }
          }
          else {
            *(undefined4 *)puVar4 = *(undefined4 *)param_3;
            local_28._0_12_ = SUB1612((undefined1  [16])0x0,0);
            local_28._12_4_ = *(undefined4 *)((long)param_3 + (uVar3 - 4));
          }
        }
        else {
          *puVar4 = *param_3;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = *(ulong *)((long)param_3 + (uVar3 - 8));
          local_28 = auVar2 << 0x40;
          uVar8 = (long)&local_10 + -uVar3 & 0xfffffffffffffff8;
          lVar5 = (long)puVar4 - uVar8;
          uVar3 = uVar3 + lVar5 & 0xfffffffffffffff8;
          if (7 < uVar3) {
            uVar6 = 0;
            do {
              *(undefined8 *)(uVar8 + uVar6) = *(undefined8 *)((long)param_3 + (uVar6 - lVar5));
              uVar6 = uVar6 + 8;
            } while (uVar6 < uVar3);
          }
        }
      }
      FUN_00530a40(param_1,param_2,local_28);
      *(undefined4 *)(lVar7 + 0x80) = *(undefined4 *)(lVar7 + 0x2c);
      *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar7 + 0x24);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return 1;
}

