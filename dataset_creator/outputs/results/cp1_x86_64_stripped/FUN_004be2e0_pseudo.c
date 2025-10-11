
long FUN_004be2e0(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_2[2];
  uVar5 = uVar3 << 0x3a;
  uVar2 = *param_2 + param_2[1] * 0x20000000;
  *param_1 = uVar2 + uVar5;
  uVar1 = param_2[4];
  uVar4 = uVar1 << 0x34;
  uVar2 = (uVar3 >> 6) + (ulong)CARRY8(uVar2,uVar5) + param_2[3] * 0x800000;
  param_1[1] = uVar2 + uVar4;
  uVar3 = param_2[6];
  uVar5 = uVar3 << 0x2e;
  uVar2 = (uVar1 >> 0xc) + (ulong)CARRY8(uVar2,uVar4) + param_2[5] * 0x20000;
  param_1[2] = uVar2 + uVar5;
  uVar1 = param_2[8];
  uVar4 = uVar1 << 0x28;
  uVar2 = (uVar3 >> 0x12) + (ulong)CARRY8(uVar2,uVar5) + param_2[7] * 0x800;
  param_1[3] = uVar2 + uVar4;
  uVar3 = param_2[0xb];
  uVar6 = uVar3 << 0x3f;
  uVar2 = (uVar1 >> 0x18) + (ulong)CARRY8(uVar2,uVar4) + param_2[9] * 0x20 + (param_2[10] << 0x22);
  param_1[4] = uVar2 + uVar6;
  uVar1 = param_2[0xd];
  uVar5 = uVar1 << 0x39;
  uVar2 = (uVar3 >> 1) + (ulong)CARRY8(uVar2,uVar6) + param_2[0xc] * 0x10000000;
  param_1[5] = uVar2 + uVar5;
  uVar3 = param_2[0xf];
  uVar4 = uVar3 << 0x33;
  uVar2 = (uVar1 >> 7) + (ulong)CARRY8(uVar2,uVar5) + param_2[0xe] * 0x400000;
  param_1[6] = uVar2 + uVar4;
  uVar1 = param_2[0x11];
  uVar5 = uVar1 << 0x2d;
  uVar2 = (uVar3 >> 0xd) + (ulong)CARRY8(uVar2,uVar4) + param_2[0x10] * 0x10000;
  param_1[7] = uVar2 + uVar5;
  uVar3 = param_2[0x13];
  uVar4 = uVar3 << 0x27;
  uVar2 = (uVar1 >> 0x13) + (ulong)CARRY8(uVar2,uVar5) + param_2[0x12] * 0x400;
  param_1[8] = uVar2 + uVar4;
  uVar1 = param_2[0x16];
  uVar6 = uVar1 << 0x3e;
  uVar2 = (uVar3 >> 0x19) + (ulong)CARRY8(uVar2,uVar4) + param_2[0x14] * 0x10 +
          (param_2[0x15] << 0x21);
  param_1[9] = uVar2 + uVar6;
  uVar3 = param_2[0x18];
  uVar5 = uVar3 << 0x38;
  uVar2 = (uVar1 >> 2) + (ulong)CARRY8(uVar2,uVar6) + param_2[0x17] * 0x8000000;
  param_1[10] = uVar2 + uVar5;
  uVar1 = param_2[0x1a];
  uVar4 = uVar1 << 0x32;
  uVar2 = (uVar3 >> 8) + (ulong)CARRY8(uVar2,uVar5) + param_2[0x19] * 0x200000;
  param_1[0xb] = uVar2 + uVar4;
  uVar3 = param_2[0x1c];
  uVar5 = uVar3 << 0x2c;
  uVar2 = (uVar1 >> 0xe) + (ulong)CARRY8(uVar2,uVar4) + param_2[0x1b] * 0x8000;
  param_1[0xc] = uVar2 + uVar5;
  uVar1 = param_2[0x1e];
  uVar4 = uVar1 << 0x26;
  uVar2 = (uVar3 >> 0x14) + (ulong)CARRY8(uVar2,uVar5) + param_2[0x1d] * 0x200;
  param_1[0xd] = uVar2 + uVar4;
  uVar3 = param_2[0x21];
  uVar6 = uVar3 << 0x3d;
  uVar2 = (uVar1 >> 0x1a) + (ulong)CARRY8(uVar2,uVar4) + param_2[0x1f] * 8 + (param_2[0x20] << 0x20)
  ;
  param_1[0xe] = uVar2 + uVar6;
  uVar1 = param_2[0x23];
  uVar5 = uVar1 << 0x37;
  uVar3 = (uVar3 >> 3) + (ulong)CARRY8(uVar2,uVar6) + param_2[0x22] * 0x4000000;
  param_1[0xf] = uVar3 + uVar5;
  return (uVar1 >> 9) + (ulong)CARRY8(uVar3,uVar5);
}

