
bool FUN_0047e430(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = false;
  if (param_1 != 0) {
    lVar2 = FUN_0041cdd0(param_2,"algorithm-id");
    bVar3 = true;
    if (lVar2 != 0) {
      iVar1 = FUN_0041e220(lVar2,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118));
      bVar3 = iVar1 != 0;
    }
  }
  return bVar3;
}

