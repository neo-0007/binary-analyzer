
void FUN_0047a4d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(param_1 + 0xf8);
  lVar1 = lVar3 + 0x28;
  lVar2 = lVar3 + 0x97;
  iVar4 = FUN_0047a230(*(undefined8 *)(param_1 + 0xe8),lVar3,lVar2,1,lVar1,
                       *(undefined8 *)(param_1 + 0xe8),param_2,param_3,param_4,param_5);
  if (iVar4 != 0) {
    thunk_FUN_00713a50(lVar1,lVar2,*(undefined8 *)(param_1 + 0xe8));
    FUN_0047a230(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf8),lVar2,0,lVar1,
                 *(undefined8 *)(param_1 + 0xe8),0,0,0,0);
  }
  return;
}

