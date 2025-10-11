
undefined8
FUN_004c08c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
            int param_13)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  byte bVar11;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (param_13 == 0x400) {
    uVar5 = FUN_0041ad90(0x4a0,"../crypto/bn/rsaz_exp_x2.c",0xa3);
    if (uVar5 != 0) {
      uVar6 = uVar5 & 0xffffffffffffffc0;
      lVar1 = uVar6 + 0x220;
      lVar2 = uVar6 + 0x2c0;
      lVar3 = uVar6 + 0x360;
      lVar4 = uVar6 + 0x180;
      lVar7 = uVar6 + 0x400;
      FUN_004c0730(uVar6 + 0x40,0x14,param_2);
      FUN_004c0730(uVar6 + 0xe0,0x14,param_8);
      FUN_004c0730(lVar4,0x14,param_4);
      FUN_004c0730(lVar1,0x14,param_10);
      FUN_004c0730(lVar2,0x14,param_5);
      FUN_004c0730(lVar3,0x14,param_11);
      *(undefined8 *)(uVar6 + 0x400) = 0;
      *(undefined8 *)(uVar6 + 0x498) = 0;
      puVar10 = (undefined8 *)(uVar6 + 0x408);
      for (uVar9 = (ulong)(((int)lVar7 - (int)(undefined8 *)(uVar6 + 0x408)) + 0xa0U >> 3);
          uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar10 = 0;
        puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
      }
      *(ulong *)(uVar6 + 0x408) = *(ulong *)(uVar6 + 0x408) | 0x1000;
      FUN_004beba0(lVar2,lVar2,lVar2,lVar4,param_6);
      FUN_004beba0(lVar2,lVar2,lVar7,lVar4,param_6);
      FUN_004beba0(lVar3,lVar3,lVar3,lVar1,param_12);
      FUN_004beba0(lVar3,lVar3,lVar7,lVar1,param_12);
      local_68._8_8_ = param_9;
      local_68._0_8_ = param_3;
      local_58._8_8_ = param_12;
      local_58._0_8_ = param_6;
      FUN_004c0280(lVar2,uVar6 + 0x40,local_68,lVar4,lVar2,local_58);
      FUN_004c0800(param_1,lVar2);
      FUN_004c0800(param_7,lVar3);
      FUN_004227b0(uVar5,0x460);
      FUN_0041ad60(uVar5,"../crypto/bn/rsaz_exp_x2.c",0xe3);
      uVar8 = 1;
      goto LAB_004c0948;
    }
  }
  uVar8 = 0;
LAB_004c0948:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

