
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_mul_scatter4
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,uint param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  long local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  long local_50;
  
  plVar4 = (long *)(param_5 + (ulong)param_6 * 8);
  if ((_DAT_0093e5a0 & 0x80100) == 0x80100) {
    uVar9 = __rsaz_512_mulx(param_1,param_2,*param_1);
    __rsaz_512_reducex(uVar9);
  }
  else {
    uVar9 = __rsaz_512_mul(param_1,param_3);
    __rsaz_512_reduce(uVar9);
  }
  lVar5 = local_c8 + local_88;
  lVar6 = local_c0 + local_80 + (ulong)CARRY8(local_c8,local_88);
  uVar1 = (ulong)(CARRY8(local_c0,local_80) ||
                 CARRY8(local_c0 + local_80,(ulong)CARRY8(local_c8,local_88)));
  lVar7 = local_b8 + local_78 + uVar1;
  uVar1 = (ulong)(CARRY8(local_b8,local_78) || CARRY8(local_b8 + local_78,uVar1));
  lVar8 = local_b0 + local_70 + uVar1;
  uVar1 = (ulong)(CARRY8(local_b0,local_70) || CARRY8(local_b0 + local_70,uVar1));
  uVar2 = (ulong)(CARRY8(local_a8,local_68) || CARRY8(local_a8 + local_68,uVar1));
  uVar3 = (ulong)(CARRY8(local_a0,local_60) || CARRY8(local_a0 + local_60,uVar2));
  __rsaz_512_subtract();
  *plVar4 = lVar5;
  plVar4[0x10] = lVar6;
  plVar4[0x20] = lVar7;
  plVar4[0x30] = lVar8;
  plVar4[0x40] = local_a8 + local_68 + uVar1;
  plVar4[0x50] = local_a0 + local_60 + uVar2;
  plVar4[0x60] = local_98 + local_58 + uVar3;
  plVar4[0x70] = local_90 + local_50 +
                 (ulong)(CARRY8(local_98,local_58) || CARRY8(local_98 + local_58,uVar3));
  return;
}

