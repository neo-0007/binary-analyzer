
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void scryptBlockMix(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  long in_FS_OFFSET;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  int local_114;
  undefined8 *local_108;
  uint *local_100;
  ulong local_f8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = param_2 + param_3 * 0x20 + -0x10;
  local_c8 = *(undefined8 *)puVar3;
  uStack_c0 = *(undefined8 *)(puVar3 + 2);
  local_b8 = *(undefined8 *)(puVar3 + 4);
  uStack_b0 = *(undefined8 *)(puVar3 + 6);
  local_a8 = *(undefined8 *)(puVar3 + 8);
  uStack_a0 = *(undefined8 *)(puVar3 + 10);
  local_98 = *(undefined8 *)(puVar3 + 0xc);
  uStack_90 = *(undefined8 *)(puVar3 + 0xe);
  if (param_3 * 2 != 0) {
    local_f8 = 0;
    puVar3 = (uint *)&local_c8;
    local_100 = param_2;
    do {
      do {
        *puVar3 = *puVar3 ^ *param_2;
        puVar3 = puVar3 + 1;
        param_2 = param_2 + 1;
      } while (&local_88 != puVar3);
      local_114 = 4;
      param_2 = local_100 + 0x10;
      uStack_80 = (uint)uStack_c0;
      uStack_64 = (uint)((ulong)local_a8 >> 0x20);
      local_128 = uStack_80;
      uStack_7c = (uint)((ulong)uStack_c0 >> 0x20);
      local_124 = uStack_7c;
      uStack_5c = (uint)((ulong)uStack_a0 >> 0x20);
      uStack_50 = (uint)uStack_90;
      local_120 = uStack_5c;
      uStack_6c = (uint)((ulong)uStack_b0 >> 0x20);
      uStack_74 = (uint)((ulong)local_b8 >> 0x20);
      uStack_84 = (uint)((ulong)local_c8 >> 0x20);
      uStack_54 = (uint)((ulong)local_98 >> 0x20);
      local_12c = uStack_6c;
      uStack_60 = (uint)uStack_a0;
      uStack_70 = (uint)uStack_b0;
      uStack_4c = (uint)((ulong)uStack_90 >> 0x20);
      uVar2 = (uint)local_98;
      uVar7 = (uint)local_c8;
      uVar9 = (uint)local_b8;
      uVar1 = (uint)local_a8;
      do {
        uVar9 = ((uVar2 + uVar7) * 0x80 | uVar2 + uVar7 >> 0x19) ^ uVar9;
        uVar1 = ((uVar7 + uVar9) * 0x200 | uVar7 + uVar9 >> 0x17) ^ uVar1;
        uVar2 = ((uVar9 + uVar1) * 0x2000 | uVar9 + uVar1 >> 0x13) ^ uVar2;
        uStack_64 = ((uStack_74 + uStack_84) * 0x80 | uStack_74 + uStack_84 >> 0x19) ^ uStack_64;
        uVar6 = uVar1 + uVar2;
        uVar7 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar7;
        uStack_54 = ((uStack_64 + uStack_74) * 0x200 | uStack_64 + uStack_74 >> 0x17) ^ uStack_54;
        uStack_84 = ((uStack_64 + uStack_54) * 0x2000 | uStack_64 + uStack_54 >> 0x13) ^ uStack_84;
        uVar6 = uStack_54 + uStack_84;
        uStack_50 = ((uStack_70 + uStack_60) * 0x80 | uStack_70 + uStack_60 >> 0x19) ^ uStack_50;
        uStack_74 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uStack_74;
        local_128 = ((uStack_50 + uStack_60) * 0x200 | uStack_50 + uStack_60 >> 0x17) ^ local_128;
        uStack_70 = ((uStack_50 + local_128) * 0x2000 | uStack_50 + local_128 >> 0x13) ^ uStack_70;
        uVar6 = local_128 + uStack_70;
        uStack_60 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uStack_60;
        local_124 = ((local_120 + uStack_4c) * 0x80 | local_120 + uStack_4c >> 0x19) ^ local_124;
        local_12c = ((local_124 + uStack_4c) * 0x200 | local_124 + uStack_4c >> 0x17) ^ local_12c;
        local_120 = ((local_124 + local_12c) * 0x2000 | local_124 + local_12c >> 0x13) ^ local_120;
        uVar6 = local_12c + local_120;
        uStack_4c = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uStack_4c;
        uStack_84 = ((uVar7 + local_124) * 0x80 | uVar7 + local_124 >> 0x19) ^ uStack_84;
        uStack_70 = ((uVar9 + uStack_74) * 0x80 | uVar9 + uStack_74 >> 0x19) ^ uStack_70;
        local_128 = ((uVar7 + uStack_84) * 0x200 | uVar7 + uStack_84 >> 0x17) ^ local_128;
        local_124 = ((uStack_84 + local_128) * 0x2000 | uStack_84 + local_128 >> 0x13) ^ local_124;
        uVar7 = (local_128 + local_124 >> 0xe | (local_128 + local_124) * 0x40000) ^ uVar7;
        local_12c = ((uStack_74 + uStack_70) * 0x200 | uStack_74 + uStack_70 >> 0x17) ^ local_12c;
        uVar9 = ((uStack_70 + local_12c) * 0x2000 | uStack_70 + local_12c >> 0x13) ^ uVar9;
        uVar2 = ((uStack_50 + uStack_4c) * 0x80 | uStack_50 + uStack_4c >> 0x19) ^ uVar2;
        uStack_74 = (local_12c + uVar9 >> 0xe | (local_12c + uVar9) * 0x40000) ^ uStack_74;
        uStack_54 = ((uStack_4c + uVar2) * 0x200 | uStack_4c + uVar2 >> 0x17) ^ uStack_54;
        local_120 = ((uStack_64 + uStack_60) * 0x80 | uStack_64 + uStack_60 >> 0x19) ^ local_120;
        uVar1 = ((uStack_60 + local_120) * 0x200 | uStack_60 + local_120 >> 0x17) ^ uVar1;
        uStack_64 = ((local_120 + uVar1) * 0x2000 | local_120 + uVar1 >> 0x13) ^ uStack_64;
        uStack_60 = (uVar1 + uStack_64 >> 0xe | (uVar1 + uStack_64) * 0x40000) ^ uStack_60;
        uStack_50 = ((uVar2 + uStack_54) * 0x2000 | uVar2 + uStack_54 >> 0x13) ^ uStack_50;
        uStack_4c = (uStack_54 + uStack_50 >> 0xe | (uStack_54 + uStack_50) * 0x40000) ^ uStack_4c;
        local_114 = local_114 + -1;
      } while (local_114 != 0);
      _local_88 = CONCAT44(uStack_84,uVar7);
      _uStack_80 = CONCAT44(local_124,local_128);
      _uStack_70 = CONCAT44(local_12c,uStack_70);
      _local_78 = CONCAT44(uStack_74,uVar9);
      _local_68 = CONCAT44(uStack_64,uVar1);
      _uStack_60 = CONCAT44(local_120,uStack_60);
      _local_58 = CONCAT44(uStack_54,uVar2);
      puVar3 = &uStack_84;
      puVar8 = (uint *)&local_c8;
      while( true ) {
        *puVar8 = *puVar8 + uVar7;
        puVar8 = puVar8 + 1;
        if (&local_88 == puVar8) break;
        uVar7 = *puVar3;
        puVar3 = puVar3 + 1;
      }
      OPENSSL_cleanse(&local_88,0x40);
      uVar5 = local_f8 + 1;
      puVar4 = (undefined8 *)
               (((ulong)((uint)local_f8 & 1) * param_3 + (local_f8 >> 1)) * 0x40 + param_1);
      *puVar4 = local_c8;
      puVar4[1] = uStack_c0;
      puVar4[2] = local_b8;
      puVar4[3] = uStack_b0;
      puVar4[4] = local_a8;
      puVar4[5] = uStack_a0;
      puVar4[6] = local_98;
      puVar4[7] = uStack_90;
      puVar3 = (uint *)&local_c8;
      local_f8 = uVar5;
      local_100 = param_2;
    } while (uVar5 != param_3 * 2);
  }
  local_108 = &local_c8;
  OPENSSL_cleanse(local_108,0x40);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

