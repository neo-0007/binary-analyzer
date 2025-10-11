
void FUN_00697510(long *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(*param_1 + -0x18) + (long)param_1;
  lVar3 = *(long *)(*param_2 + -0x18) + (long)param_2;
  FUN_006704c0(lVar4,lVar3);
  FUN_0066efe0(lVar4,lVar4 + 0xd0);
  FUN_0066efe0(lVar3,lVar3 + 0xd0);
  uVar2 = *(undefined8 *)(lVar4 + 0xd8);
  *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(lVar3 + 0xd8);
  *(undefined8 *)(lVar3 + 0xd8) = uVar2;
  uVar1 = *(undefined1 *)(lVar4 + 0xe0);
  *(undefined1 *)(lVar4 + 0xe0) = *(undefined1 *)(lVar3 + 0xe0);
  *(undefined1 *)(lVar3 + 0xe0) = uVar1;
  uVar1 = *(undefined1 *)(lVar4 + 0xe1);
  *(undefined1 *)(lVar4 + 0xe1) = *(undefined1 *)(lVar3 + 0xe1);
  *(undefined1 *)(lVar3 + 0xe1) = uVar1;
  FUN_00694bd0(param_1 + 1,param_2 + 1);
  return;
}

