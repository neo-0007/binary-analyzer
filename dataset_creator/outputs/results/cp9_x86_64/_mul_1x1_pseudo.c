
/* WARNING: Removing unreachable block (ram,0x0061a0da) */
/* WARNING: Removing unreachable block (ram,0x0061a0a3) */
/* WARNING: Removing unreachable block (ram,0x0061a06c) */
/* WARNING: Removing unreachable block (ram,0x0061a035) */
/* WARNING: Removing unreachable block (ram,0x00619ffe) */
/* WARNING: Removing unreachable block (ram,0x00619fc7) */
/* WARNING: Removing unreachable block (ram,0x00619f90) */

undefined1  [16] _mul_1x1(void)

{
  ulong in_RAX;
  ulong uVar1;
  ulong unaff_RBP;
  ulong uVar2;
  ulong uVar3;
  ulong in_R8;
  undefined1 auVar4 [16];
  ulong local_88 [4];
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  ulong local_10;
  
  local_88[1] = in_RAX & 0x1fffffffffffffff;
  local_88[2] = local_88[1] * 2;
  local_68 = local_88[1] * 4;
  uVar1 = (long)in_RAX >> 0x3f & unaff_RBP;
  uVar2 = (long)(in_RAX * 2) >> 0x3f & unaff_RBP;
  uVar3 = (long)(in_RAX * 4) >> 0x3f & unaff_RBP;
  local_88[0] = 0;
  local_28 = local_68 ^ in_RAX * 8;
  local_88[3] = local_88[1] ^ local_88[2];
  local_60 = local_88[1] ^ local_68;
  local_50 = local_88[1] ^ local_88[2] ^ local_68;
  local_58 = local_88[2] ^ local_68;
  local_40 = local_88[1] ^ local_68 ^ local_28;
  local_38 = local_88[2] ^ local_68 ^ local_28;
  local_48 = in_RAX * 8;
  local_30 = local_50 ^ local_28;
  local_20 = local_40 ^ local_68;
  local_18 = local_38 ^ local_68;
  local_10 = local_30 ^ local_68;
  auVar4._0_8_ = uVar1 << 0x3f ^ uVar2 << 0x3e ^ uVar3 << 0x3d ^
                 local_88[in_R8 & unaff_RBP >> 4] << 4 ^ local_88[in_R8 & unaff_RBP >> 0xc] << 0xc ^
                 local_88[in_R8 & unaff_RBP >> 0x14] << 0x14 ^
                 local_88[in_R8 & unaff_RBP >> 0x1c] << 0x1c ^
                 local_88[in_R8 & unaff_RBP >> 0x24] << 0x24 ^
                 local_88[in_R8 & unaff_RBP >> 0x2c] << 0x2c ^
                 local_88[in_R8 & unaff_RBP >> 0x34] << 0x34 ^
                 local_88[in_R8 & unaff_RBP >> 0x3c] << 0x3c ^
                 local_88[in_R8 & unaff_RBP] ^ local_88[in_R8 & unaff_RBP >> 8] << 8 ^
                 local_88[in_R8 & unaff_RBP >> 0x10] << 0x10 ^
                 local_88[in_R8 & unaff_RBP >> 0x18] << 0x18 ^
                 local_88[in_R8 & unaff_RBP >> 0x20] << 0x20 ^
                 local_88[in_R8 & unaff_RBP >> 0x28] << 0x28 ^
                 local_88[in_R8 & unaff_RBP >> 0x30] << 0x30 ^
                 local_88[in_R8 & unaff_RBP >> 0x38] << 0x38;
  auVar4._8_8_ = uVar1 >> 1 ^ uVar2 >> 2 ^ uVar3 >> 3 ^ local_88[in_R8 & unaff_RBP >> 4] >> 0x3c ^
                 local_88[in_R8 & unaff_RBP >> 0xc] >> 0x34 ^
                 local_88[in_R8 & unaff_RBP >> 0x14] >> 0x2c ^
                 local_88[in_R8 & unaff_RBP >> 0x1c] >> 0x24 ^
                 local_88[in_R8 & unaff_RBP >> 0x24] >> 0x1c ^
                 local_88[in_R8 & unaff_RBP >> 0x2c] >> 0x14 ^
                 local_88[in_R8 & unaff_RBP >> 0x34] >> 0xc ^
                 local_88[in_R8 & unaff_RBP >> 0x3c] >> 4 ^
                 local_88[in_R8 & unaff_RBP >> 8] >> 0x38 ^
                 local_88[in_R8 & unaff_RBP >> 0x10] >> 0x30 ^
                 local_88[in_R8 & unaff_RBP >> 0x18] >> 0x28 ^
                 local_88[in_R8 & unaff_RBP >> 0x20] >> 0x20 ^
                 local_88[in_R8 & unaff_RBP >> 0x28] >> 0x18 ^
                 local_88[in_R8 & unaff_RBP >> 0x30] >> 0x10 ^
                 local_88[in_R8 & unaff_RBP >> 0x38] >> 8;
  return auVar4;
}

