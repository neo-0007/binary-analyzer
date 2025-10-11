
undefined8 FUN_00594160(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  uint local_28 [6];
  long local_10;
  
  lVar2 = 1;
  uVar3 = 0x70e15;
  uVar6 = *param_1;
  uVar4 = param_1[1];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) ^
          0xa3b1bac6;
  uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) ^
          0x56aa3350;
  uVar7 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ^
          0x677d9197;
  local_28[0] = uVar6;
  uVar1 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) ^
          0xb27022dc;
  local_28[1] = uVar4;
  local_28[2] = uVar7;
  local_28[3] = uVar1;
  while( true ) {
    uVar5 = (uint)lVar2;
    uVar3 = uVar3 ^ uVar1 ^ uVar4 ^ uVar7;
    uVar4 = (uint)(byte)(&DAT_0080a500)[uVar3 >> 0x18] << 0x18 |
            (uint)(byte)(&DAT_0080a500)[uVar3 & 0xff] |
            (uint)(byte)(&DAT_0080a500)[uVar3 >> 0x10 & 0xff] << 0x10;
    uVar1 = uVar4 | (uint)(byte)(&DAT_0080a500)[(int)(uVar3 >> 8 & 0xff)] << 8;
    uVar6 = uVar1 ^ (uVar1 << 0xd | uVar4 >> 0x13) ^ (uVar1 >> 9 | uVar1 << 0x17) ^ uVar6;
    *(uint *)(param_2 + -4 + lVar2 * 4) = uVar6;
    lVar2 = lVar2 + 1;
    local_28[uVar5 - 1 & 3] = uVar6;
    if (lVar2 == 0x21) break;
    uVar6 = local_28[(int)(uVar5 & 3)];
    uVar4 = local_28[(uint)lVar2 & 3];
    uVar1 = local_28[uVar5 + 3 & 3];
    uVar7 = local_28[uVar5 + 2 & 3];
    uVar3 = *(uint *)(&DAT_0080a07c + lVar2 * 4);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

