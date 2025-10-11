
void FUN_005bd7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 ulong *param_5)

{
  undefined8 uVar1;
  undefined8 local_10 [2];
  
  if (param_5 == (ulong *)0x0) {
    param_5 = &DAT_0093cd80;
  }
  uVar1 = 0;
  if ((*param_5 & 0x100) == 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x30);
  }
  local_10[0] = param_2;
  FUN_005bcc60(param_1,local_10,param_3,param_4,0,uVar1,0,param_5);
  return;
}

