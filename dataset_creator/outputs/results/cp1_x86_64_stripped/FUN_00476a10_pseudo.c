
ulong FUN_00476a10(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 0x38);
  if (uVar6 == 0) {
    uVar6 = FUN_00545040(*(undefined8 *)(param_1 + 8));
    return uVar6;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x50);
  if (*(uint *)(param_1 + 0x50) == 0) {
    if (param_3 == 0xd) {
      uVar4 = 1;
      *(undefined8 *)(param_1 + 0x40) = *param_2;
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 1);
      uVar1 = *(undefined1 *)((long)param_2 + 0xc);
      *(undefined4 *)(param_1 + 0x50) = 1;
      *(undefined1 *)(param_1 + 0x4c) = uVar1;
    }
  }
  else {
    uVar4 = 0;
    if (param_3 <= uVar6) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      uVar5 = FUN_0043c7e0(param_1 + 0x10);
      uVar6 = FUN_00484900(uVar5,param_1 + 0x54,param_1 + 0x98,param_1 + 0x40,param_2,param_3,uVar6,
                           uVar3,uVar2,0);
      return uVar6;
    }
  }
  return uVar4;
}

