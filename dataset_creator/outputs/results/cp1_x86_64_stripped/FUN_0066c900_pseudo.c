
long * FUN_0066c900(long *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(*param_1 + -0x18) + (long)param_1;
  lVar4 = *(long *)(*param_2 + -0x18) + (long)param_2;
  FUN_006704c0(lVar5,lVar4);
  FUN_0066f990(lVar5,lVar5 + 0xd0);
  FUN_0066f990(lVar4,lVar4 + 0xd0);
  uVar3 = *(undefined8 *)(lVar5 + 0xd8);
  *(undefined8 *)(lVar5 + 0xd8) = *(undefined8 *)(lVar4 + 0xd8);
  *(undefined8 *)(lVar4 + 0xd8) = uVar3;
  uVar2 = *(undefined4 *)(lVar5 + 0xe0);
  *(undefined4 *)(lVar5 + 0xe0) = *(undefined4 *)(lVar4 + 0xe0);
  *(undefined4 *)(lVar4 + 0xe0) = uVar2;
  uVar1 = *(undefined1 *)(lVar5 + 0xe4);
  *(undefined1 *)(lVar5 + 0xe4) = *(undefined1 *)(lVar4 + 0xe4);
  lVar5 = param_2[1];
  *(undefined1 *)(lVar4 + 0xe4) = uVar1;
  lVar4 = param_1[1];
  param_1[1] = lVar5;
  param_2[1] = lVar4;
  FUN_0066c630(param_1 + 3,param_2 + 3);
  return param_1;
}

