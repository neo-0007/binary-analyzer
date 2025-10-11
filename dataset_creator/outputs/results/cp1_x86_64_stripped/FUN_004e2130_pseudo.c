
void FUN_004e2130(undefined4 *param_1,ulong *param_2,uint *param_3)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  int local_2a4;
  ulong local_278;
  ulong local_270;
  ulong local_268;
  ulong local_260;
  ulong local_258;
  ulong local_248 [6];
  ulong local_218 [6];
  ulong local_1e8 [6];
  ulong local_1b8 [6];
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  undefined1 local_128 [48];
  undefined1 local_f8 [48];
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_005130c0();
  if (iVar1 == 0) {
    local_248[0] = 1;
    local_248[1] = 0;
    local_58 = param_2[2];
    uStack_50._7_1_ = (byte)(param_2[3] >> 0x38);
    uVar13 = (ulong)*(byte *)((long)param_3 + 6) << 0x30;
    uStack_60 = param_2[1];
    local_68 = *param_2 & 0xfffffffffffffff8;
    bVar3 = uStack_50._7_1_ & 0x7f | 0x40;
    uStack_50 = param_2[3] & 0x7fffffffffffffff | 0x4000000000000000;
    uVar12 = 0;
    local_278 = (ulong)(byte)param_3[1] << 0x20 | (ulong)*(byte *)((long)param_3 + 5) << 0x28 |
                (ulong)*param_3 | uVar13 & 0x7ffffffffffff;
    local_270 = uVar13 >> 0x33 |
                ((ulong)*(byte *)((long)param_3 + 0xb) << 0x20 |
                 ((ulong)(byte)param_3[3] & 0x3f) << 0x28 | (ulong)*(uint *)((long)param_3 + 7)) <<
                5;
    local_268 = ((ulong)(byte)param_3[3] << 0x2d) >> 0x33 |
                ((ulong)*(byte *)((long)param_3 + 0x11) << 0x20 |
                 (ulong)*(byte *)((long)param_3 + 0x12) << 0x28 |
                 (ulong)*(uint *)((long)param_3 + 0xd) |
                ((ulong)*(byte *)((long)param_3 + 0x13) & 1) << 0x30) << 2;
    local_258 = ((ulong)*(byte *)((long)param_3 + 0x19) << 0x2f) >> 0x33 |
                ((ulong)*(byte *)((long)param_3 + 0x1e) << 0x20 |
                 ((ulong)*(byte *)((long)param_3 + 0x1f) & 0x7f) << 0x28 |
                (ulong)*(uint *)((long)param_3 + 0x1a)) << 4;
    local_260 = ((ulong)*(byte *)((long)param_3 + 0x13) << 0x32) >> 0x33 |
                ((ulong)(byte)param_3[6] << 0x20 |
                 ((ulong)*(byte *)((long)param_3 + 0x19) & 0xf) << 0x28 | (ulong)param_3[5]) << 7;
    local_248[2] = 0;
    local_248[3] = 0;
    local_248[4] = 0;
    local_218[0] = 0;
    local_218[1] = 0;
    local_218[2] = 0;
    local_218[3] = 0;
    local_218[4] = 0;
    local_1e8[0] = local_278;
    local_1b8[0] = 1;
    local_1b8[1] = 0;
    local_1b8[2] = 0;
    local_1b8[3] = 0;
    local_1b8[4] = 0;
    local_2a4 = 0xfe;
    local_1e8[1] = local_270;
    local_1e8[2] = local_268;
    local_1e8[3] = local_260;
    local_1e8[4] = local_258;
    while( true ) {
      uVar8 = local_1b8[0];
      uVar6 = local_218[0];
      uVar11 = (int)(uint)bVar3 >> ((byte)local_2a4 & 7);
      uVar15 = uVar12 ^ uVar11 & 1;
      uVar12 = uVar11 & 1;
      uVar16 = -(ulong)uVar15;
      uVar2 = local_1e8[0];
      uVar13 = local_248[0];
      puVar5 = local_248;
      puVar7 = local_1e8;
      while( true ) {
        puVar10 = puVar5 + 1;
        uVar4 = (uVar13 ^ uVar2) & uVar16;
        *puVar5 = uVar13 ^ uVar4;
        *puVar7 = uVar4 ^ uVar2;
        puVar5 = local_218;
        puVar9 = local_1b8;
        if (puVar10 == local_248 + 5) break;
        uVar13 = *puVar10;
        uVar2 = puVar7[1];
        puVar5 = puVar10;
        puVar7 = puVar7 + 1;
      }
      while( true ) {
        puVar7 = puVar5 + 1;
        uVar13 = (uVar6 ^ uVar8) & uVar16;
        *puVar5 = uVar6 ^ uVar13;
        *puVar9 = uVar13 ^ uVar8;
        if (puVar7 == local_218 + 5) break;
        uVar6 = *puVar7;
        uVar8 = puVar9[1];
        puVar5 = puVar7;
        puVar9 = puVar9 + 1;
      }
      local_188 = (local_1e8[0] + 0xfffffffffffda) - local_1b8[0];
      local_180 = (local_1e8[1] + 0xffffffffffffe) - local_1b8[1];
      local_178 = (local_1e8[2] + 0xffffffffffffe) - local_1b8[2];
      local_170 = (local_1e8[3] + 0xffffffffffffe) - local_1b8[3];
      local_168 = (local_1e8[4] + 0xffffffffffffe) - local_1b8[4];
      local_158 = (local_248[0] + 0xfffffffffffda) - local_218[0];
      local_150 = (local_248[1] + 0xffffffffffffe) - local_218[1];
      local_148 = (local_248[2] + 0xffffffffffffe) - local_218[2];
      local_140 = (local_248[3] + 0xffffffffffffe) - local_218[3];
      local_138 = (local_248[4] + 0xffffffffffffe) - local_218[4];
      local_248[0] = local_248[0] + local_218[0];
      local_248[1] = local_248[1] + local_218[1];
      local_248[2] = local_248[2] + local_218[2];
      local_248[3] = local_248[3] + local_218[3];
      local_248[4] = local_248[4] + local_218[4];
      local_218[0] = local_1e8[0] + local_1b8[0];
      local_218[1] = local_1e8[1] + local_1b8[1];
      local_218[2] = local_1e8[2] + local_1b8[2];
      local_218[3] = local_1e8[3] + local_1b8[3];
      local_218[4] = local_1e8[4] + local_1b8[4];
      FUN_00512cc0(local_1b8,&local_188,local_248);
      FUN_00512cc0(local_218,local_218,&local_158);
      FUN_00512e80(&local_188,&local_158);
      FUN_00512e80(&local_158,local_248);
      local_1e8[0] = local_218[0] + local_1b8[0];
      local_1e8[1] = local_218[1] + local_1b8[1];
      local_218[1] = (local_1b8[1] + 0xffffffffffffe) - local_218[1];
      local_1e8[2] = local_218[2] + local_1b8[2];
      local_218[2] = (local_1b8[2] + 0xffffffffffffe) - local_218[2];
      local_1e8[3] = local_218[3] + local_1b8[3];
      local_218[3] = (local_1b8[3] + 0xffffffffffffe) - local_218[3];
      local_1e8[4] = local_218[4] + local_1b8[4];
      local_218[4] = (local_1b8[4] + 0xffffffffffffe) - local_218[4];
      local_218[0] = (local_1b8[0] + 0xfffffffffffda) - local_218[0];
      FUN_00512cc0(local_248,&local_158,&local_188);
      local_158 = (local_158 + 0xfffffffffffda) - local_188;
      local_150 = (local_150 + 0xffffffffffffe) - local_180;
      local_148 = (local_148 + 0xffffffffffffe) - local_178;
      local_140 = (local_140 + 0xffffffffffffe) - local_170;
      local_138 = (local_138 + 0xffffffffffffe) - local_168;
      FUN_00512e80(local_218,local_218);
      FUN_00513060(local_1b8,&local_158);
      FUN_00512e80(local_1e8);
      local_188 = local_188 + local_1b8[0];
      local_180 = local_180 + local_1b8[1];
      local_178 = local_178 + local_1b8[2];
      local_170 = local_170 + local_1b8[3];
      local_168 = local_168 + local_1b8[4];
      FUN_00512cc0(local_1b8,&local_278,local_218);
      FUN_00512cc0(local_218,&local_158,&local_188);
      local_2a4 = local_2a4 + -1;
      if (local_2a4 == -1) break;
      bVar3 = *(byte *)((long)&local_68 + (long)(local_2a4 >> 3));
    }
    FUN_00512e80(local_128,local_218);
    FUN_00512e80(local_f8,local_128);
    FUN_00512e80(local_f8,local_f8);
    FUN_00512cc0(local_f8,local_218,local_f8);
    FUN_00512cc0(local_128,local_128,local_f8);
    iVar1 = 4;
    FUN_00512e80(local_c8,local_128);
    FUN_00512cc0(local_f8,local_f8,local_c8);
    FUN_00512e80(local_c8,local_f8);
    do {
      FUN_00512e80(local_c8,local_c8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 9;
    FUN_00512cc0(local_f8,local_c8,local_f8);
    FUN_00512e80(local_c8,local_f8);
    do {
      FUN_00512e80(local_c8,local_c8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x13;
    FUN_00512cc0(local_c8,local_c8,local_f8);
    FUN_00512e80(local_98,local_c8);
    do {
      FUN_00512e80(local_98,local_98);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 10;
    FUN_00512cc0(local_c8,local_98,local_c8);
    do {
      FUN_00512e80(local_c8,local_c8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x31;
    FUN_00512cc0(local_f8,local_c8,local_f8);
    FUN_00512e80(local_c8,local_f8);
    do {
      FUN_00512e80(local_c8,local_c8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 99;
    FUN_00512cc0(local_c8,local_c8,local_f8);
    FUN_00512e80(local_98,local_c8);
    do {
      FUN_00512e80(local_98,local_98);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x32;
    FUN_00512cc0(local_c8,local_98,local_c8);
    do {
      FUN_00512e80(local_c8,local_c8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 5;
    FUN_00512cc0(local_f8,local_c8,local_f8);
    do {
      FUN_00512e80(local_f8,local_f8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_00512cc0(local_218,local_f8,local_128);
    FUN_00512cc0(local_248,local_248,local_218);
    uVar13 = (((((local_248[0] + 0x13 >> 0x33) + local_248[1] >> 0x33) + local_248[2] >> 0x33) +
               local_248[3] >> 0x33) + local_248[4] >> 0x33) * 0x13 + local_248[0];
    uVar6 = uVar13 & 0x7ffffffffffff;
    uVar13 = (uVar13 >> 0x33) + local_248[1];
    *param_1 = (int)uVar6;
    uVar8 = uVar13 & 0x7ffffffffffff;
    uVar13 = (uVar13 >> 0x33) + local_248[2];
    uVar2 = uVar13 & 0x7ffffffffffff;
    uVar16 = (uVar13 >> 0x33) + local_248[3];
    uVar4 = uVar16 & 0x7ffffffffffff;
    uVar16 = (uVar16 >> 0x33) + local_248[4] & 0x7ffffffffffff;
    *(char *)(param_1 + 1) = (char)(uVar6 >> 0x20);
    *(char *)((long)param_1 + 5) = (char)(uVar6 >> 0x28);
    *(byte *)((long)param_1 + 6) = (byte)(uVar6 >> 0x30) | (char)uVar8 * '\b';
    *(char *)((long)param_1 + 7) = (char)(uVar8 >> 5);
    *(char *)(param_1 + 2) = (char)(uVar8 >> 0xd);
    *(char *)((long)param_1 + 9) = (char)(uVar8 >> 0x15);
    *(char *)((long)param_1 + 10) = (char)(uVar8 >> 0x1d);
    *(char *)((long)param_1 + 0xb) = (char)(uVar8 >> 0x25);
    *(byte *)(param_1 + 3) = (byte)(uint)(uVar8 >> 0x2d) | (byte)((int)uVar13 << 6);
    *(char *)((long)param_1 + 0xd) = (char)(uVar2 >> 2);
    *(char *)((long)param_1 + 0xe) = (char)(uVar2 >> 10);
    *(char *)((long)param_1 + 0xf) = (char)(uVar2 >> 0x12);
    *(char *)(param_1 + 4) = (char)(uVar2 >> 0x1a);
    *(char *)((long)param_1 + 0x11) = (char)(uVar2 >> 0x22);
    *(char *)((long)param_1 + 0x12) = (char)(uVar2 >> 0x2a);
    *(byte *)((long)param_1 + 0x13) = (byte)(uint)(uVar2 >> 0x32) | (char)uVar4 * '\x02';
    *(char *)(param_1 + 5) = (char)(uVar4 >> 7);
    *(char *)((long)param_1 + 0x15) = (char)(uVar4 >> 0xf);
    *(char *)((long)param_1 + 0x16) = (char)(uVar4 >> 0x17);
    *(char *)((long)param_1 + 0x17) = (char)(uVar4 >> 0x1f);
    *(char *)(param_1 + 6) = (char)(uVar4 >> 0x27);
    *(byte *)((long)param_1 + 0x19) = (byte)((int)uVar16 << 4) | (byte)(uint)(uVar4 >> 0x2f);
    *(char *)((long)param_1 + 0x1a) = (char)(uVar16 >> 4);
    *(char *)((long)param_1 + 0x1b) = (char)(uVar16 >> 0xc);
    *(char *)(param_1 + 7) = (char)(uVar16 >> 0x14);
    *(char *)((long)param_1 + 0x1d) = (char)(uVar16 >> 0x1c);
    *(char *)((long)param_1 + 0x1e) = (char)(uVar16 >> 0x24);
    *(char *)((long)param_1 + 0x1f) = (char)(uVar16 >> 0x2c);
    FUN_004227b0(&local_68,0x20);
  }
  else {
    local_58 = param_2[2];
    uStack_60 = param_2[1];
    uVar6 = 0;
    puVar5 = &local_278;
    uVar8 = 0xfe;
    uStack_50._7_1_ = (byte)(param_2[3] >> 0x38);
    local_68 = *param_2 & 0xfffffffffffffff8;
    bVar3 = uStack_50._7_1_ & 0x7f | 0x40;
    uStack_50 = param_2[3] & 0x7fffffffffffffff | 0x4000000000000000;
    local_278 = FUN_004e0020(param_3);
    uVar13 = FUN_004e0020(param_3 + 2);
    local_270 = uVar13;
    uVar2 = FUN_004e0020(param_3 + 4);
    local_268 = uVar2;
    auVar17 = FUN_004e0020(param_3 + 6);
    local_248[0] = 1;
    local_260 = auVar17._0_8_ & 0x7fffffffffffffff;
    local_248[1] = 0;
    local_248[2] = 0;
    local_248[3] = 0;
    local_218[0] = 0;
    local_218[1] = 0;
    local_218[2] = 0;
    local_218[3] = 0;
    local_1e8[0] = auVar17._8_8_;
    local_1b8[0] = 1;
    local_1b8[1] = 0;
    local_1b8[2] = 0;
    local_1b8[3] = 0;
    local_1e8[1] = uVar13;
    local_1e8[2] = uVar2;
    local_1e8[3] = local_260;
    while( true ) {
      uVar4 = local_1b8[0];
      uVar16 = local_218[0];
      iVar1 = (int)uVar8;
      uVar12 = (int)(uint)bVar3 >> ((byte)uVar8 & 7) & 1;
      uVar6 = -(ulong)((uint)uVar6 ^ uVar12);
      uVar2 = local_1e8[0];
      uVar13 = local_248[0];
      puVar7 = local_248;
      puVar9 = local_1e8;
      while( true ) {
        puVar14 = puVar7 + 1;
        uVar8 = (uVar13 ^ uVar2) & uVar6;
        *puVar7 = uVar13 ^ uVar8;
        *puVar9 = uVar8 ^ uVar2;
        puVar7 = local_218;
        puVar10 = local_1b8;
        if (puVar14 == local_248 + 4) break;
        uVar13 = *puVar14;
        uVar2 = puVar9[1];
        puVar7 = puVar14;
        puVar9 = puVar9 + 1;
      }
      while( true ) {
        puVar9 = puVar7 + 1;
        uVar13 = (uVar16 ^ uVar4) & uVar6;
        *puVar7 = uVar16 ^ uVar13;
        *puVar10 = uVar13 ^ uVar4;
        if (local_218 + 4 == puVar9) break;
        uVar16 = *puVar9;
        uVar4 = puVar10[1];
        puVar7 = puVar9;
        puVar10 = puVar10 + 1;
      }
      FUN_005134a0(&local_188,local_1e8,local_1b8);
      FUN_005134a0(&local_158,local_248,local_218);
      FUN_00513440(local_248,local_248,local_218);
      FUN_00513440(local_218,local_1e8,local_1b8);
      FUN_005130e0(local_1b8,local_248,&local_188);
      FUN_005130e0(local_218,local_218,&local_158);
      FUN_00513240(&local_188,&local_158);
      FUN_00513240(&local_158,local_248);
      FUN_00513440(local_1e8,local_1b8,local_218);
      FUN_005134a0(local_218,local_1b8,local_218);
      FUN_005130e0(local_248,&local_158,&local_188);
      FUN_005134a0(&local_158,&local_158,&local_188);
      FUN_00513240(local_218,local_218);
      FUN_005133e0(local_1b8,&local_158);
      FUN_00513240(local_1e8,local_1e8);
      FUN_00513440(&local_188,&local_188,local_1b8);
      FUN_005130e0(local_1b8,puVar5,local_218);
      FUN_005130e0(local_218,&local_158,&local_188);
      uVar11 = iVar1 - 1;
      uVar8 = (ulong)uVar11;
      if (iVar1 == 0) break;
      uVar6 = (ulong)uVar12;
      bVar3 = *(byte *)((long)&local_68 + (long)((int)uVar11 >> 3));
    }
    FUN_00513240(local_128,local_218);
    FUN_00513240(local_f8,local_128);
    FUN_00513240(local_f8,local_f8);
    FUN_005130e0(local_f8,local_218,local_f8);
    FUN_005130e0(local_128,local_128,local_f8);
    iVar1 = 4;
    FUN_00513240(local_c8,local_128);
    FUN_005130e0(local_f8,local_f8,local_c8);
    FUN_00513240(local_c8,local_f8);
    do {
      FUN_00513240(local_c8,local_c8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 9;
    FUN_005130e0(local_f8,local_c8,local_f8);
    FUN_00513240(local_c8,local_f8);
    do {
      FUN_00513240(local_c8,local_c8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x13;
    FUN_005130e0(local_c8,local_c8,local_f8);
    FUN_00513240(local_98,local_c8);
    do {
      FUN_00513240(local_98,local_98);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 10;
    FUN_005130e0(local_c8,local_98,local_c8);
    do {
      FUN_00513240(local_c8,local_c8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x31;
    FUN_005130e0(local_f8,local_c8,local_f8);
    FUN_00513240(local_c8,local_f8);
    do {
      FUN_00513240(local_c8,local_c8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 99;
    FUN_005130e0(local_c8,local_c8,local_f8);
    FUN_00513240(local_98,local_c8);
    do {
      FUN_00513240(local_98,local_98);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0x32;
    FUN_005130e0(local_c8,local_98,local_c8);
    do {
      FUN_00513240(local_c8,local_c8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 5;
    FUN_005130e0(local_f8,local_c8,local_f8);
    do {
      FUN_00513240(local_f8,local_f8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_005130e0(local_218,local_f8,local_128);
    FUN_005130e0(local_248,local_248,local_218);
    FUN_00513500(param_1,local_248);
    FUN_004227b0(&local_68,0x20);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

