
undefined8 FUN_0052da70(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = FUN_00409860();
  uVar5 = (ulong)*(int *)(lVar2 + 4);
  if (uVar5 <= param_4) {
    uVar4 = 0;
    do {
      FUN_004098b0(param_1);
      uVar3 = FUN_004098f0(param_1);
      lVar1 = param_2 + uVar4;
      lVar2 = param_3 + uVar4;
      uVar4 = uVar4 + uVar5;
      FUN_0049cb40(lVar2,lVar1,uVar3);
    } while (uVar4 <= param_4 - uVar5);
  }
  return 1;
}

