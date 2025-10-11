
bool FUN_004d5380(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  lVar2 = FUN_004b7690();
  if (lVar2 == 0) {
    bVar4 = false;
  }
  else {
    if (((*(byte *)(param_2 + 0x80) & 1) == 0) ||
       (lVar3 = FUN_004b9bc0(param_2 + 0x88,*(undefined8 *)(param_2 + 0xc0),
                             *(undefined8 *)(param_2 + 8),param_1), lVar3 != 0)) {
      FUN_004b7d90(lVar2,param_3,4);
      iVar1 = (**(code **)(*(long *)(param_2 + 0xb8) + 0x18))
                        (param_2,param_4,*(undefined8 *)(param_2 + 0x18),lVar2,
                         *(undefined8 *)(param_2 + 8),param_1);
      bVar4 = iVar1 != 0;
    }
    else {
      bVar4 = false;
    }
    FUN_004b7f20(lVar2);
  }
  return bVar4;
}

