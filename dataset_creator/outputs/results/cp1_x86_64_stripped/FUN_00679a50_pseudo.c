
uint FUN_00679a50(long *param_1,ulong param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)((long)param_1 + (param_2 & 0xff) + 0x139);
  uVar2 = (uint)bVar1;
  if (bVar1 == 0) {
    uVar3 = (uint)param_2;
    if (*(code **)(*param_1 + 0x40) != FUN_0063d3c0) {
      uVar3 = (**(code **)(*param_1 + 0x40))(param_1,(int)(char)param_2,(int)(char)param_3);
    }
    uVar2 = param_3;
    if ((char)param_3 != (char)uVar3) {
      *(char *)((long)param_1 + (param_2 & 0xff) + 0x139) = (char)uVar3;
      uVar2 = uVar3;
    }
  }
  return uVar2;
}

