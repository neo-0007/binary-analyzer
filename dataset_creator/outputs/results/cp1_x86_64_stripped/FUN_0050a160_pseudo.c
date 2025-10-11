
void FUN_0050a160(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_3 - 1;
  uVar1 = -param_3;
  *param_1 = *param_2 & uVar1 ^ *param_1 & uVar2;
  param_1[1] = param_2[1] & uVar1 ^ param_1[1] & uVar2;
  param_1[2] = param_2[2] & uVar1 ^ param_1[2] & uVar2;
  param_1[3] = uVar1 & param_2[3] ^ uVar2 & param_1[3];
  return;
}

