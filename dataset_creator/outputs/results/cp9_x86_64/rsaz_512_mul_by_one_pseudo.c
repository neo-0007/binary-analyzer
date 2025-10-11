
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rsaz_512_mul_by_one(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,
                        undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  if ((_DAT_0093e5a0 & 0x80100) == 0x80100) {
    __rsaz_512_reducex(param_1,param_2,param_4);
  }
  else {
    __rsaz_512_reduce();
  }
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  return;
}

