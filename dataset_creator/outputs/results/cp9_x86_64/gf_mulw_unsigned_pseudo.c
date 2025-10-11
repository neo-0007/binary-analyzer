
void gf_mulw_unsigned(ulong *param_1,long param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  long lVar9;
  
  lVar9 = 0;
  auVar5 = ZEXT816(0);
  auVar2 = ZEXT816(0);
  do {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = CONCAT44(0,param_3);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulong *)(param_2 + lVar9);
    auVar1 = auVar1 * auVar3 + auVar2;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = CONCAT44(0,param_3);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulong *)(param_2 + 0x20 + lVar9);
    auVar3 = auVar2 * auVar4 + auVar5;
    auVar2 = auVar1 >> 0x38;
    *(ulong *)((long)param_1 + lVar9) = auVar1._0_8_ & 0xffffffffffffff;
    auVar5 = auVar3 >> 0x38;
    *(ulong *)((long)param_1 + lVar9 + 0x20) = auVar3._0_8_ & 0xffffffffffffff;
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0x20);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1[4];
  auVar6 = auVar5 + auVar2 + auVar6;
  uVar8 = auVar6._0_8_;
  param_1[5] = param_1[5] + (uVar8 >> 0x38 | auVar6._8_8_ << 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = *param_1;
  param_1[4] = uVar8 & 0xffffffffffffff;
  uVar8 = SUB168(auVar5 + auVar7,0);
  *param_1 = uVar8 & 0xffffffffffffff;
  param_1[1] = param_1[1] + (uVar8 >> 0x38 | SUB168(auVar5 + auVar7,8) * 0x100);
  return;
}

