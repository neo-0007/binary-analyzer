
void gcm_gmult_4bit(ulong *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = (ulong)(byte)(*(byte *)((long)param_1 + 0xf) << 4);
  lVar1 = 0xe;
  uVar4 = *(ulong *)(param_2 + 8 + uVar7);
  uVar7 = *(ulong *)(param_2 + uVar7);
  uVar2 = (ulong)*(byte *)((long)param_1 + 0xf);
  uVar5 = uVar4;
  while( true ) {
    uVar6 = uVar2 & 0xfffffffffffffff0;
    uVar3 = uVar5 >> 4 ^ *(ulong *)(param_2 + 8 + uVar6);
    uVar2 = (ulong)*(byte *)((long)param_1 + lVar1);
    uVar6 = uVar7 >> 4 ^ *(ulong *)(param_2 + uVar6) ^ *(ulong *)(&DAT_00427200 + (uVar4 & 0xf) * 8)
    ;
    uVar5 = (ulong)(byte)(*(byte *)((long)param_1 + lVar1) << 4);
    uVar4 = uVar3 ^ uVar7 << 0x3c;
    lVar1 = lVar1 + -1;
    if (lVar1 < 0) break;
    uVar4 = uVar4 >> 4 ^ *(ulong *)(param_2 + 8 + uVar5);
    uVar7 = uVar6 >> 4 ^ *(ulong *)(param_2 + uVar5) ^ *(ulong *)(&DAT_00427200 + (uVar3 & 0xf) * 8)
    ;
    uVar5 = uVar4 ^ uVar6 << 0x3c;
  }
  uVar4 = uVar4 >> 4 ^ *(ulong *)(param_2 + 8 + uVar5);
  uVar3 = uVar6 >> 4 ^ *(ulong *)(param_2 + uVar5) ^ *(ulong *)(&DAT_00427200 + (uVar3 & 0xf) * 8);
  uVar7 = (uVar4 ^ uVar6 << 0x3c) >> 4 ^ *(ulong *)(param_2 + 8 + (uVar2 & 0xfffffffffffffff0));
  uVar5 = uVar7 ^ uVar3 << 0x3c;
  uVar4 = uVar3 >> 4 ^ *(ulong *)(param_2 + (uVar2 & 0xfffffffffffffff0)) ^
          *(ulong *)(&DAT_00427200 + (uVar4 & 0xf) * 8);
  param_1[1] = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18
               | (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 |
               (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28 | uVar7 << 0x38;
  *param_1 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
             (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
             (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
  return;
}

