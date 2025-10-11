
void FUN_00506740(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
                 long param_6)

{
  ulong uVar1;
  ulong unaff_RBX;
  ulong uVar2;
  ulong in_R10;
  long in_R11;
  ulong uVar3;
  ulong unaff_R12;
  ulong uVar4;
  long unaff_R13;
  ulong uVar5;
  ulong unaff_R14;
  ulong uVar6;
  long unaff_R15;
  
  uVar3 = in_R11 << 0xd | in_R10 >> 0x33;
  uVar4 = unaff_R12 + uVar3;
  uVar1 = param_4 << 0xd | unaff_RBX >> 0x33;
  uVar2 = param_5 + uVar1;
  uVar5 = (unaff_R13 + (ulong)CARRY8(unaff_R12,uVar3)) * 0x2000 | uVar4 >> 0x33;
  uVar6 = unaff_R14 + uVar5;
  uVar3 = (in_R10 & 0x7ffffffffffff) +
          ((param_6 + (ulong)CARRY8(param_5,uVar1)) * 0x2000 | uVar2 >> 0x33);
  uVar1 = (unaff_RBX & 0x7ffffffffffff) +
          ((unaff_R15 + (ulong)CARRY8(unaff_R14,uVar5)) * 0x2000 | uVar6 >> 0x33) * 0x13;
  *param_1 = uVar1 & 0x7ffffffffffff;
  param_1[1] = (uVar2 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  param_1[2] = uVar3 & 0x7ffffffffffff;
  param_1[3] = (uVar4 & 0x7ffffffffffff) + (uVar3 >> 0x33);
  param_1[4] = uVar6 & 0x7ffffffffffff;
  return;
}

