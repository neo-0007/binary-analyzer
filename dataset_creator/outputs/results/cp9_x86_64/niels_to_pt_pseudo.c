
void niels_to_pt(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  gf_add(param_1 + 0x40,param_2 + 0x40,param_2);
  gf_sub(param_1,param_2 + 0x40,param_2);
  gf_mul(param_1 + 0xc0,param_1 + 0x40,param_1);
  uVar7 = ONE._56_8_;
  uVar6 = ONE._48_8_;
  uVar5 = ONE._40_8_;
  uVar4 = ONE._32_8_;
  uVar3 = ONE._24_8_;
  uVar2 = ONE._16_8_;
  uVar1 = ONE._8_8_;
  *(undefined8 *)(param_1 + 0x80) = ONE._0_8_;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  return;
}

