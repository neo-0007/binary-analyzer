
undefined8 FUN_005c0650(long param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(*(undefined8 **)(param_1 + 0x40))[1];
  if ((*(byte *)(param_1 + 0x31) & 2) != 0) {
    puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x40);
  }
  FUN_004ab6c0(param_1,0xf);
  iVar1 = (int)*puVar5;
  if (param_3 <= (int)*puVar5) {
    iVar1 = param_3 + -1;
  }
  if (iVar1 < 1) {
    *param_2 = 0;
    return 0;
  }
  uVar2 = 1;
  do {
    uVar4 = uVar2 & 0xffffffff;
    if (*(char *)(puVar5[1] + -1 + uVar2) == '\n') break;
    uVar2 = uVar2 + 1;
  } while (uVar2 != iVar1 + 1);
  uVar3 = FUN_005c0590(param_1,param_2,uVar4);
  if (0 < (int)uVar3) {
    param_2[(int)uVar3] = 0;
  }
  return uVar3;
}

