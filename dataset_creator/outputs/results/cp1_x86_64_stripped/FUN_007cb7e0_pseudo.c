
ushort FUN_007cb7e0(long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  byte bVar4;
  ulong in_XMM0_Qb;
  ulong in_XMM1_Qb;
  
  uVar3 = in_XMM1_Qb & 0xffffffffffff;
  uVar2 = (ushort)(in_XMM1_Qb >> 0x30) & 0x7fff;
  uVar1 = (ushort)(in_XMM0_Qb >> 0x30) & 0x7fff;
  if ((in_XMM0_Qb & 0x7fff000000000000) == 0) {
    if (param_1 == 0 && (in_XMM0_Qb & 0xffffffffffff) == 0) {
      if ((in_XMM1_Qb & 0x7fff000000000000) == 0) {
        bVar4 = (uVar3 != 0 || param_2 != 0) * '\x02';
LAB_007cb919:
        uVar1 = 0;
        goto LAB_007cb91b;
      }
joined_r0x007cb8cb:
      if (uVar2 != 0x7fff) {
        return uVar1;
      }
      if (param_2 == 0 && uVar3 == 0) {
        return uVar1;
      }
      if ((in_XMM1_Qb & 0x800000000000) != 0) {
        return 1;
      }
      bVar4 = 0;
    }
    else {
      bVar4 = 2;
      if ((uVar2 != 0x7fff) || (param_2 == 0 && uVar3 == 0)) goto LAB_007cb84c;
      if ((in_XMM1_Qb & 0x800000000000) != 0) {
        uVar1 = 1;
        goto LAB_007cb84c;
      }
    }
  }
  else {
    if ((in_XMM1_Qb & 0x7fff000000000000) == 0) {
      bVar4 = (uVar3 != 0 || param_2 != 0) * '\x02';
      if (uVar1 != 0x7fff) goto LAB_007cb919;
    }
    else {
      bVar4 = 0;
      if (uVar1 != 0x7fff) {
        uVar1 = 0;
        goto joined_r0x007cb8cb;
      }
    }
    if (param_1 == 0 && (in_XMM0_Qb & 0xffffffffffff) == 0) {
      if ((uVar2 != 0x7fff) || (uVar3 == 0 && param_2 == 0)) goto LAB_007cb919;
    }
    else {
      if ((in_XMM0_Qb & 0x800000000000) == 0) goto LAB_007cb958;
      if (uVar2 != 0x7fff) {
        uVar1 = 1;
        goto LAB_007cb91b;
      }
    }
    uVar1 = 1;
    if ((param_2 == 0 && uVar3 == 0) || ((in_XMM1_Qb & 0x800000000000) != 0)) {
LAB_007cb91b:
      if (bVar4 == 0) {
        return uVar1;
      }
      goto LAB_007cb84c;
    }
  }
LAB_007cb958:
  bVar4 = bVar4 | 1;
  uVar1 = 1;
LAB_007cb84c:
  FUN_007cbbe0(bVar4);
  return uVar1;
}

