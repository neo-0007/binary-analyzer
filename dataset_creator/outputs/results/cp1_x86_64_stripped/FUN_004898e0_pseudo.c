
undefined8
FUN_004898e0(ulong *param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
            ulong param_6,long param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  uVar2 = 0;
  if (param_7 + 1U <= uVar1) {
    uVar3 = (ulong)*(byte *)(param_3 + -1 + uVar1);
    uVar4 = param_7 + 1U + uVar3;
    uVar3 = uVar3 + 1;
    uVar4 = ~((long)((uVar1 - uVar4 ^ uVar4 | uVar4 ^ uVar1) ^ uVar1 |
                    (param_6 - uVar3 ^ uVar3 | uVar3 ^ param_6) ^ param_6) >> 0x3f);
    *param_1 = uVar1 - (uVar3 & uVar4);
    uVar2 = FUN_00489630(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar4,param_8);
  }
  return uVar2;
}

