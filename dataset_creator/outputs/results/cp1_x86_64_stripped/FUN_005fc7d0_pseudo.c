
ulong FUN_005fc7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = FUN_004ab640();
  if (lVar2 != 0) {
    pcVar3 = (code *)FUN_004ab710(param_1);
    if (pcVar3 == (code *)0x0) {
      pcVar3 = (code *)FUN_004ab6f0(param_1);
      if (pcVar3 == (code *)0x0) {
        FUN_004ab650(param_1,1);
        iVar1 = FUN_00538a80(*(undefined8 *)(lVar2 + 0x18),param_2,0,param_3,param_4,param_5);
        return (ulong)(iVar1 != 0);
      }
      lVar4 = (*pcVar3)(param_1,6,param_2,4,(long)param_5,0);
      if (0 < lVar4) {
        FUN_004ab650(param_1,1);
        iVar1 = FUN_00538a80(*(undefined8 *)(lVar2 + 0x18),param_2,0,param_3,param_4,param_5);
        if (iVar1 != 0) {
          uVar5 = (*pcVar3)(param_1,6,param_2,4,(long)param_5,1);
          return uVar5;
        }
      }
    }
    else {
      lVar4 = (*pcVar3)(param_1,6,param_2,0,4,(long)param_5,1,0);
      if (0 < lVar4) {
        FUN_004ab650(param_1,1);
        iVar1 = FUN_00538a80(*(undefined8 *)(lVar2 + 0x18),param_2,0,param_3,param_4,param_5);
        if (iVar1 != 0) {
          uVar5 = (*pcVar3)(param_1,0x86,param_2,0,4,(long)param_5,1,0);
          return uVar5;
        }
      }
    }
  }
  return 0;
}

