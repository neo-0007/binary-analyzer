
ulong FUN_00443860(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = param_1 + 0xf8;
  pcVar5 = *(code **)(param_1 + 0x2b0);
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    if (pcVar5 != (code *)0x0) {
      if (((pcVar5 == FUN_00495dc0) && (0xf < param_3)) &&
         (pcVar5 = FUN_00495dc0, *(code **)(param_1 + 0x260) == FUN_00550be0)) {
        uVar3 = (ulong)(-*(int *)(param_1 + 0x268) & 0xf);
        iVar2 = FUN_0054e990(lVar1,param_2,param_4,uVar3,FUN_00495dc0);
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        lVar4 = FUN_0054bb40(param_2 + uVar3,param_4 + uVar3,param_3 - uVar3,
                             *(undefined8 *)(param_1 + 0x278),lVar1,param_1 + 0x138);
        pcVar5 = *(code **)(param_1 + 0x2b0);
        *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + lVar4;
        lVar4 = uVar3 + lVar4;
        param_3 = param_3 - lVar4;
        param_4 = param_4 + lVar4;
        param_2 = param_2 + lVar4;
      }
      iVar2 = FUN_0054f140(lVar1,param_2,param_4,param_3,pcVar5);
      return (ulong)(iVar2 == 0);
    }
    iVar2 = FUN_0054e990(lVar1,param_2,param_4,param_3);
    uVar3 = (ulong)(iVar2 == 0);
  }
  else if (pcVar5 == (code *)0x0) {
    iVar2 = FUN_0054e520(lVar1,param_2,param_4,param_3);
    uVar3 = (ulong)(iVar2 == 0);
  }
  else {
    if (((pcVar5 == FUN_00495dc0) && (0x1f < param_3)) &&
       (pcVar5 = FUN_00495dc0, *(code **)(param_1 + 0x260) == FUN_00550be0)) {
      uVar3 = (ulong)(-*(int *)(param_1 + 0x268) & 0xf);
      iVar2 = FUN_0054e520(lVar1,param_2,param_4,uVar3,FUN_00495dc0);
      if (iVar2 != 0) {
        return 0;
      }
      lVar4 = FUN_0054be00(param_2 + uVar3,param_4 + uVar3,param_3 - uVar3,
                           *(undefined8 *)(param_1 + 0x278),lVar1,param_1 + 0x138);
      pcVar5 = *(code **)(param_1 + 0x2b0);
      *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + lVar4;
      lVar4 = uVar3 + lVar4;
      param_3 = param_3 - lVar4;
      param_4 = param_4 + lVar4;
      param_2 = param_2 + lVar4;
    }
    iVar2 = FUN_0054ede0(lVar1,param_2,param_4,param_3,pcVar5);
    uVar3 = (ulong)(iVar2 == 0);
  }
  return uVar3;
}

